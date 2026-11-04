// name: FUN_1001e96d3
// address: 1001e96d3

undefined8 FUN_1001e96d3(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1d33(uVar3);
    }
    uVar3 = 0;
  }
  else {
    if (*param_1 == 0x63636d70) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c1bd1(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    if (((int)param_1 + 8U & 3) == 0) {
      FUN_1001c62d9(param_1,0x10);
      if (param_3 == 0) {
        iVar2 = FUN_1001b19b0();
        param_1[3] = iVar2;
        if (iVar2 == 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006c1cbd(uVar3);
          }
          FUN_1001782e9(0,0);
          return 0xfffffd96;
        }
      }
      else {
        param_1[3] = param_3;
      }
      *param_1 = 0x63636d70;
      param_1[1] = param_2;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1c47(uVar3);
    }
    uVar3 = 1;
  }
  FUN_1001782e9(0,uVar3);
  return 0xffffffce;
}

