// name: FUN_1001b4d2e
// address: 1001b4d2e

void FUN_1001b4d2e(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = param_2;
  puVar1 = operator_new(0x20);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_10083cc08;
  puVar1[3] = param_2;
  lVar2 = param_2 + 8;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  param_1[1] = (long)puVar1;
  FUN_10028535e(param_1,lVar2,param_2);
  return;
}

