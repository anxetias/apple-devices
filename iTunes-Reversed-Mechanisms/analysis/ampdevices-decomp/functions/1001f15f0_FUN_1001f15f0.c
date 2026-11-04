// name: FUN_1001f15f0
// address: 1001f15f0

undefined4 FUN_1001f15f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1001f17b2();
  uVar2 = 0xffffffff;
  if ((((iVar1 == 0) && (iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0)) &&
      (iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0)) &&
     (((iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0 &&
       (iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0)) &&
      ((iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0 &&
       (iVar1 = FUN_1001f17b2(param_1,param_2), iVar1 == 0)))))) {
    uVar2 = FUN_1001f17b2(param_1,param_2);
  }
  *param_3 = 0;
  return uVar2;
}

