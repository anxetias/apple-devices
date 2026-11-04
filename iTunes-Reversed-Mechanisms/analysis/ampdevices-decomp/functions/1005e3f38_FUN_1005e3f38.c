// name: FUN_1005e3f38
// address: 1005e3f38

undefined8 FUN_1005e3f38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x88) == '\x02') {
    for (lVar1 = *(long *)(param_1 + 200); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x48)) {
      if ((*(uint *)(lVar1 + 0xc2) & 0x10000100) == 0x10000000) {
        if (*(int *)(param_1 + 0x84) == 0) {
          return CONCAT71((int7)((ulong)lVar1 >> 8),1);
        }
        uVar2 = FUN_1005e3f86();
        return uVar2;
      }
    }
  }
  return 0;
}

