// name: FUN_100269786
// address: 100269786

void FUN_100269786(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xef | param_2 << 4;
  return;
}

