// rea decompile_all
// name: ___AFCConnectionProcessOperations
// address: 0xbbe4d
// body: available
// range: 0xbbe4d-0xbbef1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ___AFCConnectionProcessOperations(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0xe8004011;
  if (*(long *)(param_2 + 0xc0) == 0) {
    uVar4 = _CFRunLoopGetCurrent();
    _AFCConnectionScheduleWithRunLoop(param_2,uVar4,&cf_AFCRunLoopMode);
    uVar4 = 0;
    do {
      cVar1 = _AFCConnectionIsValid(param_2);
      if (cVar1 == '\0') goto LAB_000bbecf;
      iVar2 = _CFRunLoopRunInMode(param_1,&cf_AFCRunLoopMode,0);
    } while (iVar2 == 4);
    if (iVar2 - 1U < 2) {
      uVar4 = 0xe800400b;
    }
    else {
      uVar4 = 0xe800400c;
      if (iVar2 != 3) {
        uVar4 = 0xe8004001;
      }
    }
LAB_000bbecf:
    uVar3 = _CFRunLoopGetCurrent();
    _AFCConnectionUnscheduleFromRunLoop(param_2,uVar3,&cf_AFCRunLoopMode);
  }
  return uVar4;
}

