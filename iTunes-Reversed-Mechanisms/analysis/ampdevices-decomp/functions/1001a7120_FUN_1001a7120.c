// name: FUN_1001a7120
// address: 1001a7120

FILE * FUN_1001a7120(undefined8 param_1,char *param_2,uint param_3)

{
  char *pcVar1;
  FILE *pFVar2;
  char cVar3;
  uint uVar4;
  
  cVar3 = '\x01';
  if ((param_3 & 3) == 1) {
    pcVar1 = "rb";
  }
  else if ((param_3 & 4) == 0) {
    pcVar1 = (char *)0x0;
    uVar4 = param_3 >> 3 & 1;
    cVar3 = (char)uVar4;
    if (uVar4 != 0) {
      pcVar1 = "wb";
    }
  }
  else {
    pcVar1 = "r+b";
  }
  if (cVar3 != '\x01' || param_2 == (char *)0x0) {
    return (FILE *)0x0;
  }
  pFVar2 = _fopen(param_2,pcVar1);
  return pFVar2;
}

