// name: FUN_1001b37a0
// address: 1001b37a0

long FUN_1001b37a0(long param_1)

{
  long lVar1;
  
  if (((*(long *)(param_1 + 0x48) != 0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (*(int *)(param_1 + 0x54) != 0)) {
    _CGImageGetWidth();
    lVar1 = _CGImageGetHeight(*(undefined8 *)(param_1 + 0x48));
    return lVar1 * (ulong)*(uint *)(param_1 + 0x54) * -0x1c71c71c71c71c71;
  }
  lVar1 = FUN_1001b31f0(param_1);
  return lVar1;
}

