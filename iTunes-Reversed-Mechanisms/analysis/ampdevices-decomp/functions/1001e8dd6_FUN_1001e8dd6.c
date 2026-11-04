// name: FUN_1001e8dd6
// address: 1001e8dd6

int FUN_1001e8dd6(int *param_1,int param_2,undefined *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_1 == (int *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1605(uVar3);
    }
    uVar3 = 0;
  }
  else {
    if (*param_1 == 0x6c636d70) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c14ad(uVar3);
      }
      FUN_1001782e9(0,0);
    }
    if (((int)param_1 + 8U & 3) == 0) {
      FUN_1001c62d9(param_1,0x20);
      param_1[1] = param_2;
      puVar4 = &DAT_10088f670;
      if (param_3 != (undefined *)0x0) {
        puVar4 = param_3;
      }
      iVar2 = FUN_1001e8acb(puVar4,param_1 + 4);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        *(undefined **)(param_1 + 6) = param_3;
        *param_1 = 0x6c636d70;
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006c1599(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1523(uVar3);
    }
    uVar3 = 1;
  }
  FUN_1001782e9(0,uVar3);
  return -0x32;
}

