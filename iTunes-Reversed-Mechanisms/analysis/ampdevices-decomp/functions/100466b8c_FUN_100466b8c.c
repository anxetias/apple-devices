// name: FUN_100466b8c
// address: 100466b8c

int * FUN_100466b8c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_1 == (int *)0x0 || param_3 == 0) {
    return (int *)0x0;
  }
  piVar1 = (int *)0x0;
  do {
    if ((*param_1 == 0) && (param_1[1] == 0)) {
      return piVar1;
    }
    if (*param_1 == param_3) {
      if ((param_2 == 0) || (param_1[1] == param_2)) {
        return param_1;
      }
      if (piVar1 == (int *)0x0) {
        piVar1 = param_1;
      }
    }
    param_1 = param_1 + 3;
  } while( true );
}

