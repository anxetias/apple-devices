// name: FUN_100249f90
// address: 100249f90

int * FUN_100249f90(int *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (iVar2 == 0x73766d64) {
    cVar1 = FUN_100168311(*(undefined8 *)(param_1 + 2));
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar2 = *param_1;
  }
  if ((iVar2 != 0x73766970) || (*(char *)((long)param_1 + 0xb) == '\0')) {
    param_1 = (int *)0x0;
  }
  return param_1;
}

