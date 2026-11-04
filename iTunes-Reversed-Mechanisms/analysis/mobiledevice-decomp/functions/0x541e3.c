// rea decompile_all
// name: _BrotliEncoderTakeOutput
// address: 0x541e3
// body: available
// range: 0x541e3-0x54252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _BrotliEncoderTakeOutput(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x2190);
  uVar2 = *param_2;
  uVar4 = uVar1;
  if (uVar2 < uVar1) {
    uVar4 = uVar2;
  }
  if (uVar2 == 0) {
    uVar4 = uVar1;
  }
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x2188);
    *(ulong *)(param_1 + 0x2188) = lVar3 + uVar4;
    *(long *)(param_1 + 0x2198) = *(long *)(param_1 + 0x2198) + uVar4;
    *(ulong *)(param_1 + 0x2190) = uVar1 - uVar4;
    if ((uVar1 - uVar4 == 0) && (*(int *)(param_1 + 0x21b4) == 1)) {
      *(undefined4 *)(param_1 + 0x21b4) = 0;
      *(undefined8 *)(param_1 + 0x2188) = 0;
    }
  }
  *param_2 = uVar4;
  return lVar3;
}

