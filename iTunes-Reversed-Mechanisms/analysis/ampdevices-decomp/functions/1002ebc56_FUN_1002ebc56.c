// name: FUN_1002ebc56
// address: 1002ebc56

void FUN_1002ebc56(long param_1,byte param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x49) = *(byte *)(lVar1 + 0x48) & param_2;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x49) = *(byte *)(lVar1 + 0x48) & param_2;
  }
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x49) = *(byte *)(lVar1 + 0x48) & param_2;
  }
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x49) = param_2 & *(byte *)(lVar1 + 0x48);
  }
  return;
}

