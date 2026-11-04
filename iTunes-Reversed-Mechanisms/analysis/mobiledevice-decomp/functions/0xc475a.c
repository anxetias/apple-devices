// rea decompile_all
// name: __USBMuxCustomRunLoopSourceScheduleCallback
// address: 0xc475a
// body: available
// range: 0xc475a-0xc482d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __USBMuxCustomRunLoopSourceScheduleCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lVar1 = *(long *)(param_1 + 0x48);
  local_40 = param_1;
  if (lVar1 == 0) {
    lVar1 = _CFSocketCreateWithNative
                      (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,*(undefined4 *)(param_1 + 4)
                       ,1,_USBMuxIntCFSocketCallback,&local_48);
    *(long *)(param_1 + 0x48) = lVar1;
    if (lVar1 != 0) goto LAB_000c47ba;
    pcVar4 = "%s:%d CFSocketCreateWithNative failed.\n";
    uVar3 = 0x3b6;
LAB_000c481c:
    _USBMuxDebugLog(pcVar4,"_USBMuxCustomRunLoopSourceScheduleCallback",uVar3);
  }
  else {
LAB_000c47ba:
    lVar2 = *(long *)(param_1 + 0x50);
    if (lVar2 == 0) {
      lVar2 = _CFSocketCreateRunLoopSource(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,lVar1,0)
      ;
      *(long *)(param_1 + 0x50) = lVar2;
      if (lVar2 == 0) {
        pcVar4 = "%s:%d CFSocketCreateRunLoopSource failed.\n";
        uVar3 = 0x3c0;
        goto LAB_000c481c;
      }
    }
    _CFRunLoopAddSource(param_2,lVar2,param_3);
    *(undefined8 *)(param_1 + 0x60) = param_2;
  }
  return;
}

