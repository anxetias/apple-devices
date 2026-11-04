// name: FUN_1004e135b
// address: 1004e135b

bool FUN_1004e135b(long param_1)

{
  char cVar1;
  bool bVar2;
  
  if ((*(char *)(param_1 + 0x6aec) == '\0') && (*(char *)(DAT_1008c76a0 + 0x1a91) == '\0')) {
    cVar1 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
    bVar2 = cVar1 == '\0';
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}

