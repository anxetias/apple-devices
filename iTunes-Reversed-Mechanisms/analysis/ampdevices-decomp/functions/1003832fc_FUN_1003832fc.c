// name: FUN_1003832fc
// address: 1003832fc

undefined4 FUN_1003832fc(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x7b) {
    uVar1 = *(undefined4 *)(&DAT_100745a40 + (ulong)(param_1 - 1U) * 4);
  }
  return uVar1;
}

