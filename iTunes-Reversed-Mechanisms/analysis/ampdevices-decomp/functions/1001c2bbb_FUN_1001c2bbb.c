// name: FUN_1001c2bbb
// address: 1001c2bbb

void FUN_1001c2bbb(long *param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a667f(uVar3);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      lVar1 = *param_1;
      *param_2 = lVar1;
      param_2[1] = 0;
      if (lVar1 == 0) {
        plVar4 = param_1 + 1;
        if (param_1[1] != 0) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            FUN_1006a6593(uVar3);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        plVar4 = (long *)(lVar1 + 8);
      }
      *plVar4 = (long)param_2;
      *param_1 = (long)param_2;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006a6609(uVar3);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

