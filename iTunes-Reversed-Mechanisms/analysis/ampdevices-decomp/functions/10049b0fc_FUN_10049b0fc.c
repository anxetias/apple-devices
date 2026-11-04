// name: FUN_10049b0fc
// address: 10049b0fc

uint FUN_10049b0fc(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0x11) != '\x01') {
    if (*(char *)(param_2 + 0x11) != '\x01') {
      if (*(uint *)(param_2 + 0x90) <= *(uint *)(param_1 + 0x90)) {
        if (*(uint *)(param_2 + 0x90) < *(uint *)(param_1 + 0x90)) {
          return 0xffffffff;
        }
        if (*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x18)) {
          return 0xffffffff;
        }
        if (*(uint *)(param_1 + 0x18) != *(uint *)(param_2 + 0x18)) {
          return 1;
        }
        return -(uint)(param_1 < param_2) | 1;
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

