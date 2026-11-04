// name: FUN_10062321c
// address: 10062321c

void FUN_10062321c(long param_1,long param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 local_30;
  
  lVar2 = (param_2 - param_1 >> 5) * -0x5555555555555555;
  auVar3 = ZEXT816(0);
  local_30 = param_3;
  if (0x3000 < param_2 - param_1) {
    auVar3 = FUN_1006238d8(lVar2);
  }
  pvVar1 = auVar3._0_8_;
  FUN_10062392f(param_1,param_2,&local_30,lVar2,pvVar1,auVar3._8_8_);
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return;
}

