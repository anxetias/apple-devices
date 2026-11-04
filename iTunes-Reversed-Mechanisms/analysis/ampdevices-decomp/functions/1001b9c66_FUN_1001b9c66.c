// name: FUN_1001b9c66
// address: 1001b9c66

ulong FUN_1001b9c66(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ushort uVar7;
  ushort uVar8;
  ulong uVar9;
  undefined2 *puVar10;
  ushort uVar11;
  long lVar12;
  undefined *puVar13;
  ulong *puVar14;
  bool bVar15;
  
  puVar1 = (ulong *)*param_1;
  if (puVar1 == (ulong *)0x0) {
    puVar14 = (ulong *)param_1[1];
    if (puVar14 == (ulong *)0x0) {
      if (((long *)*param_2 != (long *)0x0) && (*(long *)*param_2 != 0)) {
        return 0xffffffff;
      }
      if ((long *)param_2[1] == (long *)0x0) {
        return 0;
      }
      return (ulong)-(uint)(*(long *)param_2[1] != 0);
    }
  }
  else {
    plVar2 = (long *)*param_2;
    if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
LAB_1001b9cb0:
      uVar4 = FUN_1001b9e88(puVar1);
      return uVar4;
    }
    if ((long *)param_2[1] == (long *)0x0) {
      return 1;
    }
    if (*(long *)param_2[1] == 0) {
      return 1;
    }
    if (plVar2 != (long *)0x0) goto LAB_1001b9cb0;
    puVar14 = (ulong *)param_1[1];
    if (puVar14 == (ulong *)0x0) {
      FUN_1001b8454(param_2);
      lVar12 = *param_2;
      uVar6 = FUN_1001b8378(param_2);
      uVar4 = *puVar1;
      uVar9 = uVar6;
      if (uVar4 < uVar6) {
        uVar9 = uVar4;
      }
      if (uVar9 == 0) {
        uVar7 = 0;
        uVar8 = 0;
      }
      else {
        puVar10 = &DAT_100711b00;
        if (lVar12 != 0) {
          puVar10 = (undefined2 *)(lVar12 + 0xc);
        }
        lVar12 = 0;
        do {
          uVar7 = *(ushort *)((long)puVar1 + lVar12 + 0xc);
          uVar8 = *(ushort *)((long)puVar10 + lVar12);
          if (uVar7 != uVar8) break;
          bVar15 = uVar9 * 2 + -2 != lVar12;
          lVar12 = lVar12 + 2;
        } while (bVar15);
        if (((uVar7 != uVar8) && (0xd7ff < uVar7)) && (0xd7ff < uVar8)) {
          uVar11 = uVar7 + 0x2000;
          bVar15 = uVar7 < 0xe000;
          uVar7 = uVar7 - 0x800;
          if (bVar15) {
            uVar7 = uVar11;
          }
          if (uVar8 < 0xe000) {
            uVar8 = uVar8 + 0x2000;
          }
          else {
            uVar8 = uVar8 - 0x800;
          }
        }
      }
      uVar9 = 0xffffffff;
      if (uVar6 <= uVar4) {
        uVar9 = (ulong)(uVar6 < uVar4);
      }
      if (uVar7 == uVar8) {
        return uVar9;
      }
      return (ulong)((uint)uVar7 - (uint)uVar8);
    }
  }
  if (((long *)*param_2 == (long *)0x0) || (*(long *)*param_2 == 0)) {
    uVar4 = 1;
    if (((long *)param_2[1] != (long *)0x0) && (*(long *)param_2[1] != 0)) goto LAB_1001b9d5a;
  }
  else {
    if (param_2[1] != 0) {
LAB_1001b9d5a:
      uVar4 = FUN_1001b9f98(puVar14);
      return uVar4;
    }
    FUN_1001b87d0(param_2);
    puVar13 = &DAT_100711b02;
    if (param_2[1] != 0) {
      puVar13 = (undefined *)(param_2[1] + 0xc);
    }
    uVar5 = FUN_1001b83f0(param_2);
    uVar9 = *puVar14;
    uVar6 = uVar9;
    if (uVar5 <= uVar9) {
      uVar6 = uVar5;
    }
    uVar4 = 0xffffffff;
    if (uVar5 <= uVar9) {
      uVar4 = (ulong)(uVar5 < uVar9);
    }
    uVar3 = _memcmp((void *)((long)puVar14 + 0xc),puVar13,uVar6);
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
    }
  }
  return uVar4;
}

