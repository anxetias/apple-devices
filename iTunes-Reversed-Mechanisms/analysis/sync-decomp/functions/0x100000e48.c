// rea decompile_all
// name: entry
// address: 0x100000e48
// body: available
// range: 0x100000e48-0x100001624 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100001620 to 0x10001488d _exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 entry(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  pid_t pVar6;
  int iVar7;
  uint uVar8;
  ID self;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  cfstringStruct *pcVar15;
  undefined8 uVar16;
  long lVar17;
  cfstringStruct *pcVar18;
  
  self = NSAutoreleasePool::new((ID)&_OBJC_CLASS___NSAutoreleasePool,"new");
  IVar9 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  IVar9 = NSProcessInfo::processName(IVar9,"processName");
  _DLSetProcessName(IVar9);
  _DLSetLogDirectoryName("MobileSync");
  IVar9 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  IVar9 = NSUserDefaults::boolForKey_(IVar9,"boolForKey:",&cf_WaitForDebugger);
  if ((char)IVar9 != '\0') {
    pVar6 = _getpid();
    _NSLog(&
           cf_______________________________________________Waitingfordebugger_Startgdbandrunthesecommandstoattach_attach_dup3setWaitForDebugger_0______________________________________________
           ,pVar6);
    do {
      _sleep(1);
    } while( true );
  }
  FUN_100011c75();
  *(undefined4 *)PTR__opterr_1000201c8 = 0;
  bVar2 = false;
  cVar4 = '\0';
  bVar1 = false;
  cVar3 = '\0';
  IVar11 = 0;
  IVar14 = 0;
  IVar9 = 0;
switchD_100000ff8_caseD_66:
  iVar7 = _getopt_long(param_1,param_2,"cd:D:e:hiqrs:t:",&PTR_s_clear_100028b10,0);
  switch(iVar7) {
  case 99:
    cVar4 = '\x01';
    break;
  case 100:
    uVar8 = _atoi(*(char **)PTR__optarg_1000201c0);
    IVar14 = NSNumber::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",(ulong)uVar8);
    goto LAB_10000116d;
  case 0x65:
    IVar11 = ISyncManager::sharedManager((ID)&_OBJC_CLASS___ISyncManager,"sharedManager");
    IVar12 = NSMutableSet::set((ID)&_OBJC_CLASS___NSMutableSet,"set");
    IVar13 = NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                        *(undefined8 *)PTR__optarg_1000201c0);
    IVar13 = NSString::componentsSeparatedByString_(IVar13,"componentsSeparatedByString:",&cf__);
    IVar10 = NSString::count(IVar13,"count");
    if (0 < (int)IVar10) {
      lVar17 = 0;
      do {
        IVar10 = NSString::objectAtIndex_(IVar13,"objectAtIndex:",lVar17);
        IVar10 = ISyncManager::dataClassNameForEntityName_
                           (IVar11,"dataClassNameForEntityName:",IVar10);
        if (IVar10 != 0) {
          NSMutableSet::addObject_(IVar12,"addObject:",IVar10);
        }
        lVar17 = lVar17 + 1;
        IVar10 = NSString::count(IVar13,"count");
      } while (lVar17 < (int)IVar10);
    }
    IVar11 = NSMutableSet::allObjects(IVar12,"allObjects");
  case 0x66:
  case 0x67:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
    goto switchD_100000ff8_caseD_66;
  case 0x68:
    goto switchD_100000ff8_caseD_68;
  case 0x69:
    FUN_100010f06();
    goto switchD_100000ff8_caseD_66;
  case 0x71:
    break;
  case 0x72:
    bVar2 = true;
    goto switchD_100000ff8_caseD_66;
  case 0x73:
    IVar12 = NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                        *(undefined8 *)PTR__optarg_1000201c0);
    IVar9 = NSString::componentsSeparatedByString_(IVar12,"componentsSeparatedByString:",&cf__);
    IVar14 = NSUserDefaults::standardUserDefaults
                       ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
    IVar14 = NSUserDefaults::boolForKey_(IVar14,"boolForKey:",&cf_DisableAlertTool);
    if ((char)IVar14 != '\0') {
      cVar4 = _DLShouldLog();
      if (cVar4 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
                ,"parseArgs",5,&cf_Alerttoolsyncsdisabledfor__,IVar12);
      }
      goto LAB_10000161e;
    }
    IVar9 = NSString::lastObject(IVar9,"lastObject");
    IVar14 = NSString::length(IVar9,"length");
    IVar14 = NSNumber::numberWithInt_
                       ((ID)&_OBJC_CLASS___NSNumber,"numberWithInt:",(ulong)-(uint)(IVar14 == 0x28))
    ;
    cVar5 = _DLShouldLog(5);
    bVar1 = true;
    cVar3 = '\x01';
    if (cVar5 == '\0') goto switchD_100000ff8_caseD_66;
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
            ,"parseArgs",5,&cf_Alerttoolinvokedforclient___targetid___deviceidsetto__,IVar12,IVar9,
            IVar14);
    break;
  case 0x74:
    IVar9 = NSString::stringWithUTF8String_
                      ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                       *(undefined8 *)PTR__optarg_1000201c0);
LAB_10000116d:
    bVar1 = true;
    goto switchD_100000ff8_caseD_66;
  default:
    if (iVar7 != 0x44) goto code_r0x00010000100e;
    IVar11 = NSString::stringWithUTF8String_
                       ((ID)&_OBJC_CLASS___NSString,"stringWithUTF8String:",
                        *(undefined8 *)PTR__optarg_1000201c0);
    IVar11 = NSString::componentsSeparatedByString_(IVar11,"componentsSeparatedByString:",&cf__);
    goto switchD_100000ff8_caseD_66;
  }
  cVar3 = '\x01';
  goto switchD_100000ff8_caseD_66;
switchD_100000ff8_caseD_68:
  FUN_1000016f4();
  NSAutoreleasePool::drain(self,"drain");
LAB_10000161e:
                    /* WARNING: Subroutine does not return */
  _exit(0);
code_r0x00010000100e:
  if (iVar7 != -1) goto switchD_100000ff8_caseD_66;
  if (!bVar1) {
    FUN_1000016f4();
    uVar16 = 0;
    goto LAB_10000136e;
  }
  if (IVar9 == 0) {
    cVar4 = _DLShouldLog(3);
    if (cVar4 != '\0') {
      pcVar15 = &cf_Youmustspecifyatargetidtosync;
LAB_100001358:
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
              ,"main",3,pcVar15);
    }
  }
  else if (IVar14 == 0) {
    cVar4 = _DLShouldLog(3);
    if (cVar4 != '\0') {
      pcVar15 = &cf_Youmustspecifyadeviceidtosync;
      goto LAB_100001358;
    }
  }
  else {
    if ((cVar4 == '\0') || (IVar11 != 0)) {
      cVar5 = _DLShouldLog(5);
      if (cVar5 != '\0') {
        pcVar15 = &cf_Clearingdataclasses;
        if (cVar4 == '\0') {
          pcVar15 = &cf_Syncing;
        }
        pcVar18 = &cf_quietly;
        if (cVar3 == '\0') {
          pcVar18 = &cf___;
        }
        IVar12 = NSMutableSet::componentsJoinedByString_(IVar11,"componentsJoinedByString:",&cf__);
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
                ,"main",5,&cf________withdevice___target___dataclasses__,pcVar15,pcVar18,IVar14,
                IVar9,IVar12);
      }
      if (bVar2) {
        if (IVar11 == 0) {
          cVar5 = _DLShouldLog(3);
          if (cVar5 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
                    ,"main",3,&cf_Youmustspecifydataclasseswhenyouspecifyreset);
          }
        }
        else {
          cVar5 = _DLShouldLog(5);
          if (cVar5 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
                    ,"main",5,&cf_Resetting);
          }
          FUN_1000119be(IVar9,IVar11,1);
        }
      }
      if (cVar3 == '\0') {
        IVar12 = NSDistributedNotificationCenter::defaultCenter
                           ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
        IVar13 = NSDictionary::dictionaryWithObjectsAndKeys_
                           ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",
                            &cf_Starting,&cf_State,0);
        NSDistributedNotificationCenter::postNotificationName_object_userInfo_
                  (IVar12,"postNotificationName:object:userInfo:",
                   &cf_com_apple_syncservices_iPodSync_SyncStatusChangedNotification,IVar9,IVar13);
      }
      FUN_100011906(IVar14,IVar9,IVar11,cVar3,cVar4);
      if (cVar3 == '\0') {
        IVar14 = NSDistributedNotificationCenter::defaultCenter
                           ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
        IVar12 = NSDictionary::dictionaryWithObjectsAndKeys_
                           ((ID)&_OBJC_CLASS___NSDictionary,"dictionaryWithObjectsAndKeys:",
                            &cf_Finished,&cf_State,0);
        NSDistributedNotificationCenter::postNotificationName_object_userInfo_
                  (IVar14,"postNotificationName:object:userInfo:",
                   &cf_com_apple_syncservices_iPodSync_SyncStatusChangedNotification,IVar9,IVar12);
      }
      uVar16 = 0;
      if ((bVar2) && (IVar11 != 0)) {
        cVar4 = _DLShouldLog(5);
        if (cVar4 != '\0') {
          __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/SyncClient/SyncClientToolMain.m"
                  ,"main",5,
                  &
                  cf_ClearingResetfordataclassesincasesomethingwentwrong_toensuredataclassesaren_tstuckinresettobiteanunsuspectinguseronthenextsync
                 );
        }
        uVar16 = 0;
        FUN_1000119be(IVar9,IVar11,0);
      }
      goto LAB_10000136e;
    }
    cVar4 = _DLShouldLog(3);
    if (cVar4 != '\0') {
      pcVar15 = &cf_Youmustspecifydataclasseswhenyouspecifyremove;
      goto LAB_100001358;
    }
  }
  FUN_1000016f4();
  uVar16 = 1;
LAB_10000136e:
  NSAutoreleasePool::drain(self,"drain");
  return uVar16;
}

