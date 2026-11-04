// rea decompile_all
// name: iPodSyncWaiter::syncPlanVersionMismatchNotificationCallback:object:info:
// address: 0x100001872
// body: available
// range: 0x100001872-0x10000195f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000194f to 0x100027700 /usr/lib/libobjc.A.dylib::_objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

void iPodSyncWaiter::syncPlanVersionMismatchNotificationCallback_object_info_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  char cVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  
  cVar1 = (*(code *)PTR__objc_msgSend_100012170)
                    (param_3,"isEqualToString:",
                     &cf_com_apple_SyncServices_iPodSync_syncVersionMismatchComputerGreater);
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR__objc_msgSend_100012170)
                      (param_3,"isEqualToString:",
                       &cf_com_apple_SyncServices_iPodSync_syncVersionMismatchDeviceGreater);
    if (cVar1 == '\0') {
      return;
    }
    pcVar3 = &cf_ProgressVersionMismatchDeviceGreater;
  }
  else {
    pcVar3 = &cf_ProgressVersionMismatchComputerGreater;
  }
  IVar2 = _objc_alloc(&_OBJC_CLASS___NSDictionary);
  IVar2 = NSDictionary::initWithObjectsAndKeys_
                    (IVar2,"initWithObjectsAndKeys:",pcVar3,&cf_AMSStatus,param_4,
                     &cf_AMSDataClassNameKey,0);
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"-[iPodSyncWaiter syncPlanVersionMismatchNotificationCallback:object:info:]",6,
            &cf_Sendingmessagetoparent___,IVar2);
  }
  FUN_10000a339(IVar2);
  (*(code *)PTR__objc_release_100012178)(IVar2);
  return;
}

