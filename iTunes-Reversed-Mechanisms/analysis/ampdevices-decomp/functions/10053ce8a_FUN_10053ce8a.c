// name: FUN_10053ce8a
// address: 10053ce8a

undefined8 FUN_10053ce8a(long *param_1)

{
  *(undefined1 *)((long)param_1 + 0x491) = 0;
  if (param_1[0x95] != 0) {
    FUN_1001c8d4b(param_1[0x95],0);
    param_1[0x95] = 0;
  }
  FUN_10015cc72(param_1 + 0x94);
  if (param_1[0x93] != 0) {
    FUN_1001c64c1();
    param_1[0x93] = 0;
  }
  (**(code **)(*param_1 + 0xa8))(param_1,1);
  return 0;
}

