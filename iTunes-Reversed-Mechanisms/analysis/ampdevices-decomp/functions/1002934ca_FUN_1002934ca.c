// name: FUN_1002934ca
// address: 1002934ca

void FUN_1002934ca(int param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10055f8e9();
  uVar2 = 0;
  if (param_1 == 0x44574e4c) {
    param_2 = FUN_1004aa9fa(param_2 + 0x2c);
    if (param_2 == 0) goto LAB_100293528;
  }
  else {
    if ((param_1 != 0x4d46494c) && (uVar2 = 0, param_1 != 0x46494c45)) goto LAB_100293528;
    param_2 = param_2 + 0x2c;
  }
  uVar2 = *(undefined4 *)(param_2 + 0x420);
LAB_100293528:
  FUN_100291bc1(uVar2,uVar1,param_3,0xf);
  return;
}

