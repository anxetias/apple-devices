// name: FUN_1001db5f7
// address: 1001db5f7

void FUN_1001db5f7(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(lVar1 + 0x30) = 0x52436d70;
  FUN_1001eac02(lVar1 + 0x20,lVar2 + 0x998);
  FUN_1001d4365(lVar2);
  return;
}

