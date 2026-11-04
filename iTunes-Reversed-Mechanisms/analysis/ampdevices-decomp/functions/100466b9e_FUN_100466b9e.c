// name: FUN_100466b9e
// address: 100466b9e

int * FUN_100466b9e(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
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

