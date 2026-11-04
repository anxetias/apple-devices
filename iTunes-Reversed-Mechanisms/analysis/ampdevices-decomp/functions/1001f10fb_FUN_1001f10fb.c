// name: FUN_1001f10fb
// address: 1001f10fb

long FUN_1001f10fb(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = *(long *)(param_1 + 0x140), lVar1 != 0)) {
    return *(long *)(lVar1 + 0x130) + *(long *)(lVar1 + 0x78);
  }
  return 0;
}

