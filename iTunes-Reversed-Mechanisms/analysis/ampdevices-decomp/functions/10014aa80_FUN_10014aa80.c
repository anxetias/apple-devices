// name: FUN_10014aa80
// address: 10014aa80

undefined1 FUN_10014aa80(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar1 < *(ulong *)(param_1 + 0x18)) {
    FUN_10014bef6(uVar1);
    lVar2 = uVar1 + 0x10;
    *(long *)(param_1 + 0x10) = lVar2;
  }
  else {
    lVar2 = FUN_10014be00(param_1 + 8);
  }
  *(long *)(param_1 + 0x10) = lVar2;
  return 1;
}

