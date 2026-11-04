// name: FUN_10053cb12
// address: 10053cb12

void FUN_10053cb12(long *param_1)

{
  *param_1 = (long)&PTR_FUN_1008698f8;
  if (param_1[0x95] != 0) {
    FUN_1001c8d4b(param_1[0x95],0);
    param_1[0x95] = 0;
  }
  FUN_10015cc72(param_1 + 0x94);
  if (param_1[0x93] != 0) {
    FUN_1001c64c1();
    param_1[0x93] = 0;
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_10021e316(param_1 + 0x90);
  *param_1 = (long)&PTR_FUN_100869858;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

