// name: FUN_1001757f8
// address: 1001757f8

int * FUN_1001757f8(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0x63687064) {
      param_1[1] = param_1[1] + 1;
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100681c98(uVar2);
      }
      FUN_1001782e9(0,0);
    }
  }
  return param_1;
}

