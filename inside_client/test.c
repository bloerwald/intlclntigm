
#include <dlfcn.h>

#include <string.h>
#include <stdio.h>



// for caching the original fopen implementation
FILE * (*original_fopen) (const char *, const char *) = NULL;
// our fopen override implmentation

extern "C"
{
  FILE * fopen(const char * filename, const char * mode)
  {
      if (!original_fopen)
      {
          original_fopen = (FILE * (*) (const char *, const char *))dlsym(RTLD_NEXT, "fopen");
      }

      return original_fopen(filename, mode);
  }
}
