// name: FUN_10059319a
// address: 10059319a

ulong FUN_10059319a(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_2 + 8);
  if (*(ulong *)(lVar2 + 0x48) <= *(ulong *)(lVar1 + 0x48)) {
    if (*(ulong *)(lVar2 + 0x48) < *(ulong *)(lVar1 + 0x48)) {
      return 1;
    }
    if (*(int *)(lVar2 + 0x44) <= *(int *)(lVar1 + 0x44)) {
      if (*(int *)(lVar2 + 0x44) < *(int *)(lVar1 + 0x44)) {
        return 1;
      }
      if (*(uint *)(lVar2 + 0x38) <= *(uint *)(lVar1 + 0x38)) {
        if (*(uint *)(lVar1 + 0x38) != *(uint *)(lVar2 + 0x38)) {
          return 1;
        }
        if (param_1 < param_2) {
          return 0xffffffff;
        }
        return (ulong)(param_2 < param_1);
      }
    }
  }
  return 0xffffffff;
}

