// name: FUN_1004c20ec
// address: 1004c20ec

undefined8 FUN_1004c20ec(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_10044013a(*(undefined8 *)(param_1 + 0x4f0));
  if ((long)uVar1 < 80000) {
    uVar2 = 1;
    uVar3 = 0;
  }
  else {
    param_2[2] = uVar1 >> 1;
    param_2[3] = 1000;
    param_2[4] = uVar1 - 10000;
    param_2[5] = 1000;
    uVar2 = 3;
    uVar3 = 20000;
    uVar1 = 1000;
  }
  *param_2 = uVar3;
  param_2[1] = uVar1;
  return uVar2;
}

