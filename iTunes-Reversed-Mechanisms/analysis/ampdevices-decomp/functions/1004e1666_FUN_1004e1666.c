// name: FUN_1004e1666
// address: 1004e1666

bool FUN_1004e1666(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if (((*(char *)(param_1 + 0x6aeb) == '\0') && (*(char *)(param_1 + 0x6aec) == '\0')) &&
     (*(char *)(param_1 + 0x6afb) == '\0')) {
    cVar1 = FUN_100505aa2();
    bVar2 = cVar1 != '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

