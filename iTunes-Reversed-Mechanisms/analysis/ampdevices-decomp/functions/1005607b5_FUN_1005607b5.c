// name: FUN_1005607b5
// address: 1005607b5

int * FUN_1005607b5(long param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  if ((param_3 != 0 || param_2 != 0) && (0 < *(int *)(param_1 + 8))) {
    piVar2 = *(int **)(param_1 + 0x10);
    if (piVar2 != (int *)0x0) {
      if (param_2 == 0) {
        return (int *)0x0;
      }
      piVar1 = (int *)0x0;
      for (; (*piVar2 != 0 || (piVar2[1] != 0)); piVar2 = piVar2 + 3) {
        if (*piVar2 == param_2) {
          if (param_3 == 0) {
            return piVar2;
          }
          if (piVar2[1] == param_3) {
            return piVar2;
          }
          if (piVar1 == (int *)0x0) {
            piVar1 = piVar2;
          }
        }
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
    }
    piVar2 = *(int **)(param_1 + 0x20);
    if (param_2 != 0 && piVar2 != (int *)0x0) {
      piVar1 = (int *)0x0;
      do {
        if ((*piVar2 == 0) && (piVar2[1] == 0)) {
          return piVar1;
        }
        if (*piVar2 == param_2) {
          if (param_3 == 0) {
            return piVar2;
          }
          if (piVar2[1] == param_3) {
            return piVar2;
          }
          if (piVar1 == (int *)0x0) {
            piVar1 = piVar2;
          }
        }
        piVar2 = piVar2 + 3;
      } while( true );
    }
  }
  return (int *)0x0;
}

