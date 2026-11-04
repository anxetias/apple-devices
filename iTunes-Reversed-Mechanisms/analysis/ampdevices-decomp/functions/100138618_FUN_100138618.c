// name: FUN_100138618
// address: 100138618

void FUN_100138618(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    FUN_1001a8c12(param_1 + 0x10);
    FUN_1001b7a50(param_1);
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}

