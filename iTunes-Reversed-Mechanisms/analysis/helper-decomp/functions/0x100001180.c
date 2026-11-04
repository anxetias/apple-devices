// rea decompile_all
// name: iPodSyncWaiter::initWithPid:clientIdentifier:
// address: 0x100001180
// body: available
// range: 0x100001180-0x100001266 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x1c bytes */

ID iPodSyncWaiter::initWithPid_clientIdentifier_(ID param_1,SEL param_2,int param_3,ID param_4)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::iPodSyncWaiter;
  local_30 = param_1;
  IVar2 = NSObject::init((ID)&local_30,"init");
  if (IVar2 != 0) {
    *(int *)(IVar2 + 8) = param_3;
    *(undefined8 *)(IVar2 + 0x18) = 0;
    puVar1 = PTR__objc_msgSend_100012170;
    IVar3 = NSRunLoop::currentRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
    IVar3 = NSRunLoop::getCFRunLoop(IVar3,"getCFRunLoop");
    *(ID *)(IVar2 + 0x20) = IVar3;
    uVar4 = (*(code *)puVar1)(param_4,"copy");
    *(undefined8 *)(IVar2 + 0x10) = uVar4;
    IVar3 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    NSNotificationCenter::addObserver_selector_name_object_
              (IVar3,"addObserver:selector:name:object:",IVar2,"waiterThreadExited:",
               *(undefined8 *)PTR__NSThreadWillExitNotification_100012030,0);
    NSThread::detachNewThreadSelector_toTarget_withObject_
              ((ID)&_OBJC_CLASS___NSThread,"detachNewThreadSelector:toTarget:withObject:",
               "wait4AppleMobileSyncProcess:",IVar2,0);
  }
  return IVar2;
}

