// rea decompile_all
// name: _GetExtraFieldWithSignature
// address: 0x984b6
// body: available
// range: 0x984b6-0x9850a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _GetExtraFieldWithSignature(long param_1,ulong param_2,short *param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      if (param_2 < uVar3 + 4) {
        return 0;
      }
      uVar1 = *(ushort *)(param_1 + 2 + uVar3);
      if (*(short *)(param_1 + uVar3) == *param_3) {
        if (param_2 < uVar3 + 4 + (ulong)uVar1) {
          return 0;
        }
        if (param_4 != (ushort *)0x0) {
          *param_4 = uVar2;
          return param_1 + uVar3;
        }
        return param_1 + uVar3;
      }
      uVar2 = uVar2 + uVar1 + 4;
      uVar3 = (ulong)uVar2;
    } while (uVar3 < param_2);
  }
  return 0;
}

