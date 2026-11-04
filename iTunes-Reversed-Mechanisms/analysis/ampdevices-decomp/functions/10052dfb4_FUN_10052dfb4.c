// name: FUN_10052dfb4
// address: 10052dfb4

void FUN_10052dfb4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100868f40;
  if (param_1[0xaa] != 0) {
    if (*(char *)(param_1 + 0xab) == '\0') {
      FUN_1001d5da8();
    }
    param_1[0xaa] = 0;
  }
  FUN_10052b960(param_1);
  return;
}

