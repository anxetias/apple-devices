// name: FUN_10055bc32
// address: 10055bc32

undefined8 FUN_10055bc32(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x36) != '\0') {
    uVar1 = FUN_10018a078(param_1 + 0x48);
    if ((int)uVar1 == 0) {
      FUN_100264de6(param_1);
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffdd;
}

