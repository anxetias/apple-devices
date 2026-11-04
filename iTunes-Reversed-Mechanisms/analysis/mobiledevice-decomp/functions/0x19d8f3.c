// rea decompile_all
// name: _CRCBuffer
// address: 0x19d8f3
// body: available
// range: 0x19d8f3-0x19d951 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _CRCBuffer(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    param_3 = 0xffffffff;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        uVar4 = 0;
        do {
          uVar2 = (uint)(param_3 >> 0x1f);
          uVar5 = (uint)((*(byte *)(param_1 + uVar3) >> (uVar4 & 0x1f) & 1) != 0);
          uVar6 = (uVar5 ^ uVar2) + (int)param_3 * 2;
          uVar1 = uVar6 ^ 0x4c11db6;
          if (uVar2 == uVar5) {
            uVar1 = uVar6;
          }
          param_3 = (ulong)uVar1;
          uVar4 = uVar4 + 1;
        } while (uVar4 != 8);
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_2);
    }
  }
  return param_3;
}

