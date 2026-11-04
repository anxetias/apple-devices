// rea decompile_all
// name: _BrotliInitDistanceParams
// address: 0x6c83d
// body: available
// range: 0x6c83d-0x6c973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _BrotliInitDistanceParams(long param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  bVar3 = (byte)param_2;
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(uint *)(param_1 + 0x44) = param_3;
  if (*(int *)(param_1 + 0x24) == 0) {
    uVar10 = param_3 + (0x18 << (bVar3 + 1 & 0x1f)) + 0x10;
    uVar6 = (ulong)uVar10;
    uVar8 = (ulong)((1 << (bVar3 + 0x1a & 0x1f)) + param_3 + (-1 << (bVar3 + 2 & 0x1f)));
  }
  else {
    iVar9 = param_3 + 0x10;
    if (param_3 < 0x7ffffffc) {
      uVar5 = 0xffffffff;
      uVar11 = -1 << (bVar3 & 0x1f);
      uVar7 = (0x7ffffffc - param_3 >> (bVar3 & 0x1f)) + 4;
      iVar4 = -5;
      uVar10 = uVar7;
      do {
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 2;
        bVar1 = 3 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar1);
      uVar10 = (uint)((uVar7 >> (uVar5 & 0x1f) & 1) != 0) + iVar4;
      iVar4 = iVar9;
      if (uVar10 != 0xffffffff) {
        bVar2 = (byte)(uVar10 >> 1);
        iVar4 = param_3 + (uVar10 << (bVar3 & 0x1f) | ~uVar11);
        param_3 = (param_3 - uVar11) +
                  ((6 << (bVar2 & 0x1f)) + ((uVar10 & 1) << (bVar2 + 1 & 0x1f)) + -5 <<
                  (bVar3 & 0x1f));
        iVar4 = iVar4 + 0x11;
      }
      uVar6 = CONCAT44(param_3,iVar4);
    }
    else {
      uVar6 = 0x7ffffffc8000000c;
    }
    uVar8 = uVar6 >> 0x20;
    uVar10 = iVar9 + (0x3e << (bVar3 + 1 & 0x1f));
  }
  *(uint *)(param_1 + 0x48) = uVar10;
  *(int *)(param_1 + 0x4c) = (int)uVar6;
  *(ulong *)(param_1 + 0x50) = uVar8;
  return;
}

