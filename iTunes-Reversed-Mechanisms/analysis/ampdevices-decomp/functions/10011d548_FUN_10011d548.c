// name: FUN_10011d548
// address: 10011d548

void FUN_10011d548(undefined8 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  FUN_100114c50();
  *param_1 = &PTR_FUN_100835dc0;
  *(undefined1 *)(param_1 + 0x397c) = 1;
  uVar1 = FUN_100105f68(0xa250);
  FUN_10010962c(uVar1,param_2,param_1[0x1828]);
  param_1[0x397a] = uVar1;
  return;
}

