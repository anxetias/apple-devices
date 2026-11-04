// name: FUN_100628b36
// address: 100628b36

undefined8 FUN_100628b36(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1040);
  if (iVar1 == 0) {
    uVar2 = FUN_1001d357f(*(undefined8 *)(param_1 + 0x68));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    iVar1 = *(int *)(param_1 + 0x1040);
  }
  *(int *)(param_1 + 0x1040) = iVar1 + 1;
  return 0;
}

