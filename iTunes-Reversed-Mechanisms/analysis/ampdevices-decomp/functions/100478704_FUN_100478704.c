// name: FUN_100478704
// address: 100478704

undefined8 FUN_100478704(undefined8 param_1,short *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_100478022();
  if ((iVar1 == 0) && (*param_2 != 0)) {
    return 0;
  }
  uVar2 = FUN_1004779ac(param_1,param_2);
  return uVar2;
}

