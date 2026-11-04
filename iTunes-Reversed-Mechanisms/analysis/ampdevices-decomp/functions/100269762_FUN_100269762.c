// name: FUN_100269762
// address: 100269762

void FUN_100269762(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xf7 | param_2 << 3;
  return;
}

