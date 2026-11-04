// name: FUN_100269608
// address: 100269608

undefined4 FUN_100269608(long *param_1)

{
  if (*(char *)((long)param_1 + 0x44) == '\x01') {
    (**(code **)(*param_1 + 0xc0))(param_1,(long)param_1 + 0x3c,param_1 + 8);
    *(undefined1 *)((long)param_1 + 0x44) = 0;
  }
  return (int)param_1[8];
}

