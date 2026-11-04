// name: FUN_1001364de
// address: 1001364de

void FUN_1001364de(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  param_1[0x28] = 0;
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_100136519();
    param_1[0x28] = 1;
  }
  return;
}

