// rea decompile_all
// name: _GetDiskNumberFromCDRecord
// address: 0x9cafb
// body: available
// range: 0x9cafb-0x9cba1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong _GetDiskNumberFromCDRecord(long param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x2a);
  if (uVar7 == 0xffffffff) {
    lVar6 = _GetExtraFieldWithSignatureFromCDRecord(param_1,&_kZip64ExtraFieldSignature,0);
    if (lVar6 == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x18);
      uVar2 = (ushort)(iVar1 == -1) * 8 + 0x10;
      if (*(int *)(param_1 + 0x14) != -1) {
        uVar2 = (ushort)(iVar1 == -1) * 8 + 8;
      }
      uVar3 = uVar2 + 4;
      if (*(short *)(param_1 + 0x22) != -1) {
        uVar3 = uVar2;
      }
      uVar7 = 0xffffffff;
      if (uVar3 <= *(ushort *)(lVar6 + 2)) {
        uVar4 = (uint)(iVar1 == -1) * 8 + 8;
        if (*(int *)(param_1 + 0x14) != -1) {
          uVar4 = (uint)(iVar1 == -1) * 8;
        }
        uVar5 = uVar4 + 8;
        if (*(short *)(param_1 + 0x22) != -1) {
          uVar5 = uVar4;
        }
        uVar7 = *(ulong *)(lVar6 + 4 + (ulong)uVar5);
      }
    }
  }
  return uVar7;
}

