// rea decompile_all
// name: iPodSyncWaiter::syncProgressNotificationCallback:object:info:
// address: 0x10000165e
// body: available
// range: 0x10000165e-0x100001871 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000185d to 0x100027700 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

void iPodSyncWaiter::syncProgressNotificationCallback_object_info_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  
  puVar1 = PTR__objc_msgSend_100012170;
  uVar3 = (*(code *)PTR__objc_msgSend_100012170)(param_5,"objectForKey:",&cf_clientIdentifier);
  cVar2 = (*(code *)puVar1)(uVar3,"isEqual:",*(undefined8 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
    return;
  }
  pcVar4 = (cfstringStruct *)(*(code *)puVar1)(param_5,"objectForKey:",&cf_dataClassName);
  pcVar6 = &cf___;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar6 = pcVar4;
  }
  cVar2 = (*(code *)puVar1)(param_4,"isEqualToString:",&cf_PendingSync);
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"isEqualToString:",&cf_BeginSync);
    if (cVar2 == '\0') {
      cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"isEqualToString:",&cf_Pushing);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"isEqualToString:",&cf_Mingling);
        if (cVar2 == '\0') {
          cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"isEqualToString:",&cf_Pulling);
          if (cVar2 == '\0') {
            cVar2 = (*(code *)PTR__objc_msgSend_100012170)(param_4,"isEqualToString:",&cf_Finished);
            if (cVar2 == '\0') {
              cVar2 = (*(code *)PTR__objc_msgSend_100012170)
                                (param_4,"isEqualToString:",&cf_Cancelled);
              if (cVar2 == '\0') {
                return;
              }
              pcVar4 = &cf_ProgressSyncPlanCancelled;
            }
            else {
              pcVar4 = &cf_ProgressSyncPlanFinished;
            }
          }
          else {
            pcVar4 = &cf_ProgressSyncPlanPulling;
          }
        }
        else {
          pcVar4 = &cf_ProgressSyncPlanMingling;
        }
      }
      else {
        pcVar4 = &cf_ProgressSyncPlanPushing;
      }
    }
    else {
      pcVar4 = &cf_ProgressSyncPlanCreated;
    }
  }
  else {
    pcVar4 = &cf_ProgressSyncPlanPending;
  }
  uVar3 = (*(code *)puVar1)(param_5,"objectForKey:",&cf_errorCode);
  IVar5 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  IVar5 = NSDictionary::initWithObjectsAndKeys_
                    (IVar5,"initWithObjectsAndKeys:",pcVar4,&cf_AMSStatus,pcVar6,
                     &cf_AMSDataClassNameKey,uVar3,&cf_errorCode,0);
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"-[iPodSyncWaiter syncProgressNotificationCallback:object:info:]",6,
            &cf_Sendingmessagetoparent___,IVar5);
  }
  FUN_10000a339(IVar5);
  (*(code *)PTR__objc_release_100012178)(IVar5);
  return;
}

