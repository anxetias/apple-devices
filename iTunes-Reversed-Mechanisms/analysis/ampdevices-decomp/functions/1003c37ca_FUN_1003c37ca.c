// name: FUN_1003c37ca
// address: 1003c37ca

void FUN_1003c37ca(long param_1,long *param_2)

{
  undefined4 uVar1;
  
  if ((long *)*param_2 == (long *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(long *)*param_2 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x4b4) = uVar1;
  return;
}

