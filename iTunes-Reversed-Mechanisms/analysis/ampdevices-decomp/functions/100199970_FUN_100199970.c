// name: FUN_100199970
// address: 100199970

void FUN_100199970(long param_1,undefined8 param_2,long param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  if (param_3 != 0) {
    FUN_1001c631b(param_3,param_1 + 0x10,0x18);
    return;
  }
  FUN_1001c62d9(param_1 + 0x10,0x18);
  return;
}

