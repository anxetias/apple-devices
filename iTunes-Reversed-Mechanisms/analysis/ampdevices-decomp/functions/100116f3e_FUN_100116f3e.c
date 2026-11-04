// name: FUN_100116f3e
// address: 100116f3e

undefined8 FUN_100116f3e(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar3 = (ulong)*(byte *)(param_1 + 0xa8);
  if (uVar3 == 0) {
LAB_100117061:
    *(undefined4 *)(param_1 + 0xc2cc) = 0;
    uVar7 = 0;
  }
  else {
    if (*(int *)(param_1 + 0xb8) != 1) {
      lVar1 = 0;
      do {
        lVar5 = lVar1;
        if (uVar3 - 1 == lVar5) break;
        lVar1 = lVar5 + 1;
      } while (*(int *)(param_1 + 0xbc + lVar5 * 4) != 1);
      if (uVar3 <= lVar5 + 1U) goto LAB_100117061;
    }
    *(int *)(param_1 + 0x1cd04) = (2 - *(int *)(param_1 + 0xc130)) * *(int *)(param_1 + 0xc2c8);
    iVar2 = FUN_100117080(param_1);
    uVar7 = 0xfffffffe;
    if (iVar2 == 0) {
      iVar2 = FUN_1001172f4(param_1);
      if (iVar2 == 0) {
        uVar3 = (ulong)*(uint *)(*(long *)(param_1 + 0xc258) + 0x5a0);
        if (uVar3 != 0) {
          uVar8 = (ulong)*(uint *)(param_1 + 0x1cd04) << 2;
          uVar6 = 0;
          do {
            pvVar4 = operator_new__(uVar8);
            *(void **)(param_1 + 0x1cc90 + uVar6 * 8) = pvVar4;
            pvVar4 = operator_new__((ulong)(*(int *)(param_1 + 0xc2c8) + 0x3c2) << 2);
            *(void **)(param_1 + 0x1cc30 + uVar6 * 8) = pvVar4;
            ___bzero(pvVar4,0xf08);
            pvVar4 = operator_new__(uVar8);
            *(void **)(param_1 + 0x1cbd0 + uVar6 * 8) = pvVar4;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
        }
        uVar7 = 0;
        FUN_100109006(*(undefined8 *)(param_1 + 0x1ccf0),param_1 + 0xc2cc,0);
      }
    }
  }
  return uVar7;
}

