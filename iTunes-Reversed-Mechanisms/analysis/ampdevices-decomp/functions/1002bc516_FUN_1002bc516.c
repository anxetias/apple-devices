// name: FUN_1002bc516
// address: 1002bc516

void FUN_1002bc516(long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  if ((param_2 & 1) != 0) {
    FUN_1002bc56c(param_1,param_1 + 0x18,param_3,param_4);
  }
  if ((param_2 & 2) == 0) {
    return;
  }
  FUN_1002bc56c();
  return;
}

