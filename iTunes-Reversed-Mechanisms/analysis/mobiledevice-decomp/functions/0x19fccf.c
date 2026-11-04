// rea decompile_all
// name: _AMAuthInstallApSetFusings
// address: 0x19fccf
// body: available
// range: 0x19fccf-0x19fd4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_AMAuthInstallApSetFusings
          (long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      _free(*(void **)(param_1 + 0x10));
    }
    puVar1 = _calloc(1,200);
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 2;
    }
    else {
      *puVar1 = param_2;
      *(undefined4 *)(puVar1 + 1) = param_3;
      *(undefined4 *)((long)puVar1 + 0xc) = param_4;
      *(undefined4 *)(puVar1 + 2) = param_5;
      *(undefined1 *)((long)puVar1 + 0x14) = param_6;
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}

