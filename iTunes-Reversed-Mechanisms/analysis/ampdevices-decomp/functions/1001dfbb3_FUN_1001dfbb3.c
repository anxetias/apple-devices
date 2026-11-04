// name: FUN_1001dfbb3
// address: 1001dfbb3

long FUN_1001dfbb3(char *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  
  if (param_3 == 0 || param_1 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_1;
  if (param_3 == 1 || cVar2 == '\0') {
    lVar1 = 0;
  }
  else {
    lVar3 = 0;
    do {
      param_2[lVar3] = cVar2;
      lVar1 = lVar3 + 1;
      cVar2 = param_1[lVar3 + 1];
      if (cVar2 == '\0') break;
      bVar4 = param_3 + -2 != lVar3;
      lVar3 = lVar1;
    } while (bVar4);
    param_2 = param_2 + lVar1;
  }
  *param_2 = 0;
  return lVar1;
}

