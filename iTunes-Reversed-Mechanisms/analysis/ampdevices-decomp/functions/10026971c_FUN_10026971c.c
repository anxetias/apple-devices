// name: FUN_10026971c
// address: 10026971c

void FUN_10026971c(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfd | param_2 * '\x02';
  return;
}

