// name: FUN_1001d260e
// address: 1001d260e

int FUN_1001d260e(ulong param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  uint local_b8 [34];
  long local_30;
  undefined4 local_28;
  
  iVar5 = (int)param_1;
  if (iVar5 == -1) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2c40(uVar4);
    }
    FUN_1001782e9(0,0);
    sVar2 = -0x32;
  }
  else {
    local_b8[0] = 0;
    local_b8[1] = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    local_b8[4] = 0;
    local_b8[5] = 0;
    local_b8[6] = 0;
    local_b8[7] = 0;
    local_b8[8] = 0;
    local_b8[9] = 0;
    local_b8[10] = 0;
    local_b8[0xb] = 0;
    local_b8[0xc] = 0;
    local_b8[0xd] = 0;
    local_b8[0xe] = 0;
    local_b8[0xf] = 0;
    local_b8[0x10] = 0;
    local_b8[0x11] = 0;
    local_b8[0x12] = 0;
    local_b8[0x13] = 0;
    local_b8[0x14] = 0;
    local_b8[0x15] = 0;
    local_b8[0x16] = 0;
    local_b8[0x17] = 0;
    local_b8[0x18] = 0;
    local_b8[0x19] = 0;
    local_b8[0x1a] = 0;
    local_b8[0x1b] = 0;
    local_b8[0x1c] = 0;
    local_b8[0x1d] = 0;
    local_b8[0x1e] = 0;
    local_b8[0x1f] = 0;
    iVar3 = ___darwin_check_fd_set_overflow(param_1,local_b8,0);
    if (iVar3 != 0) {
      local_b8[(ulong)(long)iVar5 >> 5] =
           local_b8[(ulong)(long)iVar5 >> 5] | 1 << ((byte)param_1 & 0x1f);
    }
    local_30 = (long)param_2;
    local_28 = param_3;
    sVar2 = _select_1050(iVar5 + 1,local_b8,0,0);
    ___darwin_check_fd_set_overflow(param_1 & 0xffffffff,local_b8,0);
  }
  return (int)sVar2;
}

