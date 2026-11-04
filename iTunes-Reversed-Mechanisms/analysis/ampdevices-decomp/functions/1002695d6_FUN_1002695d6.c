// name: FUN_1002695d6
// address: 1002695d6

undefined4 FUN_1002695d6(long *param_1)

{
  if (*(char *)((long)param_1 + 0x44) == '\x01') {
    (**(code **)(*param_1 + 0xc0))(param_1,(long)param_1 + 0x3c,param_1 + 8);
    *(undefined1 *)((long)param_1 + 0x44) = 0;
  }
  return *(undefined4 *)((long)param_1 + 0x3c);
}

