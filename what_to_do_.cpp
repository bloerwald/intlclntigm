api/v1/builds:
  name needs to be of format 'WOW%s-%%lluPATCH%%u.%%u.%%u' % (server ? '-SERVER' : '')

CVARS:
  SET enableStreaming "0"
    SET portal "beta"

BINARY:
  GetLocalFilepath(char  const*, unsigned long long, char *, unsigned long):
    Allow local files, no matter if in manifest or not

    00D3 8D50: 49 89 F7 48 89 FB 80 3D  E3 13 82 01 00 74 0C 48  I..H...= .....t.H
    00D3 8D60: 89 DF E8 C9 BA 1B 00 84  C0 74 64 45 31 F6 48 83  ........ .tdE1.H.

    00D3 8D50: 49 89 F7 48 89 FB 90 90  90 90 90 90 90 90 90 90  I..H.... ........
    00D3 8D60: 90 90 90 90 90 90 90 90  90 EB 64 45 31 F6 48 83  ........ ..dE1.H.

  AsyncFile::Initialize(unsigned int, unsigned int):
    Always lea     rdi, AsyncFileDiskThread(void *) instead of AsyncFileNetThread(void *)

    00E6 52D0: 48 8D 56 10 41 83 7D 04  01 48 8B 4D D0 75 11 48  H.V.A.}. .H.M.u.H
    00E6 52E0: 8D 3D BA 4F 00 00 EB 0F  0F 1F 84 00 00 00 00 00  .=.O.... ........

    00E6 52D0: 48 8D 56 10 41 83 7D 04  01 48 8B 4D D0 75 11 90  H.V.A.}. .H.M.u..
    00E6 52E0: 90 90 90 90 90 90 90 90  90 90 90 90 90 90 90 90  ........ ........

  OsSetFileAttributes(char  const*, unsigned int):
    support all bits instead of none at all

    00EE C960: 00 00 00 48 8D 15 7B 2B  B8 00 48 8D 0D 99 2B B8  ...H..{+ ..H...+.
    00EE C970: 00 4C 8D 05 BB 2B B8 00  BE C6 02 00 00 30 C0 E8  .L...+.. .....0..
    00EE C980: 2C 30 43 FF 83 E3 01 84  C0 74 01 CC 48 8D B5 E0  ,0C..... .t..H...

    00EE C960: 00 00 00 90 90 90 90 90  90 90 90 90 90 90 90 90  ........ ........
    00EE C970: 90 90 90 90 90 90 90 90  90 90 90 90 90 30 C0 90  ........ .....0..
    00EE C980: 90 90 90 90 83 E3 01 84  C0 74 01 CC 48 8D B5 E0  ........ .t..H...

  Battlenet::Client::Authentication::LogonResponse::Result == Choice<invalid, fail>
    patch invalid to Battlenet::Client::Authentication::LogonResponseSuccess

    01bd 4ef0: FF 00 00 03 44 00 00 03  45 10 00 00 03 30 10 00
    01bd 4f00: 00 03 46 86 01 01 00 01  00 00 03 47 00 00 03 48
    01bd 4f10: 10 00 00 03 37 10 00 00  03 26 8E 01 00 01 00 8E


  HACK
    dont delete invalid auth modules HACKY:
    Creep::ClientSideCache::DeleteTask::Run: dont call File::Delete
    0011 1b70: 40 48 8D 3D 78 6E 8B 01  48 85 C0 48 0F 45 F8 90
    0011 1b80: 90 90 90 90 48 8B 0B 48  8B 49 18 48 89 DF 84 C0
    0011 1b90: 74 09 BE 02 00 00 00 FF  D1 EB 07 BE 01 00 00 00



    dont render csimplemodel models:

    00DC E580: 89 A7 10 03 00 00 41 83  BF 30 03 00 00 FF 75 4F  ......A. .0....uO
    00DC E590: 48 8D B5 20 FF FF FF 4C  89 E7 E8 B1 A7 1A 00 E8  H.. ...L ........

    00DC E580: 89 A7 10 03 00 00 41 83  BF 30 03 00 00 FF>EB<4F  ......A. .0.....O
    00DC E590: 48 8D B5 20 FF FF FF 4C  89 E7 E8 B1 A7 1A 00 E8  H.. ...L ........

    OR

    ignore assertions for mission shaders in CM2SceneRender::CM2SceneRender 0000000100F8086A
    00f8 0860: E4 F1 FF 48 89 83 08 01  00 00 48 83 BB F0 00 00
    00f8 0870: 00 00 90 90 48 83 BB F8  00 00 00 00 90 90 48 83
    00f8 0880: BB 00 01 00 00 00 90 90  90 90 90 90 48 83 BB 08
    00f8 0890: 01 00 00 00 90 90 90 90  90 90 48 83 C4 18 5B 5D
    00f8 08a0: C3 C7 44 24 08 11 11 11  11 C7 04 24 00 00 00 00

    always use permutes 0 in CM2Scene::ComputeElementShaders
    00f7 c3a0: CB 45 85 D2 0F 45 C2 8B  7D B8 41 0F 44 FC 6B FF
    00f7 c3b0: 0A 01 C9 83 E1 04 01 C7  09 D9 B1 00 90 41 6B C2
    00f7 c3c0: 14 41 09 C7 89 4E 50 41  01 FF BB FF FF FF FF 41
    00f7 c3d0: 83 F8 04 0F 45 DA 90 BB  00 00 00 00 89 5E 5C C7
    00f7 c3e0: 46 54 FF FF FF FF C7 46  58 FF FF FF FF 4C 8B 46

    dont exit on exceptions to get backtrace from osx
    0031 f200: FF 00 00 10 85 8B 5D 18  75 04 85 C0 75 09 E8 FD
    0031 f210: 8C BC 00 85 DB 90 90 48  8B 05 DA 51 D8 01 48 8B
    0031 f220: 00 48 3B 45 D0 75 69 30  C0 48 81 C4 98 05 00 00



DBCs:
  ConsoleScripts.dbc: new, can be empty, sizeof (rec) = 0x0c
  ChrRaces.dbc: one row less, sizeof (rec) = 0x9c
  ChrClasses.dbc: one row less, sizeof (rec) = 0x48
  Locale.db2: one row more, sizeof (rec) = 0x18
  ItemAppearance.db2: one row less, sizeof (rec) = 0x08
  TextureFileData.db2: one row less, sizeof (rec) = 0x10

VERSION:
  03 47 00 00   18179
  1C 49 00 00   18716


Interesting stuff:
  cvars:
    SET useInternalDBCs "1"
    SET agentLogLevel "2"
    SET bnetLogSeverity "2"

    cmaaShowEdges
    DebugShipPath
    ShowMapActors
    ShowActors
    DebugScenes
    AutoRestartSceneScripts
    AutoRestartScenesGlobalsScripts
    AnimKitDebug
    GameObjInteractBounds
    GameObjForceMouseOver
    MissileDebugMotion
    ReloadObjModels
    ReloadObjModel
    ObjectSelectionCircle
    PetBattleSceneClientSimulate
    PetBattleSceneUseTestPlayers
    PetBattleSceneUseCustomScripts
    PetBattleSceneEnableWarnings
    PetBattleSceneMobileAnims
    showTaxiStreamingPrediction
    ItemBonusDebug
    drawServerSidePlayerPos
    collisionOverride
    enableMountValidation 2
    drawModelAttachments
    drawModelAttachmentsSelect id
    drawModelEvents
    drawModelEventsTrigger
    drawModelEventsSelect
    drawModelSphere
    drawNearbyTriangles
    conversationDebug
    DebugTargetPath
    ppmDebugging
    PetBattleDebugCameraCollision
    PetBattleAbandonOnScriptError
    PetBattleDebugLocationSearch
    superTrackerDist
    spellBookSort
    lfgDebug
    vignetteDebug
    showPortLocs
    showMapHighlights
    showAllMapPOI
    enableFileNotification
    installType WowT WowB Wow
    checkSignatureFile
    ShowDebugFlags
    debugTargetInfo
    showHiddenCriteria
    showFeatsOfStrength
    showTooltipCriteria
    shadowDebug

  commands:
    CreateClientScene
    debugBeams
    DumpTextureNonImmutable
    DumpObjects
    LoadObjects


FF 17 C7 00 02 00 00 00 41 F6 C7 01 0F 84 25 01 00 00
                                    0F 85 88 00 00 00
                                                     call    qword ptr [rdi]
__text:0000000100D2ED07                              mov     dword ptr [rax], 2
__text:0000000100D2ED0D                                    test    r15b, 1
__text:0000000100D2ED11                              jz      loc_100D2EE3C

sudo nohup /opt/local/lib/mysql55/bin/mysqld_safe &
/opt/local/lib/mysql55/bin/mysql -uroot -ppassword -Dauth

TrinityCore.build $ ninja src/server/bnetserver/bnetserver && cp src/server/bnetserver/bnetserver /Users/berndlorwald/Documents/Blizzard/TrinityCore.install/bin/bnetserver && /Users/berndlorwald/Documents/Blizzard/TrinityCore.install/bin/bnetserver
TrinityCore.build $ pwd
/Users/berndlorwald/Documents/Blizzard/TrinityCore.build

/Applications/World of Warcraft Beta/World of Warcraft Beta.app/Contents/MacOS
MacOS $ ls
World of Warcraft
