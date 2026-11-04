// name: FUN_1001ea9a5
// address: 1001ea9a5

undefined8 FUN_1001ea9a5(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_1 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c3222(uVar5);
    }
  }
  else {
    if (param_2 != (long *)0x0) {
      plVar1 = (long *)*param_2;
      if (plVar1 == (long *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006c3136(uVar5);
        }
      }
      else {
        if (plVar1 == param_1) {
          lVar2 = *param_1;
          *param_2 = lVar2;
          if (lVar2 == 0) {
            param_2[1] = 0;
            return 0;
          }
          return 0;
        }
        while( true ) {
          plVar4 = plVar1;
          if (plVar4 == (long *)param_2[1]) {
            return 0xffffffff;
          }
          plVar1 = (long *)*plVar4;
          if (plVar1 == (long *)0x0) break;
          if (plVar1 == param_1) {
            *plVar4 = *param_1;
            if ((long *)param_2[1] == param_1) {
              param_2[1] = (long)plVar4;
              return 0;
            }
            return 0;
          }
        }
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          FUN_1006c30c0(uVar5);
        }
      }
      FUN_1001782e9(0,0);
      return 0xffffffce;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c31ac(uVar5);
    }
  }
  FUN_1001782e9(0,1);
  return 0xffffffff;
}

