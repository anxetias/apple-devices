// name: FUN_1005cd39a
// address: 1005cd39a

void FUN_1005cd39a(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 auVar3 [16];
  
  if (param_4 != 0) {
    if (0x7f01fc07f01fc0 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_10057db00(param_1);
    }
    auVar3 = FUN_10057db10(param_1 + 2,param_4);
    pvVar1 = auVar3._0_8_;
    *param_1 = pvVar1;
    param_1[1] = pvVar1;
    param_1[2] = (void *)(auVar3._8_8_ * 0x204 + (long)pvVar1);
    sVar2 = param_3 - (long)param_2;
    if (sVar2 != 0) {
      _memmove(pvVar1,param_2,sVar2);
    }
    param_1[1] = sVar2 + (long)pvVar1;
  }
  return;
}

