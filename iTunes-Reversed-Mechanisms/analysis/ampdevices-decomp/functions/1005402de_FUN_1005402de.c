// name: FUN_1005402de
// address: 1005402de

long FUN_1005402de(long *param_1)

{
  long lVar1;
  
  if (*(char *)((long)param_1 + 0xfbc) == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x208))(param_1);
    param_1[0x1f8] = lVar1;
    *(undefined1 *)((long)param_1 + 0xfbc) = 1;
  }
  else {
    lVar1 = param_1[0x1f8];
  }
  return lVar1;
}

