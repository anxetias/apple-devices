// name: FUN_1001bac36
// address: 1001bac36

long * FUN_1001bac36(long *param_1)

{
  ushort *puVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  long *plVar8;
  size_t *psVar9;
  ushort *puVar10;
  byte *pbVar11;
  long lVar12;
  ushort *puVar13;
  byte *pbVar14;
  size_t sVar15;
  byte *pbVar17;
  ushort *puVar16;
  
  puVar6 = PTR___DefaultRuneLocale_10082cae8;
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)param_1[1];
    if (plVar8 == (long *)0x0) {
      return param_1;
    }
    pbVar14 = (byte *)((long)plVar8 + 0xc);
    lVar5 = *plVar8;
    lVar12 = lVar5;
    if (lVar5 == 0) {
LAB_1001badc2:
      puVar6 = PTR___DefaultRuneLocale_10082cae8;
      if (pbVar14 != (byte *)((long)plVar8 + lVar5 + 0xc)) {
        pbVar11 = (byte *)((long)plVar8 + lVar5 + 0xd);
        do {
          pbVar2 = pbVar11 + -1;
          pbVar17 = pbVar14;
          if (pbVar2 == pbVar14) break;
          bVar3 = pbVar11[-2];
          if ((long)(char)bVar3 < 0) {
            uVar7 = ___maskrune((uint)bVar3,0x4000);
          }
          else {
            uVar7 = *(uint *)(puVar6 + (long)(char)bVar3 * 4 + 0x3c) & 0x4000;
          }
          pbVar11 = pbVar2;
          pbVar17 = pbVar2;
        } while (uVar7 != 0);
        sVar15 = (long)pbVar17 - (long)pbVar14;
        psVar9 = operator_new(sVar15 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
        *psVar9 = sVar15;
        *(undefined4 *)(psVar9 + 1) = 1;
        *(undefined1 *)((long)psVar9 + sVar15 + 0xc) = 0;
        _memcpy((void *)((long)psVar9 + 0xc),pbVar14,sVar15);
        FUN_1001b811c(param_1);
        param_1[1] = (long)psVar9;
        return param_1;
      }
    }
    else {
      do {
        bVar3 = *pbVar14;
        if ((long)(char)bVar3 < 0) {
          uVar7 = ___maskrune((uint)bVar3,0x4000);
        }
        else {
          uVar7 = *(uint *)(puVar6 + (long)(char)bVar3 * 4 + 0x3c) & 0x4000;
        }
        if (uVar7 == 0) goto LAB_1001badc2;
        pbVar14 = pbVar14 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else {
    puVar13 = (ushort *)((long)plVar8 + 0xc);
    lVar5 = *plVar8;
    lVar12 = lVar5 * 2;
    if (lVar5 == 0) {
LAB_1001bacaf:
      puVar6 = PTR___DefaultRuneLocale_10082cae8;
      if (puVar13 != (ushort *)((long)plVar8 + lVar5 * 2 + 0xc)) {
        puVar10 = (ushort *)((long)plVar8 + lVar5 * 2 + 0xe);
        do {
          puVar1 = puVar10 + -1;
          puVar16 = puVar13;
          if (puVar1 == puVar13) break;
          uVar4 = puVar10[-2];
          if ((ulong)uVar4 < 0x80) {
            uVar7 = *(uint *)(puVar6 + (ulong)uVar4 * 4 + 0x3c) & 0x4000;
          }
          else {
            uVar7 = ___maskrune((uint)uVar4,0x4000);
          }
          puVar10 = puVar1;
          puVar16 = puVar1;
        } while (uVar7 != 0);
        sVar15 = (long)puVar16 - (long)puVar13;
        plVar8 = operator_new(sVar15 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
        *plVar8 = (long)sVar15 >> 1;
        *(undefined4 *)(plVar8 + 1) = 1;
        *(undefined2 *)((long)plVar8 + sVar15 + 0xc) = 0;
        _memcpy((void *)((long)plVar8 + 0xc),puVar13,sVar15);
        FUN_1001b811c(param_1);
        *param_1 = (long)plVar8;
        return param_1;
      }
    }
    else {
      do {
        uVar4 = *puVar13;
        if ((ulong)uVar4 < 0x80) {
          uVar7 = *(uint *)(PTR___DefaultRuneLocale_10082cae8 + (ulong)uVar4 * 4 + 0x3c) & 0x4000;
        }
        else {
          uVar7 = ___maskrune((uint)uVar4,0x4000);
        }
        if (uVar7 == 0) goto LAB_1001bacaf;
        puVar13 = puVar13 + 1;
        lVar12 = lVar12 + -2;
      } while (lVar12 != 0);
    }
  }
  FUN_1001b811c(param_1);
  return param_1;
}

