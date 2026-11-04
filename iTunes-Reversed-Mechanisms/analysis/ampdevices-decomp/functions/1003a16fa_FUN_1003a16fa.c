// name: FUN_1003a16fa
// address: 1003a16fa

undefined8 FUN_1003a16fa(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xf8) & 2) == 0) {
    FUN_10055ea6a(param_1);
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_100474dd0(*(long *)(param_1 + 0x60),0);
    return uVar1;
  }
  return 1;
}

