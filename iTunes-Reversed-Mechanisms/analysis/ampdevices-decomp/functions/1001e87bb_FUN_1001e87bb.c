// name: FUN_1001e87bb
// address: 1001e87bb

int FUN_1001e87bb(int *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((param_1 == (int *)0x0) || (*param_1 != 0x73656d61)) || (param_1[2] != 0x636f6e64)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c1039(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
  }
  else {
    param_1[0x22] = param_1[0x22] + 1;
    do {
      iVar2 = 0;
      if (((char)param_1[0x23] != '\0') || (param_1[0x20] != 0)) goto LAB_1001e88b8;
      iVar2 = FUN_1001ea3a0(param_1 + 2,param_2);
    } while (iVar2 == 0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0x3c) {
        iVar2 = 0x3c;
        if (param_2 < 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            FUN_1006c0f57(uVar4);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          FUN_1006c0fcd(iVar2,uVar4);
        }
      }
    }
LAB_1001e88b8:
    param_1[0x22] = param_1[0x22] + -1;
    iVar3 = -0x726f;
    if (((char)param_1[0x23] == '\0') && (iVar3 = iVar2, iVar2 == 0)) {
      if (param_1[0x20] == 0) {
        iVar3 = 0x3c;
      }
      else {
        param_1[0x20] = param_1[0x20] + -1;
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

