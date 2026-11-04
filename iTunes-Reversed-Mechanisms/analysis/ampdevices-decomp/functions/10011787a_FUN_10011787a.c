// name: FUN_10011787a
// address: 10011787a

undefined8 FUN_10011787a(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *(long *)(param_1 + 0x1ccf8);
  if (lVar2 != 0) {
    if (*(int *)(*(long *)(param_1 + 0xc258) + 0x5a0) != 0) {
      uVar3 = 0;
      do {
        _memcpy(*(void **)(param_1 + 0x1cc90 + uVar3 * 8),*(void **)(param_2 + uVar3 * 8),
                (ulong)(uint)(*(int *)(param_1 + 0x1cd04) << 2));
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(*(long *)(param_1 + 0xc258) + 0x5a0));
      lVar2 = *(long *)(param_1 + 0x1ccf8);
    }
    iVar1 = FUN_10010905a(lVar2,param_1 + 0x1cc90,param_2,*(undefined4 *)(param_1 + 0x1cd04));
    if (iVar1 != 0) {
      return 0xfffffffa;
    }
  }
  return 0;
}

