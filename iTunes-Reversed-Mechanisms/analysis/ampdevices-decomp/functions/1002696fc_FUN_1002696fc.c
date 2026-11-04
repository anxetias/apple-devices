// name: FUN_1002696fc
// address: 1002696fc

void FUN_1002696fc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe | param_2;
  return;
}

