// name: FUN_1001c261d
// address: 1001c261d

void FUN_1001c261d(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a6081(uVar3);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      if (param_3 == 0) {
        *param_2 = *param_1;
      }
      else {
        plVar4 = param_1;
        plVar1 = (undefined8 *)0x0;
        do {
          puVar5 = plVar1;
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) {
            return;
          }
          plVar1 = plVar4;
        } while (plVar4 != (long *)param_3);
        *param_2 = param_3;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = param_2;
          return;
        }
      }
      *param_1 = (long)param_2;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a600b(uVar3);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

