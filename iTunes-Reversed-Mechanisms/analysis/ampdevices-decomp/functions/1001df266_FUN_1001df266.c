// name: FUN_1001df266
// address: 1001df266

size_t FUN_1001df266(long param_1,long param_2,char *param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 == 0 || param_3 == (char *)0x0) {
    return 0;
  }
  if ((param_1 == 0) || (sVar2 = param_4 - 1, sVar2 == 0)) {
    sVar2 = _strlen(param_3);
    return sVar2;
  }
  lVar3 = 0;
  while (*param_3 != '\0') {
    param_3 = param_3 + 1;
    lVar3 = lVar3 + -1;
    if (1 - param_4 == lVar3) {
      return sVar2;
    }
  }
  lVar4 = 0;
  do {
    if (param_2 == lVar4) {
      sVar2 = lVar4 - lVar3;
      break;
    }
    param_3[lVar4] = *(char *)(param_1 + lVar4);
    lVar1 = lVar4 - param_4;
    lVar4 = lVar4 + 1;
  } while (lVar1 + 2 != lVar3);
  param_3[lVar4] = '\0';
  return sVar2;
}

