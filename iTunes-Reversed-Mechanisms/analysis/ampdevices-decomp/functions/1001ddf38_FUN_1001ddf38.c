// name: FUN_1001ddf38
// address: 1001ddf38

void FUN_1001ddf38(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 0;
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1001dfe99(param_2);
    iVar1 = iVar1 * 2;
  }
  FUN_1001ddddc(param_1,param_2,iVar1,param_3);
  return;
}

