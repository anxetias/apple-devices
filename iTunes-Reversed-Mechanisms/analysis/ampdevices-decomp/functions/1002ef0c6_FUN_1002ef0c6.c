// name: FUN_1002ef0c6
// address: 1002ef0c6

undefined8 FUN_1002ef0c6(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  undefined8 local_38;
  
  if ((((*(long *)(param_1 + 0x10) != 0) &&
       (lVar2 = FUN_1002f1528(*(long *)(param_1 + 0x10),param_2), lVar2 == 0)) ||
      ((*(long *)(param_1 + 0x18) != 0 &&
       (lVar2 = FUN_1002f1528(*(long *)(param_1 + 0x18),param_2), lVar2 != 0)))) ||
     (uVar3 = FUN_1002f0fa0(*(undefined8 *)(param_1 + 0x88),param_2,param_2), (uVar3 & 1) == 0)) {
    return 0;
  }
  puVar15 = *(undefined8 **)(param_1 + 0x48);
  if (puVar15 < *(undefined8 **)(param_1 + 0x50)) {
    *puVar15 = param_2;
    puVar15 = puVar15 + 1;
  }
  else {
    pvVar9 = *(void **)(param_1 + 0x40);
    sVar8 = (long)puVar15 - (long)pvVar9;
    lVar2 = (long)sVar8 >> 3;
    uVar3 = lVar2 + 1;
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100283ee2();
    }
    uVar5 = (long)*(undefined8 **)(param_1 + 0x50) - (long)pvVar9;
    uVar10 = (long)uVar5 >> 2;
    if (uVar10 <= uVar3) {
      uVar10 = uVar3;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar10 = 0x1fffffffffffffff;
    }
    if (uVar10 == 0) {
      auVar18 = ZEXT816(0);
      lVar11 = lVar2;
    }
    else {
      auVar18 = FUN_100249b6c(param_1 + 0x50,uVar10);
      pvVar9 = *(void **)(param_1 + 0x40);
      sVar8 = *(long *)(param_1 + 0x48) - (long)pvVar9;
      lVar11 = (long)sVar8 >> 3;
    }
    lVar4 = auVar18._0_8_;
    puVar16 = (undefined8 *)(lVar4 + lVar2 * 8);
    *puVar16 = param_2;
    puVar15 = (undefined8 *)(lVar4 + lVar2 * 8 + 8);
    puVar16 = puVar16 + -lVar11;
    _memcpy(puVar16,pvVar9,sVar8);
    pvVar9 = *(void **)(param_1 + 0x40);
    *(undefined8 **)(param_1 + 0x40) = puVar16;
    *(undefined8 **)(param_1 + 0x48) = puVar15;
    *(long *)(param_1 + 0x50) = lVar4 + auVar18._8_8_ * 8;
    if (pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
  }
  *(undefined8 **)(param_1 + 0x48) = puVar15;
  uVar3 = *(ulong *)(param_1 + 0x60);
  if (uVar3 != *(long *)(param_1 + 0x68) << 6) goto LAB_1002ef370;
  if ((long)(uVar3 + 1) < 0) {
LAB_1002ef253:
    FUN_1002f0ea4();
LAB_1002ef258:
    uVar10 = 0x7fffffffffffffff;
  }
  else {
    if (0x3ffffffffffffffe < uVar3) goto LAB_1002ef258;
    uVar5 = *(long *)(param_1 + 0x68) << 7;
    uVar10 = (uVar3 & 0x3fffffffffffffc0) + 0x40;
    if (uVar10 < uVar5) {
      uVar10 = uVar5;
    }
    if (uVar10 <= uVar3) goto LAB_1002ef370;
    if ((long)uVar10 < 0) goto LAB_1002ef253;
  }
  local_38 = 0;
  auVar18 = FUN_100249b6c(&local_38,(uVar10 - 1 >> 6) + 1);
  puVar6 = auVar18._0_8_;
  puVar1 = *(ulong **)(param_1 + 0x58);
  uVar3 = *(ulong *)(param_1 + 0x60);
  uVar10 = 0;
  if (0x40 < uVar3) {
    uVar10 = uVar3 - 1 >> 6;
  }
  puVar6[uVar10] = 0;
  if (0x3f < uVar3 || (uVar3 & 0x3f) != 0) {
    iVar7 = 0;
    uVar10 = 0;
    puVar12 = puVar1;
    puVar13 = puVar6;
    do {
      uVar5 = 1L << ((byte)iVar7 & 0x3f);
      if ((*puVar12 >> (uVar10 & 0x3f) & 1) == 0) {
        uVar5 = ~uVar5 & *puVar13;
      }
      else {
        uVar5 = uVar5 | *puVar13;
      }
      *puVar13 = uVar5;
      iVar14 = (int)uVar10;
      puVar12 = puVar12 + (iVar14 == 0x3f);
      uVar10 = (ulong)(iVar14 + 1);
      if (iVar14 == 0x3f) {
        uVar10 = 0;
      }
      bVar17 = iVar7 == 0x3f;
      iVar7 = iVar7 + 1;
      if (bVar17) {
        iVar7 = 0;
      }
      puVar13 = puVar13 + bVar17;
    } while ((uint)uVar10 != ((uint)uVar3 & 0x3f) || puVar12 != puVar1 + (uVar3 >> 6));
  }
  *(ulong **)(param_1 + 0x58) = puVar6;
  local_38 = *(undefined8 *)(param_1 + 0x68);
  *(ulong *)(param_1 + 0x60) = uVar3;
  *(long *)(param_1 + 0x68) = auVar18._8_8_;
  if (puVar1 != (ulong *)0x0) {
    operator_delete(puVar1);
    uVar3 = *(ulong *)(param_1 + 0x60);
  }
LAB_1002ef370:
  *(ulong *)(param_1 + 0x60) = uVar3 + 1;
  lVar2 = *(long *)(param_1 + 0x58);
  puVar1 = (ulong *)(lVar2 + (uVar3 >> 6) * 8);
  *puVar1 = *puVar1 | 1L << ((byte)uVar3 & 0x3f);
  return CONCAT71((int7)((ulong)lVar2 >> 8),1);
}

