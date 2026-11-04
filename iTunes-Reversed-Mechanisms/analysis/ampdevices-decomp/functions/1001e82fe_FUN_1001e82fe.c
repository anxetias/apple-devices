// name: FUN_1001e82fe
// address: 1001e82fe

int FUN_1001e82fe(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0a77(uVar3);
    }
  }
  else {
    if (*param_1 == 0x73656d61) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c08a9(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001c62d9(param_1,0x90);
    if (param_2 <= param_3) {
      if (((int)param_1 + 0x80U & 3) == 0) {
        iVar2 = FUN_1001ea0b9(param_1 + 2);
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 == 0) {
          param_1[0x20] = param_2;
          param_1[0x21] = param_3;
          *param_1 = 0x73656d61;
          return 0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c0995(iVar2,uVar3);
        return iVar2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c091f(uVar3);
      }
      uVar3 = 1;
      goto LAB_1001e83cb;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0a01(uVar3);
    }
  }
  uVar3 = 0;
LAB_1001e83cb:
  FUN_1001782e9(0,uVar3);
  return -0x32;
}

