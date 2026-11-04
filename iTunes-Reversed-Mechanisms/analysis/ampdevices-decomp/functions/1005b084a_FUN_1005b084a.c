// name: FUN_1005b084a
// address: 1005b084a

int FUN_1005b084a(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  FUN_1001b1464();
  iVar2 = -0x80;
  if (*(char *)(lVar1 + 9) == '\0') {
    iVar2 = (uint)(*(char *)(lVar1 + 0x7d) == '\0') * 0x80 + -0x80;
  }
  return iVar2;
}

