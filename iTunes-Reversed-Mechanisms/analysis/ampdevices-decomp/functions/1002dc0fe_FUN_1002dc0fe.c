// name: FUN_1002dc0fe
// address: 1002dc0fe

undefined8 FUN_1002dc0fe(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_10041576c(param_2);
  iVar2 = FUN_1000e0dc0(uVar1,param_3,0);
  if (iVar2 == 0) {
    uVar1 = FUN_10041576c(param_2);
    uVar3 = FUN_10004aec0(uVar1,*(undefined8 *)(param_1 + 0x15810),param_3,1,param_1 + 0x15818);
    *(undefined1 *)(param_1 + 0x15808) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

