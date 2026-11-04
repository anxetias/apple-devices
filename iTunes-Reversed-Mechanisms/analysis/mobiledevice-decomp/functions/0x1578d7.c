// rea decompile_all
// name: ___AMRestorableScheduleCallBackTimer
// address: 0x1578d7
// body: available
// range: 0x1578d7-0x15796a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___AMRestorableScheduleCallBackTimer(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = (double)_CFAbsoluteTimeGetCurrent();
  uVar1 = *_gRestorableData;
  uVar2 = _CFRunLoopTimerCreate
                    (dVar3 + param_1,0,*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,0,param_2)
  ;
  _CFRunLoopAddTimer(uVar1,uVar2,*(undefined8 *)PTR__kCFRunLoopDefaultMode_00441190);
  _CFRunLoopWakeUp(uVar1);
  _CFRelease(uVar2);
  return;
}

