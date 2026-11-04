// name: FUN_1001c7749
// address: 1001c7749

void FUN_1001c7749(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((long *)*param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa150(uVar3);
    }
  }
  else if (*param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa0da(uVar3);
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      plVar4 = (long *)param_3[1];
      if (((long *)param_3[1] == (long *)0x0) && (plVar4 = param_1, (long *)*param_1 != param_3)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a9f78(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      lVar1 = *param_3;
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        if ((long *)*param_2 != param_3) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            FUN_1006a9fee(uVar3);
          }
          FUN_1001782e9(0,0);
        }
        *param_2 = param_3[1];
      }
      else {
        *(long *)(lVar1 + 8) = param_3[1];
      }
      *param_3 = 0;
      param_3[1] = 0;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006aa064(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

