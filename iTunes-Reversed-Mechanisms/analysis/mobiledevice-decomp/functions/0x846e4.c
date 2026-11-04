// rea decompile_all
// name: _lzfsePushMatch
// address: 0x846e4
// body: available
// range: 0x846e4-0x849c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _lzfsePushMatch(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  
  lVar4 = param_1[0xd];
  iVar1 = *(int *)((long)param_1 + 0x6c);
  lVar15 = param_1[2];
  uVar14 = param_2[4];
  iVar13 = *param_2 - param_2[2];
  iVar7 = iVar1;
  lVar5 = lVar15;
  for (uVar12 = *param_2 - (int)lVar15; 0x13b < uVar12; uVar12 = uVar12 - 0x13b) {
    uVar2 = *(uint *)(param_1 + 0xd);
    uVar8 = (ulong)uVar2;
    if ((*(uint *)((long)param_1 + 0x44) < uVar2 + 9) || (*(uint *)(param_1 + 9) < iVar7 + 0x14bU))
    goto LAB_00084909;
    *(uint *)(param_1 + 0xd) = uVar2 + 1;
    *(undefined4 *)(param_1[0xf] + uVar8 * 4) = 0x13b;
    *(undefined4 *)(param_1[0x10] + uVar8 * 4) = 0;
    *(undefined4 *)(param_1[0x11] + uVar8 * 4) = 1;
    lVar3 = param_1[0x12];
    uVar2 = *(uint *)((long)param_1 + 0x6c);
    puVar9 = (undefined8 *)(lVar3 + (ulong)uVar2);
    if (param_1[1] < lVar5 + 0x14b) {
      _memcpy(puVar9,(void *)(*param_1 + lVar5),0x13b);
    }
    else {
      puVar10 = (undefined8 *)(lVar5 + *param_1);
      uVar6 = puVar10[1];
      *puVar9 = *puVar10;
      puVar9[1] = uVar6;
      puVar9 = puVar9 + 2;
      do {
        uVar6 = puVar10[3];
        *puVar9 = puVar10[2];
        puVar9[1] = uVar6;
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
      } while (puVar9 < (undefined8 *)(lVar3 + (ulong)uVar2 + 0x13b));
    }
    iVar7 = *(int *)((long)param_1 + 0x6c) + 0x13b;
    *(int *)((long)param_1 + 0x6c) = iVar7;
    lVar5 = param_1[2] + 0x13b;
    param_1[2] = lVar5;
  }
  for (; 0x937 < uVar14; uVar14 = uVar14 - 0x937) {
    uVar2 = *(uint *)(param_1 + 0xd);
    uVar8 = (ulong)uVar2;
    if ((*(uint *)((long)param_1 + 0x44) < uVar2 + 9) ||
       (*(uint *)(param_1 + 9) < iVar7 + uVar12 + 0x10)) goto LAB_00084909;
    *(uint *)(param_1 + 0xd) = uVar2 + 1;
    *(uint *)(param_1[0xf] + uVar8 * 4) = uVar12;
    *(undefined4 *)(param_1[0x10] + uVar8 * 4) = 0x937;
    *(int *)(param_1[0x11] + uVar8 * 4) = iVar13;
    puVar10 = (undefined8 *)((ulong)*(uint *)((long)param_1 + 0x6c) + param_1[0x12]);
    lVar3 = *param_1;
    puVar9 = (undefined8 *)(lVar3 + lVar5);
    uVar8 = (ulong)uVar12;
    if (param_1[1] < (long)(uVar8 + lVar5 + 0x10)) {
      if (uVar12 != 0) {
        _memcpy(puVar10,puVar9,uVar8);
      }
    }
    else {
      uVar6 = puVar9[1];
      *puVar10 = *puVar9;
      puVar10[1] = uVar6;
      if (0x10 < uVar12) {
        puVar11 = puVar10 + 2;
        puVar9 = (undefined8 *)(lVar5 + lVar3);
        do {
          uVar6 = puVar9[3];
          *puVar11 = puVar9[2];
          puVar11[1] = uVar6;
          puVar11 = puVar11 + 2;
          puVar9 = puVar9 + 2;
        } while (puVar11 < (undefined8 *)((long)puVar10 + uVar8));
      }
    }
    iVar7 = uVar12 + *(int *)((long)param_1 + 0x6c);
    *(int *)((long)param_1 + 0x6c) = iVar7;
    lVar5 = param_1[2] + uVar8 + 0x937;
    param_1[2] = lVar5;
    uVar12 = 0;
  }
  if (uVar14 == 0 && uVar12 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xd);
    uVar8 = (ulong)uVar2;
    if ((*(uint *)((long)param_1 + 0x44) < uVar2 + 9) ||
       (*(uint *)(param_1 + 9) < iVar7 + uVar12 + 0x10)) {
LAB_00084909:
      *(int *)(param_1 + 0xd) = (int)lVar4;
      *(int *)((long)param_1 + 0x6c) = iVar1;
      uVar6 = 0xfffffffe;
    }
    else {
      *(uint *)(param_1 + 0xd) = uVar2 + 1;
      *(uint *)(param_1[0xf] + uVar8 * 4) = uVar12;
      *(uint *)(param_1[0x10] + uVar8 * 4) = uVar14;
      *(int *)(param_1[0x11] + uVar8 * 4) = iVar13;
      puVar10 = (undefined8 *)((ulong)*(uint *)((long)param_1 + 0x6c) + param_1[0x12]);
      lVar15 = *param_1;
      puVar9 = (undefined8 *)(lVar15 + lVar5);
      uVar8 = (ulong)uVar12;
      if (param_1[1] < (long)(uVar8 + lVar5 + 0x10)) {
        if (uVar12 != 0) {
          _memcpy(puVar10,puVar9,uVar8);
        }
      }
      else {
        uVar6 = puVar9[1];
        *puVar10 = *puVar9;
        puVar10[1] = uVar6;
        if (0x10 < uVar12) {
          puVar11 = puVar10 + 2;
          puVar9 = (undefined8 *)(lVar5 + lVar15);
          do {
            uVar6 = puVar9[3];
            *puVar11 = puVar9[2];
            puVar11[1] = uVar6;
            puVar11 = puVar11 + 2;
            puVar9 = puVar9 + 2;
          } while (puVar11 < (undefined8 *)(uVar8 + (long)puVar10));
        }
      }
      *(int *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar12;
      lVar15 = (ulong)(uVar14 + uVar12) + param_1[2];
      uVar6 = 0;
    }
    param_1[2] = lVar15;
  }
  return uVar6;
}

