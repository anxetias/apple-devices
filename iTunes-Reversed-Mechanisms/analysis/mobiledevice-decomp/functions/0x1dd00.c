// rea decompile_all
// name: _CCRSA_CRT_POWER_BLINDED_WORKSPACE_N
// address: 0x1dd00
// body: available
// range: 0x1dd00-0x1dd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _CCRSA_CRT_POWER_BLINDED_WORKSPACE_N(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = param_1 >> 1;
  uVar4 = uVar3 * 5 + 0xd;
  uVar2 = uVar3 + (uVar3 + 2) * 0xc + 2;
  uVar1 = uVar3 * 8 + 0x10;
  param_1 = param_1 * 2;
  uVar5 = param_1;
  if (param_1 < uVar1) {
    uVar5 = uVar1;
  }
  if (uVar5 <= uVar2) {
    uVar5 = uVar2;
  }
  if (uVar4 <= uVar5) {
    if (param_1 < uVar1) {
      uVar4 = uVar1;
      if (uVar1 < uVar2) {
        uVar4 = uVar2;
      }
    }
    else {
      uVar4 = param_1;
      if (param_1 < uVar2) {
        uVar4 = uVar2;
      }
    }
  }
  return uVar4 + (uVar3 + 2) * 4 + 0xb;
}

