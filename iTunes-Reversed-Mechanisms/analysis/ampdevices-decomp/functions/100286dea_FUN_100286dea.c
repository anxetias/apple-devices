// name: FUN_100286dea
// address: 100286dea

void FUN_100286dea(long param_1)

{
  undefined1 local_3c [6];
  undefined4 local_36;
  undefined2 local_32;
  uint local_30;
  undefined4 local_2c;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
  FUN_100177cff(&local_2c);
  FUN_100178093(local_2c,local_3c);
  local_36 = 0;
  local_32 = 0;
  FUN_1001781a2(local_3c,&local_30);
  *(ulong *)(param_1 + 0x10) = (ulong)local_30;
  FUN_100178093(local_2c,local_3c);
  local_36 = 0x3b0017;
  local_32 = 0x3b;
  FUN_1001781a2(local_3c,&local_30);
  *(ulong *)(param_1 + 0x18) = (ulong)local_30;
  return;
}

