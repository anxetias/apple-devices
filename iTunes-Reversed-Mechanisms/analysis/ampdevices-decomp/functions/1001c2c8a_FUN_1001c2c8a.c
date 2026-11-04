// name: FUN_1001c2c8a
// address: 1001c2c8a

void FUN_1001c2c8a(long *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a67e1(uVar2);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
      plVar3 = (long *)param_1[1];
      param_2[1] = plVar3;
      if ((plVar3 == (long *)0x0) && (plVar3 = param_1, *param_1 != 0)) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006a66f5(uVar2);
        }
        FUN_1001782e9(0,0);
      }
      *plVar3 = (long)param_2;
      param_1[1] = (long)param_2;
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a676b(uVar2);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

