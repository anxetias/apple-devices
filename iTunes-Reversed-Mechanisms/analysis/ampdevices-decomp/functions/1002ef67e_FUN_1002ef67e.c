// name: FUN_1002ef67e
// address: 1002ef67e

undefined8 FUN_1002ef67e(long param_1,long param_2)

{
  if ((param_2 != 0) && ((ulong)*(uint *)(param_1 + 0x10) <= *(long *)(param_2 + 0x18) - 1U)) {
    return *(undefined8 *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_1 + 0x10) * 8);
  }
  return 0;
}

