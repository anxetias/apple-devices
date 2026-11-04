// name: FUN_1001ef958
// address: 1001ef958

int FUN_1001ef958(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  char cVar5;
  
  if (param_3 == 1) {
    iVar3 = _strcmp(param_1,param_2);
    return iVar3;
  }
  lVar4 = 0;
  while( true ) {
    cVar1 = param_1[lVar4];
    cVar5 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar5 = cVar1;
    }
    cVar1 = param_2[lVar4];
    cVar2 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar2 = cVar1;
    }
    if (cVar5 == '\0') {
      return -(uint)(cVar2 != '\0');
    }
    if (cVar2 == '\0') {
      return 1;
    }
    if (cVar5 < cVar2) break;
    lVar4 = lVar4 + 1;
    if (cVar2 < cVar5) {
      return 1;
    }
  }
  return -1;
}

