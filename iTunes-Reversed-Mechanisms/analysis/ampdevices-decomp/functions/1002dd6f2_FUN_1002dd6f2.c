// name: FUN_1002dd6f2
// address: 1002dd6f2

ushort FUN_1002dd6f2(ushort param_1)

{
  int iVar1;
  ushort local_1c;
  ushort local_1a;
  
  local_1c = 0x30;
  if (9 < (ushort)(param_1 - 0x30)) {
    if ((ushort)(param_1 - 0x61) < 0x1a) {
      local_1c = param_1 - 0x20;
    }
    else {
      local_1c = param_1;
      if (0x7f < param_1) {
        local_1a = 0x41;
        do {
          iVar1 = FUN_1002dd449(&local_1c,1,&local_1a,1);
          if (iVar1 == 0) {
            return local_1a;
          }
          if (0x41 < local_1a && iVar1 < 0) {
            return local_1a - 1;
          }
          local_1a = local_1a + 1;
        } while (local_1a < 0x5b);
        local_1a = 0x30;
        do {
          iVar1 = FUN_1002dd449(&local_1c,1,&local_1a,1);
          if (iVar1 == 0) {
            return 0x30;
          }
          if (0x30 < local_1a && iVar1 < 0) {
            return 0x30;
          }
          local_1a = local_1a + 1;
        } while (local_1a < 0x3a);
      }
    }
  }
  return local_1c;
}

