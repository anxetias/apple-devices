// name: FUN_1001c2d56
// address: 1001c2d56

void FUN_1001c2d56(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a69b9(uVar3);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar4 = (long *)param_2[1];
      if (((long *)param_2[1] == (long *)0x0) && (plVar4 = param_1, (long *)*param_1 != param_2)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          FUN_1006a6857(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      lVar1 = *param_2;
      *plVar4 = lVar1;
      if (lVar1 == 0) {
        if ((long *)param_1[1] != param_2) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            FUN_1006a68cd(uVar3);
          }
          FUN_1001782e9(0,0);
        }
        param_1[1] = param_2[1];
      }
      else {
        *(long *)(lVar1 + 8) = param_2[1];
      }
      *param_2 = 0;
      param_2[1] = 0;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a6943(uVar3);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

