// rea decompile_all
// name: _lzfseEncodeTranslateState
// address: 0x841a1
// body: available
// range: 0x841a1-0x84238 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfseEncodeTranslateState(long *param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar10 [16];
  
  if (param_2 != 0) {
    *param_1 = *param_1 + param_2;
    iVar9 = (int)param_2;
    auVar10._8_4_ = iVar9;
    auVar10._0_8_ = param_2;
    auVar10._12_4_ = (int)((ulong)param_2 >> 0x20);
    lVar11 = auVar10._8_8_;
    param_1[3] = param_1[3] - param_2;
    param_1[4] = param_1[4] - lVar11;
    param_1[1] = param_1[1] - param_2;
    param_1[2] = param_1[2] - lVar11;
    param_1[10] = param_1[10] - param_2;
    param_1[0xb] = param_1[0xb] - lVar11;
    lVar6 = param_1[8];
    lVar11 = param_1[0xe];
    uVar7 = 1;
    do {
      lVar8 = (ulong)(uVar7 - 1) * 0x20;
      piVar1 = (int *)(lVar11 + lVar8);
      iVar3 = piVar1[1];
      iVar4 = piVar1[2];
      iVar5 = piVar1[3];
      uVar12 = -(uint)(-0xfffec < *piVar1 - iVar9);
      uVar13 = -(uint)(-0xfffec < iVar3 - iVar9);
      uVar14 = -(uint)(-0xfffec < iVar4 - iVar9);
      uVar15 = -(uint)(-0xfffec < iVar5 - iVar9);
      puVar2 = (uint *)(lVar11 + lVar8);
      *puVar2 = ~uVar12 & 0xfff00014 | *piVar1 - iVar9 & uVar12;
      puVar2[1] = ~uVar13 & 0xfff00014 | iVar3 - iVar9 & uVar13;
      puVar2[2] = ~uVar14 & 0xfff00014 | iVar4 - iVar9 & uVar14;
      puVar2[3] = ~uVar15 & 0xfff00014 | iVar5 - iVar9 & uVar15;
      uVar12 = uVar7 >> ((byte)(int)lVar6 & 0x1f);
      uVar7 = uVar7 + 1;
    } while (uVar12 == 0);
  }
  return 0;
}

