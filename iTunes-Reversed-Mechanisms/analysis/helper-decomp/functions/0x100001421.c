// rea decompile_all
// name: iPodSyncWaiter::waiterThreadExited:
// address: 0x100001421
// body: available
// range: 0x100001421-0x100001502 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void iPodSyncWaiter::waiterThreadExited_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID self;
  
  cVar2 = _DLShouldLog(6);
  if (cVar2 != '\0') {
    __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
            ,"-[iPodSyncWaiter waiterThreadExited:]",6,&cf_ThreadExitcallback___);
  }
  puVar1 = PTR__objc_msgSend_100012170;
  uVar3 = (*(code *)PTR__objc_msgSend_100012170)(param_3,"object");
  cVar2 = (*(code *)puVar1)(uVar3,"isEqual:",*(undefined8 *)(param_1 + 0x18));
  if (cVar2 != '\0') {
    cVar2 = _DLShouldLog(6);
    if (cVar2 != '\0') {
      __DLLog("/AppleInternal/Library/BuildRoots/4~CakmugBDtiFQ9GlMNvyAuNCVxPdc4j0wI10YSD4/Library/Caches/com.apple.xbs/Sources/Sync/AppleMobileSync/AppleMobileDeviceHelper.m"
              ,"-[iPodSyncWaiter waiterThreadExited:]",6,&cf_AnditisourthreadinThreadExitcallback___
             );
    }
    self = NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::removeObserver_name_object_
              (self,"removeObserver:name:object:",param_1,
               *(undefined8 *)PTR__NSThreadWillExitNotification_100012030,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      _CFRunLoopStop();
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return;
}

