// name: FUN_10035ce62
// address: 10035ce62

void FUN_10035ce62(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100854a30;
  _free((void *)param_1[0x29]);
  param_1[0x29] = 0;
  if (param_1[0x33] != 0) {
    FUN_1001c652e();
    param_1[0x33] = 0;
  }
  _sqlite3_vfs_unregister((sqlite3_vfs *)(param_1 + 1));
  FUN_1002dd1fa(param_1);
  return;
}

