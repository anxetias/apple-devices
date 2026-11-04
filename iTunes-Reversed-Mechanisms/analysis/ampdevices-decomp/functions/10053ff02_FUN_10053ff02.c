// name: FUN_10053ff02
// address: 10053ff02

void FUN_10053ff02(long param_1)

{
  if (*(char *)(param_1 + 0x4bc) == '\x01') {
    *(undefined1 *)(param_1 + 0x4bc) = 0;
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  *(undefined1 *)(param_1 + 0x4b8) = 0;
  return;
}

