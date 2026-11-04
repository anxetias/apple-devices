// name: FUN_1001e8470
// address: 1001e8470

int FUN_1001e8470(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) || (param_1[2] != 0x636f6e64)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c0c3b(uVar5);
    }
  }
  else {
    piVar1 = param_1 + 2;
    iVar4 = FUN_1001ea458(piVar1);
    if (iVar4 == -0x80) {
      return -0x80;
    }
    if (iVar4 != 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 == '\0') {
        return iVar4;
      }
      FUN_1006c0bcf(iVar4,uVar5);
      return iVar4;
    }
    if ((char)param_1[0x23] == '\0') {
      *(undefined1 *)(param_1 + 0x23) = 1;
      FUN_1001ea4ac(piVar1);
      if (param_1[0x22] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1001ea2f1(piVar1);
        if (iVar4 == 0) {
          while (iVar4 = FUN_1001ea458(piVar1), iVar4 == 0) {
            iVar2 = param_1[0x22];
            FUN_1001ea4ac(piVar1);
            if (iVar2 == 0) goto LAB_1001e85c9;
            _sched_yield();
          }
          if (iVar4 != -0x80) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              FUN_1006c0b63(iVar4,uVar5);
            }
          }
        }
      }
LAB_1001e85c9:
      FUN_1001ea1df(piVar1);
      FUN_1001c62d9(param_1,0x90);
      return iVar4;
    }
    FUN_1001ea4ac(piVar1);
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006c0aed(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

