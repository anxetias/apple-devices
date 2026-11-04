// name: FUN_1001ea897
// address: 1001ea897

void FUN_1001ea897(undefined8 *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c304a(uVar2);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      *param_1 = 0;
      if (*param_2 == 0) {
        if (param_2[1] != 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            FUN_1006c2f5e(uVar2);
          }
          FUN_1001782e9(0,0);
        }
        *param_2 = (long)param_1;
      }
      else {
        if (param_2[1] == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            FUN_1006c2ee8(uVar2);
          }
          FUN_1001782e9(0,0);
        }
        if (param_2[1] != 0) {
          *(undefined8 **)param_2[1] = param_1;
        }
      }
      param_2[1] = (long)param_1;
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c2fd4(uVar2);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

