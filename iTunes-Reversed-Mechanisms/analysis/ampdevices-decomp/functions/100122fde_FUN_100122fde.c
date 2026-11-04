// name: FUN_100122fde
// address: 100122fde

undefined8 FUN_100122fde(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)*param_1)();
  uVar2 = 0xfffffffe;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x68))(param_1);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x58))(param_1);
        if (iVar1 == 0) {
          FUN_100123040(param_1,param_2);
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}

