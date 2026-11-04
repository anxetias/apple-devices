// rea decompile_all
// name: __AMRestorableStateMachineIsComplete
// address: 0x177c04
// body: available
// range: 0x177c04-0x177c4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestorableStateMachineIsComplete(long param_1)

{
  undefined8 unaff_RBX;
  undefined7 uVar2;
  ulong uVar1;
  cfstringStruct *pcVar3;
  
  if (param_1 == 0) {
    pcVar3 = &cf_Can_tcheckifstatemachineisdonewithNULLstatemachine;
    uVar1 = 0;
  }
  else {
    uVar2 = (undefined7)((ulong)unaff_RBX >> 8);
    if (*(char *)(param_1 + 0x2c) == '\0') {
      if (*(long *)(param_1 + 0x18) == *(long *)(param_1 + 0x10)) {
        uVar1 = CONCAT71(uVar2,*(int *)(*(long *)(param_1 + 0x18) + 4) == 0);
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
    pcVar3 = (cfstringStruct *)0x0;
  }
  _AMRSafeLogAndRelease(3,pcVar3);
  return uVar1 & 0xffffffff;
}

