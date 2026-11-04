// name: FUN_1005e650c
// address: 1005e650c

undefined4 FUN_1005e650c(undefined8 param_1,undefined1 param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((int)param_3 == 0) {
    uVar1 = FUN_100177d5c(0);
    param_3 = (ulong)uVar1;
  }
  uVar2 = FUN_1005e5f8e(param_1,param_2,param_3);
  if ((char)uVar2 != '\0') {
    FUN_1005e5e26(param_1,0x10);
  }
  return uVar2;
}

