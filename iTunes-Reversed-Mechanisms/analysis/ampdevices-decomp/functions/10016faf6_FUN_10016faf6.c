// name: FUN_10016faf6
// address: 10016faf6

void FUN_10016faf6(long *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  pvVar7 = (void *)param_1[1];
  if (pvVar7 == (void *)*param_1) {
    pvVar2 = (void *)param_1[2];
    pvVar1 = (void *)param_1[3];
    if (pvVar2 < pvVar1) {
      lVar4 = (long)pvVar1 - (long)pvVar2 >> 3;
      lVar4 = (lVar4 - (lVar4 + 1 >> 0x3f)) + 1 >> 1;
      pvVar1 = (void *)((long)pvVar7 + lVar4 * 8);
      if ((long)pvVar2 - (long)pvVar7 != 0) {
        _memmove(pvVar1,pvVar7,(long)pvVar2 - (long)pvVar7);
        pvVar2 = (void *)param_1[2];
      }
      param_1[1] = (long)pvVar1;
      param_1[2] = (long)((long)pvVar2 + lVar4 * 8);
      pvVar7 = pvVar1;
    }
    else {
      lVar4 = 1;
      if (pvVar1 != pvVar7) {
        lVar4 = (long)pvVar1 - (long)pvVar7 >> 2;
      }
      auVar8 = FUN_100249b6c(param_1 + 3,lVar4);
      lVar3 = auVar8._0_8_;
      pvVar7 = (void *)((lVar4 * 2 + 6U & 0xfffffffffffffff8) + lVar3);
      lVar4 = param_1[1];
      lVar5 = param_1[2] - lVar4;
      pvVar2 = pvVar7;
      if (lVar5 != 0) {
        pvVar2 = (void *)(lVar5 + (long)pvVar7);
        lVar6 = 0;
        do {
          *(undefined8 *)((long)pvVar7 + lVar6) = *(undefined8 *)(lVar4 + lVar6);
          lVar6 = lVar6 + 8;
        } while (lVar5 != lVar6);
      }
      pvVar1 = (void *)*param_1;
      *param_1 = lVar3;
      param_1[1] = (long)pvVar7;
      param_1[2] = (long)pvVar2;
      param_1[3] = lVar3 + auVar8._8_8_ * 8;
      if (pvVar1 != (void *)0x0) {
        operator_delete(pvVar1);
        pvVar7 = (void *)param_1[1];
      }
    }
  }
  *(undefined8 *)((long)pvVar7 + -8) = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}

