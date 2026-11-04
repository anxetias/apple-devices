// name: FUN_1001e89de
// address: 1001e89de

int FUN_1001e89de(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) || (param_1[2] != 0x636f6e64)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c11fd(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    piVar1 = param_1 + 2;
    iVar3 = FUN_1001ea458(piVar1);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        iVar3 = -0x726f;
        if ((char)param_1[0x23] == '\0') {
          if ((uint)param_1[0x20] < (uint)param_1[0x21]) {
            param_1[0x20] = param_1[0x20] + 1;
          }
          if (param_1[0x22] == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_1001ea29d(piVar1);
          }
        }
        FUN_1001ea4ac(piVar1);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006c1191(iVar3,uVar4);
        }
      }
    }
  }
  return iVar3;
}

