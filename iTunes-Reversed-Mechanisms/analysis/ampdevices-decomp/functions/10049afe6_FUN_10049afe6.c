// name: FUN_10049afe6
// address: 10049afe6

uint FUN_10049afe6(ulong param_1,ulong param_2)

{
  if (*(char *)(param_1 + 0x11) == '\x01') {
    return 0xffffffff;
  }
  if (*(char *)(param_2 + 0x11) != '\x01') {
    if (*(uint *)(param_1 + 0xbc) < *(uint *)(param_2 + 0xbc)) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 0xbc) <= *(uint *)(param_2 + 0xbc)) {
      if (*(uint *)(param_1 + 0x18) < *(uint *)(param_2 + 0x18)) {
        return 0xffffffff;
      }
      if (*(uint *)(param_1 + 0x18) != *(uint *)(param_2 + 0x18)) {
        return 1;
      }
      return -(uint)(param_1 < param_2) | 1;
    }
  }
  return 1;
}

