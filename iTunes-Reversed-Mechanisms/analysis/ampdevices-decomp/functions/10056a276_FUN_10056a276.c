// name: FUN_10056a276
// address: 10056a276

long FUN_10056a276(long param_1,long param_2)

{
  if (param_1 != param_2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    FUN_10056e4e8(param_1,*(undefined8 *)(param_2 + 0x10));
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    FUN_10056e4e8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x38));
  }
  return param_1;
}

