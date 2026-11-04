// name: FUN_1001f02d6
// address: 1001f02d6

undefined8 FUN_1001f02d6(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffff9a;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *param_2 = *(undefined8 *)(param_1 + 0x68);
    param_2[1] = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}

