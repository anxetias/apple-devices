// name: FUN_10016c052
// address: 10016c052

void FUN_10016c052(runtime_error *param_1,undefined4 param_2,char *param_3,undefined8 param_4)

{
  std::runtime_error::runtime_error(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10083c0c0;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}

