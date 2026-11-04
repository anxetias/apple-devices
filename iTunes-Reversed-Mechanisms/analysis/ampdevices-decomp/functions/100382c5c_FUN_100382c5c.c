// name: FUN_100382c5c
// address: 100382c5c

void FUN_100382c5c(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  size_t sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  pvVar2 = (void *)*param_1;
  uVar3 = param_1[2];
  if (param_4 <= (ulong)((long)(uVar3 - (long)pvVar2) >> 3)) {
    pvVar4 = (void *)param_1[1];
    sVar5 = (long)pvVar4 - (long)pvVar2;
    if (param_4 <= (ulong)((long)sVar5 >> 3)) {
      sVar5 = param_3 - (long)param_2;
      if (sVar5 != 0) {
        _memmove(pvVar2,param_2,sVar5);
      }
      param_1[1] = (long)pvVar2 + sVar5;
      return;
    }
    pvVar1 = (void *)((long)param_2 + sVar5);
    if (pvVar4 != pvVar2) {
      _memmove(pvVar2,param_2,sVar5);
      pvVar4 = (void *)param_1[1];
    }
joined_r0x000100382d48:
    sVar5 = param_3 - (long)pvVar1;
    if (sVar5 != 0) {
      _memmove(pvVar4,pvVar1,sVar5);
    }
    param_1[1] = (long)pvVar4 + sVar5;
    return;
  }
  if (pvVar2 != (void *)0x0) {
    param_1[1] = pvVar2;
    operator_delete(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar3 = 0;
  }
  if (param_4 >> 0x3d == 0) {
    uVar6 = (long)uVar3 >> 2;
    if ((ulong)((long)uVar3 >> 2) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar6 = 0x1fffffffffffffff;
    }
    if (uVar6 < 0x2000000000000000) {
      auVar7 = FUN_100249b6c(param_1 + 2);
      pvVar4 = auVar7._0_8_;
      *param_1 = pvVar4;
      param_1[1] = pvVar4;
      param_1[2] = (void *)((long)pvVar4 + auVar7._8_8_ * 8);
      pvVar1 = param_2;
      goto joined_r0x000100382d48;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_100382d90(param_1);
}

