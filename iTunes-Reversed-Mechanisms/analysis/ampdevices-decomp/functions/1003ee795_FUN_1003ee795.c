// name: FUN_1003ee795
// address: 1003ee795

undefined4 FUN_1003ee795(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 - 2U < 0x37) {
    uVar1 = *(undefined4 *)(&DAT_100747ea0 + (ulong)(param_1 - 2U) * 4);
  }
  return uVar1;
}

