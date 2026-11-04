// name: FUN_1001c7a1a
// address: 1001c7a1a

void FUN_1001c7a1a(long *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (param_3 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006aa576(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_3 != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006aa414(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    if (param_3[1] != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006aa48a(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    *param_3 = 0;
    plVar3 = (long *)*param_2;
    param_3[1] = (long)plVar3;
    if ((plVar3 == (long *)0x0) && (plVar3 = param_1, *param_1 != 0)) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006aa500(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    *plVar3 = (long)param_3;
    *param_2 = param_3;
  }
  return;
}

