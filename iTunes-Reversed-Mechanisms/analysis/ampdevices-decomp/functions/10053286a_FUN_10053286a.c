// name: FUN_10053286a
// address: 10053286a

undefined4 FUN_10053286a(long param_1)

{
  if (*(long *)(param_1 + 0x550) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x550) + 0x98);
  }
  return 0;
}

