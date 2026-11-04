// name: FUN_1001f2eee
// address: 1001f2eee

int FUN_1001f2eee(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  ulong in_RAX;
  undefined8 uVar3;
  ulong local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6e93(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6e1d(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      local_38 = in_RAX;
      iVar2 = FUN_1001f316f(param_1,param_4);
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c6b8b(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001f25c0(param_1,param_2,0);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c6d3b(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = (**(code **)(param_1 + 0x10))(param_1,"<string>",8,*(undefined8 *)(param_1 + 0x12));
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c6ccf(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001e7ff9(param_3,param_4,*(undefined8 *)(param_1 + 6),param_1[8],&local_38);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        FUN_1001f21b4(*(undefined8 *)(param_1 + 6),local_38,*(undefined8 *)(param_1 + 10),
                      param_1[0xc],&local_38,0);
        iVar2 = (**(code **)(param_1 + 0x10))
                          (param_1,*(undefined8 *)(param_1 + 10),local_38 & 0xffffffff,
                           *(undefined8 *)(param_1 + 0x12));
        if (iVar2 == -0x80) {
          return -0x80;
        }
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_1 + 0x10))
                            (param_1,"</string>\n",10,*(undefined8 *)(param_1 + 0x12));
          return iVar2;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c6bf7(iVar2,uVar3);
        return iVar2;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006c6c63(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c6da7(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

