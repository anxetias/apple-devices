// rea decompile_all
// name: FUN_10000613c
// address: 0x10000613c
// body: available
// range: 0x10000613c-0x100006662 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100006603 to 0x10000bb51 ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10000665e to 0x10000bb57 __exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ID FUN_10000613c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,long param_6
                )

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ID IVar6;
  char *pcVar7;
  long lVar8;
  size_t sVar9;
  ID IVar10;
  cfstringStruct *pcVar11;
  char *pcVar12;
  char local_1038 [1024];
  char local_c38 [1024];
  undefined1 local_838 [1024];
  undefined1 local_438 [1024];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100012120;
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"_sync",6,&cf_Calledfordeviceid___targetid___withdataclasses__andreset__andclear__,
            param_1,param_2,param_4,param_5,param_6);
  }
  ___bzero(local_438,0x400);
  ___bzero(local_838,0x400);
  ___bzero(local_c38,0x400);
  if (param_2 != 0 && param_1 != 0) {
    uVar5 = _CFStringCreateWithFormat(0,0,&cf_com_apple_MobileSync___,param_2);
    IVar6 = _objc_autorelease(uVar5);
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"_sync",6,
              &cf_targetIdentifieris___whichgivesusaclientIdentifierof___DeviceIdentifieris__,
              param_2,IVar6,param_1);
    }
    _CFStringGetFileSystemRepresentation(param_3,local_c38,0x3ff);
    cVar2 = FUN_1000080f2(param_1,local_438);
    if (cVar2 == '\0') {
      cVar2 = _DLShouldLog(3);
      if (cVar2 != '\0') {
        pcVar11 = &cf_Error_Couldn_tgetCStringforDeviceIdentifier__;
LAB_100006394:
        IVar6 = 0;
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"_sync",3,pcVar11,param_1);
        goto LAB_100006206;
      }
    }
    else {
      cVar2 = FUN_1000080f2(param_2,local_838);
      if (cVar2 == '\0') {
        cVar2 = _DLShouldLog(3);
        if (cVar2 != '\0') {
          pcVar11 = &cf_Error_Couldn_tgetCStringforTargetIdentifier__;
          param_1 = param_2;
          goto LAB_100006394;
        }
      }
      else {
        if (param_5 == 0) {
LAB_100006320:
          if (param_6 != 0) {
            cVar2 = _CFBooleanGetValue();
            if (cVar2 == '\x01') {
              pcVar7 = "--clear";
              pcVar12 = "Setting clear for data classes in sync\n";
              goto LAB_100006343;
            }
          }
          pcVar7 = (char *)0x0;
        }
        else {
          cVar2 = _CFBooleanGetValue(param_5);
          if (cVar2 != '\x01') goto LAB_100006320;
          pcVar7 = "--reset";
          pcVar12 = "Setting reset for data classes in sync\n";
LAB_100006343:
          _fwrite(pcVar12,0x27,1,*(FILE **)PTR____stderrp_100012128);
        }
        if (param_4 == 0) {
LAB_100006414:
          pcVar12 = (char *)0x0;
          uVar5 = 0;
        }
        else {
          lVar8 = _CFArrayGetCount(param_4);
          puVar1 = PTR__objc_msgSend_100012170;
          if (lVar8 < 1) goto LAB_100006414;
          uVar5 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"componentsJoinedByString:",&cf__);
          uVar5 = (*(code *)puVar1)(uVar5,"UTF8String");
          _fprintf(*(FILE **)PTR____stderrp_100012128,"Setting data classes to sync: %s %s\n",
                   "--dataclassnames",uVar5);
          pcVar12 = "--dataclassnames";
        }
        ___sprintf_chk(local_1038,0,0x400,
                       "AppleMobileDeviceHelper: Exec of sync process %s failed or inexplicably returned\n"
                       ,local_c38);
        sVar9 = _strlen(local_1038);
        iVar3 = _vfork();
        if (iVar3 != 0xffffffff) {
          if (iVar3 == 0) {
            iVar4 = _execlp(local_c38,local_c38,"--device",local_438,"--target",local_838,pcVar12,
                            uVar5,pcVar7,0);
            _write(2,local_1038,sVar9 + 1);
                    /* WARNING: Subroutine does not return */
            __exit(iVar4);
          }
          IVar10 = _objc_alloc(&objc::class_t::iPodSyncWaiter);
          IVar6 = iPodSyncWaiter::initWithPid_clientIdentifier_
                            (IVar10,"initWithPid:clientIdentifier:",iVar3,IVar6);
          IVar10 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
          IVar10 = NSDictionary::initWithObjectsAndKeys_
                             (IVar10,"initWithObjectsAndKeys:",&cf_ProgressSyncStarting,
                              &cf_AMSStatus,0,0);
          cVar2 = _DLShouldLog(6);
          if (cVar2 != '\0') {
            __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                    ,"_sync",6,&cf_Sendingmessagetoparent___,IVar10);
          }
          FUN_10000a339(IVar10);
          puVar1 = PTR__objc_release_100012178;
          (*(code *)PTR__objc_release_100012178)(IVar10);
          uVar5 = _CFNotificationCenterGetDistributedCenter();
          _CFNotificationCenterAddObserver
                    (uVar5,IVar6,FUN_1000081c7,&cf_com_apple_MobileDeviceSync_progress,0,4);
          uVar5 = _CFNotificationCenterGetDistributedCenter();
          _CFNotificationCenterAddObserver
                    (uVar5,IVar6,FUN_100008283,
                     &cf_com_apple_SyncServices_iPodSync_syncVersionMismatchComputerGreater,0,4);
          uVar5 = _CFNotificationCenterGetDistributedCenter();
          _CFNotificationCenterAddObserver
                    (uVar5,IVar6,FUN_100008283,
                     &cf_com_apple_SyncServices_iPodSync_syncVersionMismatchDeviceGreater,0,4);
          iPodSyncWaiter::run(IVar6,"run");
          uVar5 = _CFNotificationCenterGetDistributedCenter();
          _CFNotificationCenterRemoveEveryObserver(uVar5,IVar6);
          (*(code *)puVar1)(IVar6);
          IVar6 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
          IVar6 = NSDictionary::initWithObjectsAndKeys_
                            (IVar6,"initWithObjectsAndKeys:",&cf_ProgressSyncCompleted,&cf_AMSStatus
                             ,0);
          goto LAB_100006206;
        }
        _fwrite("Error: Couldn\'t fork process to sync device!\n",0x2d,1,
                *(FILE **)PTR____stderrp_100012128);
      }
    }
  }
  IVar6 = 0;
LAB_100006206:
  if (*(long *)PTR____stack_chk_guard_100012120 == local_38) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

