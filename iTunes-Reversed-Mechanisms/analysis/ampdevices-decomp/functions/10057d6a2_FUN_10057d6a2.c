// name: FUN_10057d6a2
// address: 10057d6a2

void FUN_10057d6a2(undefined8 param_1,undefined4 param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 local_234 [512];
  undefined4 local_34;
  
  FUN_1001bb41a(param_1,local_234);
  pvVar6 = (void *)param_3[1];
  local_34 = param_2;
  if (pvVar6 < (void *)param_3[2]) {
    _memcpy(pvVar6,local_234,0x204);
    lVar7 = (long)pvVar6 + 0x204;
  }
  else {
    lVar7 = (long)pvVar6 - *param_3 >> 2;
    uVar3 = lVar7 * -0x7f01fc07f01fc07f + 1;
    if (0x7f01fc07f01fc0 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10057db00(param_3);
    }
    lVar2 = param_3[2] - *param_3 >> 2;
    uVar5 = lVar2 * 0x1fc07f01fc07f02;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    uVar5 = 0x7f01fc07f01fc0;
    if ((ulong)(lVar2 * -0x7f01fc07f01fc07f) < 0x3f80fe03f80fe0) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_10057db10(param_3 + 2);
    }
    lVar2 = auVar8._0_8_;
    lVar7 = lVar7 * 4;
    pvVar6 = (void *)(lVar2 + lVar7);
    _memcpy(pvVar6,local_234,0x204);
    lVar7 = lVar7 + lVar2 + 0x204;
    sVar4 = param_3[1] - *param_3;
    pvVar6 = (void *)((long)pvVar6 - sVar4);
    _memcpy(pvVar6,(void *)*param_3,sVar4);
    pvVar1 = (void *)*param_3;
    *param_3 = (long)pvVar6;
    param_3[1] = lVar7;
    param_3[2] = auVar8._8_8_ * 0x204 + lVar2;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
  }
  param_3[1] = lVar7;
  return;
}

