// name: FUN_100628b72
// address: 100628b72

undefined8 FUN_100628b72(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1040);
  *(int *)(param_1 + 0x1040) = iVar1 + -1;
  if (1 < iVar1) {
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = FUN_1001d3677();
    return uVar2;
  }
  uVar2 = FUN_1001d3605(*(undefined8 *)(param_1 + 0x68));
  return uVar2;
}

