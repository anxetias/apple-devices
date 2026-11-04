// name: FUN_1001076a6
// address: 1001076a6

int FUN_1001076a6(long param_1)

{
  void *pvVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  uint uVar12;
  ulong uVar13;
  
  lVar3 = *(long *)(param_1 + 0xb30);
  iVar8 = *(int *)(lVar3 + 0x5c0) + *(int *)(lVar3 + 0x5bc);
  iVar2 = *(int *)(lVar3 + 0x5c4);
  iVar4 = -2;
  if ((iVar2 + iVar8) - 1U < 0xb) {
    uVar7 = 0;
    uVar13 = 0;
    do {
      uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 0x5c8 + uVar7 * 4);
      lVar10 = uVar9 * 0x78;
      lVar6 = uVar9 * 0x20a0;
      lVar3 = *(long *)(param_1 + 0xb28) + 0xbb0 + lVar6;
      pvVar1 = (void *)(*(long *)(param_1 + 0xb28) + 0x1920 + lVar6);
      if (*(char *)(*(long *)(param_1 + 0xb30) + 4 + lVar10) == '\0') {
        pvVar11 = pvVar1;
        if (*(int *)(param_1 + 0x1f5c) == 0) {
          iVar4 = FUN_10010751a(param_1);
          if (iVar4 != 0) {
            return -2;
          }
          if (*(void **)(lVar3 + 0x1d70) != (void *)0x0) {
            _memcpy(*(void **)(lVar3 + 0x1d70),pvVar1,(ulong)*(uint *)(param_1 + 0x1f54) << 2);
          }
        }
        else {
          pvVar11 = *(void **)(lVar3 + 0x1d70);
          if (*(void **)(lVar3 + 0x1d70) == (void *)0x0) {
            ___bzero(pvVar1,(ulong)*(uint *)(param_1 + 0x1f54) << 2);
            pvVar11 = pvVar1;
          }
        }
        iVar4 = (**(code **)(**(long **)(param_1 + 0x1f68) + 0x18))
                          (*(long **)(param_1 + 0x1f68),uVar13,pvVar11,
                           **(undefined4 **)(*(long *)(lVar3 + 8) + 8),
                           **(undefined4 **)(*(long *)(lVar3 + 8) + 0x10));
        *(void **)(param_1 + 0x1f70 + uVar13 * 8) = pvVar11;
        iVar5 = 1;
      }
      else {
        pvVar11 = pvVar1;
        if (*(int *)(param_1 + 0x1f5c) == 0) {
          iVar4 = FUN_100107582(param_1);
          if (iVar4 != 0) {
            return -2;
          }
          if (*(void **)(lVar3 + 0x1d70) != (void *)0x0) {
            _memcpy(*(void **)(lVar3 + 0x1d70),pvVar1,(ulong)*(uint *)(param_1 + 0x1f54) << 2);
          }
        }
        else {
          pvVar11 = *(void **)(lVar3 + 0x1d70);
          if (*(void **)(lVar3 + 0x1d70) == (void *)0x0) {
            ___bzero(pvVar1,(ulong)*(uint *)(param_1 + 0x1f54) << 2);
            pvVar11 = pvVar1;
          }
        }
        iVar4 = (**(code **)(**(long **)(param_1 + 0x1f68) + 0x18))
                          (*(long **)(param_1 + 0x1f68),uVar13,pvVar11,
                           **(undefined4 **)(*(long *)(lVar3 + 8) + 8),
                           **(undefined4 **)(*(long *)(lVar3 + 8) + 0x10));
        *(void **)(param_1 + 0x1f70 + uVar13 * 8) = pvVar11;
        if (iVar4 != 0) {
          return -2;
        }
        lVar6 = (ulong)*(uint *)(*(long *)(param_1 + 0xb30) + 8 + lVar10) * 0x20a0;
        lVar3 = *(long *)(param_1 + 0xb28) + lVar6;
        lVar10 = *(long *)(param_1 + 0xb28) + lVar6 + 0x1920;
        lVar6 = lVar10;
        if ((*(int *)(param_1 + 0x1f5c) != 0) && (lVar6 = *(long *)(lVar3 + 0x2920), lVar6 == 0)) {
          ___bzero(lVar10,(ulong)*(uint *)(param_1 + 0x1f54) << 2);
          lVar6 = lVar10;
        }
        uVar9 = (ulong)((int)uVar13 + 1);
        lVar3 = *(long *)(lVar3 + 3000);
        iVar4 = (**(code **)(**(long **)(param_1 + 0x1f68) + 0x18))
                          (*(long **)(param_1 + 0x1f68),uVar9,lVar6,**(undefined4 **)(lVar3 + 8),
                           **(undefined4 **)(lVar3 + 0x10));
        *(long *)(param_1 + 0x1f70 + uVar9 * 8) = lVar6;
        iVar5 = 2;
      }
      if (iVar4 != 0) {
        return -2;
      }
      uVar12 = (int)uVar13 + iVar5;
      uVar13 = (ulong)uVar12;
      uVar7 = uVar7 + 1;
    } while ((uint)(iVar8 + iVar2) != uVar7);
    iVar4 = (uint)(uVar12 == *(ushort *)(param_1 + 0x1f50)) * 2 + -2;
  }
  return iVar4;
}

