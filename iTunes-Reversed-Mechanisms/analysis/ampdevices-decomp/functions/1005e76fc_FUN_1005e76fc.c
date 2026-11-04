// name: FUN_1005e76fc
// address: 1005e76fc

long * FUN_1005e76fc(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  size_t sVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [16];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar7 = *(long *)(param_2 + 0x60);
  if (lVar7 != 0) {
    puVar9 = (undefined4 *)0x0;
    do {
      if (*(char *)(lVar7 + 0x68ca) != '\0') {
        return param_1;
      }
      puVar11 = (undefined4 *)param_1[2];
      if (puVar9 < puVar11) {
        *puVar9 = *(undefined4 *)(lVar7 + 0x6884);
        puVar9 = puVar9 + 1;
      }
      else {
        pvVar5 = (void *)*param_1;
        sVar8 = (long)puVar9 - (long)pvVar5;
        lVar10 = (long)sVar8 >> 2;
        uVar1 = lVar10 + 1;
        if (0x3fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1001bd596(param_1);
        }
        uVar4 = (long)puVar11 - (long)pvVar5;
        uVar2 = (long)uVar4 >> 1;
        if (uVar2 <= uVar1) {
          uVar2 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar4) {
          uVar2 = 0x3fffffffffffffff;
        }
        if (uVar2 == 0) {
          auVar12 = ZEXT816(0);
          lVar6 = lVar10;
        }
        else {
          auVar12 = FUN_1001b5f6e(param_1 + 2,uVar2);
          pvVar5 = (void *)*param_1;
          sVar8 = param_1[1] - (long)pvVar5;
          lVar6 = (long)sVar8 >> 2;
        }
        lVar3 = auVar12._0_8_;
        puVar11 = (undefined4 *)(lVar3 + lVar10 * 4);
        *puVar11 = *(undefined4 *)(lVar7 + 0x6884);
        puVar9 = (undefined4 *)(lVar3 + lVar10 * 4 + 4);
        puVar11 = puVar11 + -lVar6;
        _memcpy(puVar11,pvVar5,sVar8);
        pvVar5 = (void *)*param_1;
        *param_1 = (long)puVar11;
        param_1[1] = (long)puVar9;
        param_1[2] = lVar3 + auVar12._8_8_ * 4;
        if (pvVar5 != (void *)0x0) {
          operator_delete(pvVar5);
        }
      }
      param_1[1] = (long)puVar9;
      lVar7 = *(long *)(lVar7 + 0x6878);
    } while (lVar7 != 0);
  }
  return param_1;
}

