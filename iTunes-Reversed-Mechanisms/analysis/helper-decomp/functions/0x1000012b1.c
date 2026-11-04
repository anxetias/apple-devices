// rea decompile_all
// name: iPodSyncWaiter::wait4AppleMobileSyncProcess:
// address: 0x1000012b1
// body: available
// range: 0x1000012b1-0x100001420 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void iPodSyncWaiter::wait4AppleMobileSyncProcess_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined8 in_RAX;
  ID self;
  ID IVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_24;
  
  local_24 = (uint)((ulong)in_RAX >> 0x20);
  self = NSAutoreleasePool::new((ID)&_OBJC_CLASS___NSAutoreleasePool,"new");
  IVar2 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  uVar3 = (*(code *)PTR__objc_retain_100012180)(IVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"-[iPodSyncWaiter wait4AppleMobileSyncProcess:]",6,
            &cf_WaitingforAppleMobileSyncprocesswithpid_dtoexit,*(undefined4 *)(param_1 + 8));
  }
  _sleep(1);
  _waitpid(*(pid_t *)(param_1 + 8),(int *)&local_24,0);
  if ((local_24 & 0x7f) == 0) {
    cVar1 = _DLShouldLog(6);
    uVar4 = local_24 >> 8 & 0xff;
    if (uVar4 == 0) {
      if (cVar1 != '\0') {
        __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
                ,"-[iPodSyncWaiter wait4AppleMobileSyncProcess:]",6,&cf_Childwithpid_dexitednormally
                ,*(undefined4 *)(param_1 + 8));
      }
    }
    else if (cVar1 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"-[iPodSyncWaiter wait4AppleMobileSyncProcess:]",6,
              &cf_Execofchildwithpid_dfailedwitherror_d,*(undefined4 *)(param_1 + 8),uVar4);
    }
  }
  cVar1 = _DLShouldLog(6);
  if (cVar1 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"-[iPodSyncWaiter wait4AppleMobileSyncProcess:]",6,
            &cf_AppleMobileSyncprocesswithpid_dhasleftthebuilding,*(undefined4 *)(param_1 + 8));
  }
  _sleep(2);
  NSAutoreleasePool::drain(self,"drain");
  return;
}

