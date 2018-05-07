#include <assert.h>
#include "rd_route/rd_route.h"
#include <cstring>
#include <cstdio>
#include <cstdint>
#include <typeinfo>

  struct NetClient;
  struct CDataStore;
  struct MJElem
  {
    void* vtbl;
    void *data_start;
    void *metadata;
  };
  struct JamClientMessage
  {
    virtual void dtor();
    virtual void deleting_dtor();
    virtual void CliPut (CDataStore *dataStore);
    virtual void CliPutWithMsgID (CDataStore *dataStore);
    virtual bool CliParse (CDataStore *dataStore, bool);
    virtual MJElem GetMJElem() const;
  };
  struct JSONEmitter
  {
    virtual void Append(char const*, int)
    {

    }
  };
  struct myemitter : JSONEmitter
  {
    virtual void Append(char const* s, int c) override
    {
      while (c --> 0)
        putchar (*s++);
    }
  };

  void (*MJElemToJSON)(JSONEmitter* emitter, MJElem elem) = (void (*)(JSONEmitter* emitter, MJElem elem))(void*)0x1016FD580;

  void (*NetClient__Send_orig)(NetClient*, JamClientMessage*, signed int) = nullptr;
  void NetClient__Send(NetClient* that, JamClientMessage* clientMessage, signed int connectionID)
  {
    fputs("SEND ", stdout);
    fputs(typeid(*clientMessage).name(), stdout);
    fputs(" ", stdout);
    myemitter emitter;
    MJElemToJSON (&emitter, clientMessage->GetMJElem());
    putchar('\n');
    NetClient__Send_orig (that, clientMessage, connectionID);
  }

  void (*PacketUtils_EnableLog)(char const*) = (void (*)(char const*))0x100D34C50;

  struct ClientUpdateObject : JamClientMessage {};
  void (*ObjectUpdateHandler_orig)(ClientUpdateObject *updateObject) = nullptr;
  void ObjectUpdateHandler(ClientUpdateObject *updateObject)
  {
    fputs("RECEIVE ", stdout);
    fputs(typeid(*updateObject).name(), stdout);
    fputs(" ", stdout);
    myemitter emitter;
    MJElemToJSON (&emitter, updateObject->GetMJElem());
    putchar('\n');
    ObjectUpdateHandler_orig (updateObject);
  }

  struct JamCliObjCreate;
  struct CDataStore;
  void (*JamCliObjCreate__CliGet_orig)(JamCliObjCreate*, CDataStore* dataStore) = nullptr;
  void JamCliObjCreate__CliGet(JamCliObjCreate* objCreate, CDataStore* dataStore)
  {
    JamCliObjCreate__CliGet_orig (objCreate, dataStore);
    fputs("JamCliObjCreate ", stdout);
    myemitter emitter;
    MJElem mjelem;
    mjelem.vtbl = (void*)0x102174FF0;
    mjelem.data_start = objCreate;
    mjelem.metadata = (void*)0x1021738D8;
    MJElemToJSON (&emitter, mjelem);
    putchar('\n');
  }

  void (*dbghelp_log_modules_orig)();
  void dbghelp_log_modules()
  {
    return;
  }

  bool (*CASLoadFileImpl_orig)(const char *SOURCE_FILENAME, int SOURCE_LINE, const char *filename, void **buffer, unsigned int *file_size, unsigned int a6) = nullptr;
  bool CASLoadFileImpl(const char *SOURCE_FILENAME, int SOURCE_LINE, const char *filename, void **buffer, unsigned int *file_size, unsigned int a6)
  {
    fputs("LOAD ", stdout);
    fputs(filename, stdout);
    bool result (CASLoadFileImpl_orig(SOURCE_FILENAME, SOURCE_LINE, filename, buffer, file_size, a6));
    puts (result ? "" : " FAILED");
    return result;
  }

  void* dlmalloc(std::size_t size)
  {
    return malloc(size);
  }
  void* dlrealloc(void* ptr, std::size_t size)
  {
    return realloc(ptr, size);
  }
  void dlfree(void*)
  {
  }

__attribute__((constructor)) void dylib_ctor()
{
  PacketUtils_EnableLog ("/dev/stdout");
  rd_route ((void*)0x100605260, (void*)NetClient__Send, (void **)&NetClient__Send_orig);
  //rd_route ((void*)0x1009141A0, (void*)ObjectUpdateHandler, (void **)&ObjectUpdateHandler_orig);
  ///rd_route ((void*)0x10167A810, (void*)JamCliObjCreate__CliGet, (void **)&JamCliObjCreate__CliGet_orig);

  rd_route ((void*)0x10176D720, (void*)dbghelp_log_modules, (void **)&dbghelp_log_modules_orig);
  rd_route ((void*)0x10176E690, (void*)dbghelp_log_modules, (void **)&dbghelp_log_modules_orig);
  rd_route ((void*)0x10176D7C0, (void*)dbghelp_log_modules, (void **)&dbghelp_log_modules_orig);
  rd_route ((void*)0x100FA1090, (void*)dbghelp_log_modules, (void **)&dbghelp_log_modules_orig);


  // rd_route ((void*)0x100D39450, (void*)CASLoadFileImpl, (void **)&CASLoadFileImpl_orig);

  // rd_route((void*)0x100322140, (void*)dlmalloc, nullptr);
  // rd_route((void*)0x1003241A0, (void*)dlrealloc, nullptr);
  // rd_route((void*)0x100323620, (void*)dlfree, nullptr);

}
