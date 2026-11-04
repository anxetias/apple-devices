// rea decompile_all
// name: __RegisterForInsecureNotifications
// address: 0x156690
// body: available
// range: 0x156690-0x15689b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x156897 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001567ac) */

int __RegisterForInsecureNotifications(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  bool bVar6;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  iVar2 = _AMDeviceSecureStartService(param_1,&cf_com_apple_mobile_insecure_notification_proxy,0);
  if (iVar2 == 0) {
    local_40 = 0;
    local_48 = param_3;
    lVar3 = _CFArrayCreate(0,&local_48,2,PTR__kCFTypeArrayCallBacks_004411a8);
    iVar2 = __AMDSecureListenForNotificationsWithRetainedContext
                      (0,__AMDeviceInsecureNotificationCallback);
    if (iVar2 == 0) {
      bVar6 = false;
      lVar5 = 0;
      do {
        iVar2 = _AMDSecureObserveNotification(0,*(undefined8 *)(param_2 + lVar5 * 8));
        if (iVar2 != 0) {
          if (_md_log_onceToken != -1) {
            _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
          }
          __os_log_internal(0,_md_log_log,0x10,"AMDSecureObserveNotification(%@) failed: 0x%x",
                            *(undefined8 *)(param_2 + lVar5 * 8),iVar2);
          _AMDSecureShutdownNotificationProxy(0);
          goto LAB_001567a3;
        }
        lVar5 = 1;
        bVar1 = !bVar6;
        bVar6 = true;
      } while (bVar1);
      iVar2 = 0;
      goto LAB_001567a3;
    }
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "_AMDSecureListenForNotificationsWithRetainedContext failed: 0x%x";
  }
  else {
    if (_md_log_onceToken != -1) {
      _dispatch_once(&_md_log_onceToken,&___block_literal_global_2470);
    }
    pcVar4 = "AMDeviceSecureStartService failed: 0x%x";
    lVar3 = 0;
  }
  __os_log_internal(0,_md_log_log,0x10,pcVar4,iVar2);
LAB_001567a3:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

