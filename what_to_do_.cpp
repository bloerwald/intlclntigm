CVARS:
    SET enableStreaming "0"

BINARY:
    debugging helps:
        unknown:
            Creep::Layer::LayerConnection::RecvInternal: always log?
            < 0019 0270: 0F 95 C1 0F B6 C9 48 8D  BD 98 CC FD FF 48 8D B5  ......H. .....H..  
            > 0019 0270: B9 FF FF FF FF 90 48 8D  BD 98 CC FD FF 48 8D B5  ......H. .....H..  

        dont exit on exceptions to get backtrace from osx:
            < 0031 F210: 8C BC 00 85 DB 74 71 48  8B 05 DA 51 D8 01 48 8B  .....tqH ...Q..H.  
            > 0031 F210: 8C BC 00 85 DB 90 90 48  8B 05 DA 51 D8 01 48 8B  .......H ...Q..H.  

        PacketUtils_LogSent always log: 
            < 00D3 4D20: FE 48 83 3D AF 4F 82 01  00 74 2D 8B 53 18 48 8D  .H.=.O.. .t-.S.H. 
            > 00D3 4D20: FE C7 43 1C 00 00 00 00  90 74 2D 8B 53 18 48 8D  ..C..... .t-.S.H.  

        PacketUtils_LogSent timestamp format human:
            < 00D3 4DC0: 1B 4F 82 01 00 74 32 48  8D 7D E0 E8 50 6D 1C 00  .O...t2H .}..Pm..  
            > 00D3 4DC0: 1B 4F 82 01 00 90 90 48  8D 7D E0 E8 50 6D 1C 00  .O.....H .}..Pm..

        PacketUtils_LogReceived timestamp format human:
            < 00D3 4F60: 00 45 8B 7C 24 18 83 3D  73 4D 82 01 00 74 41 48  .E.|$..= sM...tAH  
            > 00D3 4F60: 00 45 8B 7C 24 18 83 3D  73 4D 82 01 00 90 90 48  .E.|$..= sM.....H  

        OsOutputDebugString always log to console:
            < 00EE 7EB0: 8B 05 D2 CC 2E 01 85 C0  74 2D 48 8D 85 20 FF FF  ........ t-H.. .. 
            > 00EE 7EB0: 8B 05 D2 CC 2E 01 85 C0  90 90 48 8D 85 20 FF FF  ........ ..H.. ..  

    HACK: dont delete invalid auth modules:
        Creep::ClientSideCache::DeleteTask::Run: dont call File::Delete
        < 0011 1B70: 40 48 8D 3D 78 6E 8B 01  48 85 C0 48 0F 45 F8 E8  @H.=xn.. H..H.E..  
        < 0011 1B80: 3C B8 02 00 48 8B 0B 48  8B 49 18 48 89 DF 84 C0  <...H..H .I.H....
        > 0011 1B70: 40 48 8D 3D 78 6E 8B 01  48 85 C0 48 0F 45 F8 90  @H.=xn.. H..H.E..  
        > 0011 1B80: 90 90 90 90 48 8B 0B 48  8B 49 18 48 89 DF 84 C0  ....H..H .I.H....  

    auth modules always valid:
        if (Authentication::ModuleSignature::Validator::IsValid(void)) -> if (true)
        < 0016 0F30: E8 CB 6A 08 00 84 C0 0F  84 73 01 00 00 4D 89 E7  ..j..... .s...M..  
        > 0016 0F30: E8 CB 6A 08 00 84 C0 90  90 90 90 90 90 4D 89 E7  ..j..... .....M..  

    unknown:
        IP6::Address::Address(IP4::Address const&)
        < 0018 9DA0: 00 00 00 8B 06 89 47 0C  5D C3 66 0F 1F 44 00 00  ......G. ].f..D..  
        > 0018 9DA0: 00 00 00 B8 D5 F8 7F 82  89 47 0C 5D C3 90 90 90  ........ .G.]....  

    Allow local files, no matter if in manifest or not:
        GetLocalFilepath(char  const*, unsigned long long, char *, unsigned long)
        < 00D3 8D50: 49 89 F7 48 89 FB 80 3D  E3 13 82 01 00 74 0C 48  I..H...= .....t.H  
        < 00D3 8D60: 89 DF E8 C9 BA 1B 00 84  C0 74 64 45 31 F6 48 83  ........ .tdE1.H.  
        > 00D3 8D50: 49 89 F7 48 89 FB 90 90  90 90 90 90 90 90 90 90  I..H.... ........  
        > 00D3 8D60: 90 90 90 90 90 90 90 90  90 EB 64 45 31 F6 48 83  ........ ..dE1.H.  

    use disk file thread only, no net:
        AsyncFile::Initialize(unsigned int, unsigned int): lea     rdi, AsyncFileDiskThread(void *) instead of AsyncFileNetThread(void *)
        < 00E6 52D0: 48 8D 56 10 41 83 7D 04  01 48 8B 4D D0 75 11 48  H.V.A.}. .H.M.u.H  
        < 00E6 52E0: 8D 3D BA 4F 00 00 EB 0F  0F 1F 84 00 00 00 00 00  .=.O.... ........  
        > 00E6 52D0: 48 8D 56 10 41 83 7D 04  01 48 8B 4D D0 75 11 90  H.V.A.}. .H.M.u..  
        > 00E6 52E0: 90 90 90 90 90 90 90 90  90 90 90 90 90 90 90 90  ........ ........  

    fix OsSetFileAttributes(char  const*, unsigned int):
        support all bits instead of none at all
        < 00EE C960: 00 00 00 48 8D 15 7B 2B  B8 00 48 8D 0D 99 2B B8  ...H..{+ ..H...+.  
        < 00EE C970: 00 4C 8D 05 BB 2B B8 00  BE C6 02 00 00 30 C0 E8  .L...+.. .....0..  
        < 00EE C980: 2C 30 43 FF 83 E3 01 84  C0 74 01 CC 48 8D B5 E0  ,0C..... .t..H...  
        > 00EE C960: 00 00 00 90 90 90 90 90  90 90 90 90 90 90 90 90  ........ ........  
        > 00EE C970: 90 90 90 90 90 90 90 90  90 90 90 90 90 30 C0 90  ........ .....0..  
        > 00EE C980: 90 90 90 90 83 E3 01 84  C0 74 01 CC 48 8D B5 E0  ........ .t..H...  

    let portal cvar be absolute (connection patcher):
        < 01C1 D160: 2E 6C 6F 67 6F 6E 2E 62  61 74 74 6C 65 2E 6E 65  .logon.b attle.ne  
        < 01C1 D170: 74 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  t....... ........  
        > 01C1 D160: 00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  ........ ........  
        > 01C1 D170: 00 00 00 00 00 00 00 00  00 00 00 00 00 00 00 00  ........ ........  

    rsa key (connection patcher):
        < 01C5 E590: 91 D5 9B B7 D4 E1 83 A5  22 2B 5F 38 F4 B8 86 FF  ........ "+_8....  
        < 01C5 E5A0: 32 84 38 2D 99 38 8F BA  F3 C9 22 5D 51 73 1E 28  2.8-.8.. .."]Qs.(  
        < 01C5 E5B0: 87 24 8F B5 C9 B0 7C 95  D0 6B 5B F4 94 C5 94 9D  .$....|. .k[.....  
        < 01C5 E5C0: FA 6F 47 3A A3 86 C0 A8  37 F3 9B EF 2F C1 FB B3  .oG:.... 7.../...  
        < 01C5 E5D0: F4 1C 2B 0E D3 6D 88 BB  02 E0 4E 63 FA 76 E3 43  ..+..m.. ..Nc.v.C  
        < 01C5 E5E0: F9 01 FD 23 5E 6A 0B 14  EC 5E 91 34 0D 0B 4F A3  ...#^j.. .^.4..O.  
        < 01C5 E5F0: 5A 46 C5 5E DC B5 CD C1  47 6B 59 CA FA A9 BE 24  ZF.^.... GkY....$  
        < 01C5 E600: 9F F5 05 6B BB 67 8B B7  E4 3A 43 00 5C 1C B7 CA  ...k.g.. .:C.\...  
        < 01C5 E610: 98 90 79 77 6D 05 4F 83  CC AC 06 2E 50 11 87 23  ..ywm.O. ....P..#  
        < 01C5 E620: D8 A6 F7 6F 7A 59 87 A6  DE 5D D8 EC 44 BE 45 31  ...ozY.. .]..D.E1  
        < 01C5 E630: 7F 8A F0 58 89 53 74 DF  CC AD 01 24 D8 19 65 1C  ...X.St. ...$..e.  
        < 01C5 E640: 25 D3 E1 6B 8B DA FE 1D  A4 2C 8B 25 ED 7C FF 6A  %..k.... .,.%.|.j  
        < 01C5 E650: E0 63 D0 52 20 7E 62 49  D2 B3 6B CC 91 69 A5 08  .c.R ~bI ..k..i..  
        < 01C5 E660: 8B 69 65 FF B9 C9 17 02  5D D8 8E 1A 63 D9 2A 7F  .ie..... ]...c.*.  
        < 01C5 E670: DB E3 F8 76 6D EA 0E 36  98 78 19 C5 87 BA 6C 20  ...vm..6 .x....l   
        < 01C5 E680: B6 08 44 04 4C A8 D5 B6  9D 4D 00 20 40 00 90 04  ..D.L... .M. @...  
        > 01C5 E590: 5F D6 80 0B A7 FF 01 40  C7 BC 8E F5 6B 27 B0 BF  _......@ ....k'..  
        > 01C5 E5A0: F0 1D 1B FE DD 0B 1F 3D  B6 6F 1A 48 0D FB 51 08  .......= .o.H..Q.  
        > 01C5 E5B0: 65 58 4F DB 5C 6E CF 64  CB C1 6B 2E B8 0F 5D 08  eXO.\n.d ..k...].  
        > 01C5 E5C0: 5D 89 06 A9 77 8B 9E AA  04 B0 83 10 E2 15 4D 08  ]...w... ......M.  
        > 01C5 E5D0: 77 D4 7A 0E 5A B0 BB 00  61 D7 A6 75 DF 06 64 88  w.z.Z... a..u..d.  
        > 01C5 E5E0: BB B9 CA B0 18 8B 54 13  E2 CB 33 DF 17 D8 DA A9  ......T. ..3.....  
        > 01C5 E5F0: A5 60 A3 1F 4E 27 05 98  6F AA EE 14 3B F3 97 A8  .`..N'.. o...;...  
        > 01C5 E600: 12 02 94 0D 84 DC 0E F1  76 23 95 36 13 F9 A9 C5  ........ v#.6....  
        > 01C5 E610: 48 DB DA 86 BE 29 22 54  44 9D 9F 80 7B 07 80 30  H....)"T D...{..0  
        > 01C5 E620: EA D2 83 CC CE 37 D1 D1  CF 85 BE 91 25 CE C0 CC  .....7.. ....%...  
        > 01C5 E630: 55 C8 C0 FB 38 C5 49 03  6A 02 A9 9F 9F 86 FB C7  U...8.I. j.......  
        > 01C5 E640: CB C6 A5 82 A2 30 C2 AC  E6 98 DA 83 64 43 7F 0D  .....0.. ....dC..  
        > 01C5 E650: 13 18 EB 90 53 5B 37 6B  E6 0D 80 1E EF ED C7 B8  ....S[7k ........  
        > 01C5 E660: 68 9B 4C 09 7B 60 B2 57  D8 59 8D 7F EA CD EB C4  h.L.{`.W .Y......  
        > 01C5 E670: 60 9F 45 7A A9 26 8A 2F  85 0C F2 19 C6 53 92 F7  `.Ez.&./ .....S..  
        > 01C5 E680: F0 B8 32 CB 5B 66 CE 51  54 B4 C3 D3 D4 DC B3 EE  ..2.[f.Q T....... 

files:
    dbfilesclient/ConsoleScripts.dbc: new, can be empty, sizeof (rec) = 0x0c
    -- shaders/effects/model2.wfx: ensure Projected_ModMod, Projected_ModMod_Unlit, Projected_ModAdd, Projected_ModAdd_Unlit being present

server:
    add WoWG    Mc64    1 to battlenet_components otherwise
    add WowB    xxxx    18716 to battlenet_components otherwise

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