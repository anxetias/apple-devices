// name: FUN_1005cec66
// address: 1005cec66

void FUN_1005cec66(long param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1001ee056();
  if (cVar1 != '\0') {
    while( true ) {
      iVar2 = FUN_1001e9e65(param_1 + 0x180);
      if (iVar2 == 0) break;
      FUN_1001b153d();
    }
    return;
  }
  FUN_1001e9de0(param_1 + 0x180);
  return;
}

