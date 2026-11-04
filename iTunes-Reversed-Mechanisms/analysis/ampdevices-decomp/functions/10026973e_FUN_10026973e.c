// name: FUN_10026973e
// address: 10026973e

void FUN_10026973e(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfb | param_2 << 2;
  return;
}

