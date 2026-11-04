// name: FUN_10019078a
// address: 10019078a

bool FUN_10019078a(long param_1)

{
  int iVar1;
  
  iVar1 = _access((char *)(param_1 + 0x19),((*(ushort *)(param_1 + 4) & 2) >> 1) * 5 + 2);
  return iVar1 == 0;
}

