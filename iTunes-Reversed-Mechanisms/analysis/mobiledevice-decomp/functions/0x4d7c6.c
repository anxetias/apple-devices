// rea decompile_all
// name: _EvaluateNode
// address: 0x4d7c6
// body: available
// range: 0x4d7c6-0x4d99b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _EvaluateNode(long param_1,ulong param_2,ulong param_3,void *param_4,long param_5,long param_6,
                  long param_7)

{
  ulong *puVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float *pfVar18;
  uint uVar19;
  long lVar20;
  ulong uStack_30;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  
  lVar20 = param_2 * 0x10;
  pfVar18 = (float *)(param_7 + lVar20 + 0xc);
  fStack_1c = *pfVar18;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar11 = *(uint *)(param_7 + 4 + lVar20);
    uVar19 = *(uint *)(param_7 + lVar20) & 0x1ffffff;
    uVar3 = *(uint *)(param_7 + 8 + lVar20);
    if ((uVar11 <= param_3) && ((ulong)uVar11 + (ulong)uVar19 <= param_1 + param_2)) {
      iVar13 = (uVar3 >> 0x1b) - 1;
      if (uVar3 < 0x8000000) {
        iVar13 = uVar11 + 0xf;
      }
      if (iVar13 != 0) {
        uVar12 = param_2 & 0xffffffff;
        goto LAB_0004d852;
      }
    }
    uVar12 = (ulong)*(uint *)(param_7 + 0xc + (param_2 - ((uVar3 & 0x7ffffff) + uVar19)) * 0x10);
  }
LAB_0004d852:
  *pfVar18 = (float)uVar12;
  fStack_20 = (*(float **)(param_5 + 0xb10))[param_2] - **(float **)(param_5 + 0xb10);
  if (fStack_20 < fStack_1c) {
    return;
  }
  fStack_20 = fStack_1c - fStack_20;
  uVar14 = 0;
  if ((float)uVar12 != 0.0) {
    do {
      uVar16 = uVar14;
      lVar20 = uVar12 * 0x10;
      uVar11 = *(uint *)(param_7 + 8 + lVar20);
      uVar3 = *(uint *)(param_7 + lVar20);
      uVar14 = uVar16 + 1;
      *(undefined4 *)((long)&uStack_30 + uVar16 * 4) = *(undefined4 *)(param_7 + 4 + lVar20);
      if (2 < uVar16) break;
      uVar11 = *(uint *)(param_7 + 0xc +
                        (uVar12 - ((uVar3 & 0x1ffffff) + (uVar11 & 0x7ffffff))) * 0x10);
      uVar12 = (ulong)uVar11;
    } while (uVar11 != 0);
    if (2 < uVar16) goto LAB_0004d8f7;
  }
  _memcpy((void *)((long)&uStack_30 + uVar14 * 4),param_4,uVar14 * -4 + 0x10);
LAB_0004d8f7:
  uVar14 = *(long *)(param_6 + 0x100) + 1;
  uVar11 = ~(uint)*(long *)(param_6 + 0x100) & 7;
  uVar12 = 8;
  if (uVar14 < 8) {
    uVar12 = uVar14;
  }
  *(ulong *)(param_6 + 0x100) = uVar14;
  puVar15 = (undefined8 *)(param_6 + 0x10 + (ulong)(uVar11 << 5));
  *puVar15 = local_28;
  puVar15[1] = CONCAT44(fStack_1c,fStack_20);
  puVar1 = (ulong *)(param_6 + (ulong)(uVar11 << 5));
  *puVar1 = param_2;
  puVar1[1] = uStack_30;
  if (1 < uVar14) {
    lVar20 = uVar12 - 1;
    do {
      uVar12 = (ulong)((uVar11 & 7) << 5);
      fVar2 = *(float *)(param_6 + 0x18 + uVar12);
      uVar14 = (ulong)((uVar11 + 1 & 7) << 5);
      pfVar18 = (float *)(param_6 + 0x18 + uVar14);
      if (*pfVar18 <= fVar2 && fVar2 != *pfVar18) {
        puVar15 = (undefined8 *)(uVar12 + param_6);
        puVar17 = (undefined8 *)(uVar14 + param_6);
        uVar4 = *puVar15;
        uVar5 = puVar15[1];
        uVar6 = puVar15[2];
        uVar7 = puVar15[3];
        uVar8 = *puVar17;
        uVar9 = puVar17[1];
        uVar10 = puVar17[3];
        puVar15[2] = puVar17[2];
        puVar15[3] = uVar10;
        *puVar15 = uVar8;
        puVar15[1] = uVar9;
        puVar17[2] = uVar6;
        puVar17[3] = uVar7;
        *puVar17 = uVar4;
        puVar17[1] = uVar5;
      }
      uVar11 = uVar11 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  return;
}

