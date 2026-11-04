// name: FUN_10020df3c
// address: 10020df3c

int FUN_10020df3c(undefined8 param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  iVar1 = FUN_1001fbb12();
  if (iVar1 == 0) {
    pcVar2 = _strrchr(param_2,0x2f);
    pcVar3 = pcVar2 + 1;
    if (pcVar2 == (char *)0x0) {
      pcVar3 = param_2;
    }
    iVar1 = FUN_10016614c(0,param_3,pcVar3,0,1);
  }
  FUN_10017060f(0);
  return iVar1;
}

