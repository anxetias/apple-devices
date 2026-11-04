// name: FUN_100284118
// address: 100284118

void FUN_100284118(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  
  pvVar2 = (void *)*param_1;
  uVar4 = param_1[2];
  if ((ulong)((long)(uVar4 - (long)pvVar2) >> 3) < param_4) {
    if (pvVar2 != (void *)0x0) {
      param_1[1] = pvVar2;
      operator_delete(pvVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar4 = 0;
    }
    if (param_4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100283ee2(param_1);
    }
    uVar6 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar6 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_100283ea8(param_1,uVar6);
    pvVar3 = (void *)param_1[1];
    pvVar1 = param_2;
  }
  else {
    pvVar3 = (void *)param_1[1];
    sVar5 = (long)pvVar3 - (long)pvVar2;
    if (param_4 <= (ulong)((long)sVar5 >> 3)) {
      sVar5 = param_3 - (long)param_2;
      if (sVar5 != 0) {
        _memmove(pvVar2,param_2,sVar5);
      }
      param_1[1] = (long)pvVar2 + sVar5;
      return;
    }
    pvVar1 = (void *)((long)param_2 + sVar5);
    if (pvVar3 != pvVar2) {
      _memmove(pvVar2,param_2,sVar5);
      pvVar3 = (void *)param_1[1];
    }
  }
  sVar5 = param_3 - (long)pvVar1;
  if (sVar5 != 0) {
    _memmove(pvVar3,pvVar1,sVar5);
  }
  param_1[1] = (long)pvVar3 + sVar5;
  return;
}

