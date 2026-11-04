// name: FUN_1005a1590
// address: 1005a1590

undefined8 FUN_1005a1590(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_3 - 1U < 8) && ((0x8bU >> ((uint)(param_3 - 1U) & 0x1f) & 1) != 0)) {
    uVar1 = FUN_100172017(param_1,*(undefined8 *)(&DAT_10075a888 + param_3 * 8),param_2);
    return uVar1;
  }
  return 0;
}

