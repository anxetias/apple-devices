// name: FUN_1002dd1fa
// address: 1002dd1fa

void FUN_1002dd1fa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100852a58;
  _free((void *)param_1[0x29]);
  param_1[0x29] = 0;
  if (param_1[0x33] != 0) {
    FUN_1001c652e();
    param_1[0x33] = 0;
  }
  _sqlite3_vfs_unregister((sqlite3_vfs *)(param_1 + 1));
  return;
}

