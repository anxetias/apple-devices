// name: FUN_10022bc70
// address: 10022bc70

void FUN_10022bc70(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  size_t sVar5;
  ulong uVar6;
  
  pvVar2 = (void *)*param_1;
  lVar4 = param_1[2];
  if ((ulong)((lVar4 - (long)pvVar2 >> 2) * -0x5555555555555555) < param_4) {
    if (pvVar2 != (void *)0x0) {
      param_1[1] = pvVar2;
      operator_delete(pvVar2);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      lVar4 = 0;
    }
    if (0x1555555555555555 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_10022bc28(param_1);
    }
    uVar6 = (lVar4 >> 2) * 0x5555555555555556;
    if (param_4 < uVar6) {
      param_4 = uVar6;
    }
    uVar6 = 0x1555555555555555;
    if ((ulong)((lVar4 >> 2) * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
      uVar6 = param_4;
    }
    FUN_10022bda0(param_1,uVar6);
    pvVar3 = (void *)param_1[1];
    pvVar1 = param_2;
  }
  else {
    pvVar3 = (void *)param_1[1];
    sVar5 = (long)pvVar3 - (long)pvVar2;
    if (param_4 <= (ulong)(((long)sVar5 >> 2) * -0x5555555555555555)) {
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

