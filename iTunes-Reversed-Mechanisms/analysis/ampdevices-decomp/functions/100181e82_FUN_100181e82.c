// name: FUN_100181e82
// address: 100181e82

int FUN_100181e82(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006895ca(uVar2);
    }
    iVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = param_1[2];
    if (iVar3 == 0) {
      if (*param_1 == 0x504f5358) {
        param_1[2] = 1;
        iVar3 = 1;
      }
      else if (*param_1 == 0x41464350) {
        param_1[2] = 2;
        iVar3 = 2;
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_100689554(uVar2);
        }
        FUN_1001782e9(0,0);
        iVar3 = param_1[2];
      }
    }
  }
  return iVar3;
}

