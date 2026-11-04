// rea decompile_all
// name: FUN_00056db0
// address: 0x56db0
// body: available
// range: 0x56db0-0x56db9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00056db0(ulong param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  bool bVar2;
  long unaff_RBX;
  long lVar3;
  long lVar4;
  
  lVar3 = unaff_RBX + 0x10;
  if (unaff_RBX + 0x10 != 0) {
    do {
      bVar1 = *param_4;
      param_4 = param_4 + 1;
      param_1 = param_1 + bVar1;
      param_2 = param_2 + param_1;
      lVar4 = lVar3 + -1;
      bVar2 = 0 < lVar3;
      lVar3 = lVar4;
    } while (lVar4 != 0 && bVar2);
  }
  return param_1 - (uint)((int)((param_1 & 0xffffffff) / 0xfff1) * 0xfff1) |
         (param_2 - (uint)((int)((param_2 & 0xffffffff) / 0xfff1) * 0xfff1)) * 0x10000;
}

