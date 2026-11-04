// name: FUN_100359045
// address: 100359045

int FUN_100359045(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 == '\0') {
    iVar3 = FUN_1003590ea(param_1,param_2,param_3,param_5);
    iVar3 = (uint)(iVar3 != -0x80) * 0x80 + -0x80;
  }
  else {
    cVar1 = FUN_100537081(param_1);
    iVar3 = -0x57f;
    if (cVar1 == '\0') {
      cVar1 = FUN_100358e4d(param_1,param_2,param_3);
      if (cVar1 == '\0') {
        cVar1 = FUN_10018e085(param_1,0,0);
        iVar3 = -0x57f;
        if (cVar1 == '\0') {
          iVar3 = 0;
        }
      }
      else {
        iVar2 = FUN_1003590ea(param_1,param_2,param_3,param_5);
        iVar3 = -0x57f;
        if (iVar2 == -0x80) {
          iVar3 = -0x80;
        }
      }
    }
  }
  return iVar3;
}

