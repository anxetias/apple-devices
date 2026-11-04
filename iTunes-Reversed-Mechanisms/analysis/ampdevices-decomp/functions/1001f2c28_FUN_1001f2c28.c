// name: FUN_1001f2c28
// address: 1001f2c28

int FUN_1001f2c28(int *param_1,long param_2,long param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong in_RAX;
  undefined8 uVar4;
  uint uVar5;
  ulong local_38;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c6b15(uVar4);
    }
  }
  else {
    if (param_3 != 0) {
      local_38 = in_RAX;
      iVar3 = FUN_1001f316f(param_1,param_4);
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 == '\0') {
          return iVar3;
        }
        FUN_1006c6817(iVar3,uVar4);
        return iVar3;
      }
      if (param_2 == 0) {
        uVar1 = param_1[1];
        if (uVar1 != 0) {
          uVar5 = 0x10;
          if (uVar1 < 0x10) {
            uVar5 = uVar1;
          }
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",uVar5,
                             *(undefined8 *)(param_1 + 0x12));
          if (iVar3 == -0x80) {
            return -0x80;
          }
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c68ef(iVar3,uVar4);
            return iVar3;
          }
        }
      }
      else {
        iVar3 = FUN_1001f25c0(param_1,param_2,0);
        if (iVar3 == -0x80) {
          return -0x80;
        }
        if (iVar3 != 0) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 == '\0') {
            return iVar3;
          }
          FUN_1006c6883(iVar3,uVar4);
          return iVar3;
        }
      }
      iVar3 = (**(code **)(param_1 + 0x10))(param_1,"<string>",8,*(undefined8 *)(param_1 + 0x12));
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_1001e73f2(param_3,param_4,*(undefined8 *)(param_1 + 6),param_1[8],&local_38);
        if (iVar3 == 0) {
          FUN_1001f21b4(*(undefined8 *)(param_1 + 6),local_38,*(undefined8 *)(param_1 + 10),
                        param_1[0xc],&local_38,0);
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,*(undefined8 *)(param_1 + 10),local_38 & 0xffffffff,
                             *(undefined8 *)(param_1 + 0x12));
          if (iVar3 == -0x80) {
            return -0x80;
          }
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c69c7(iVar3,uVar4);
            return iVar3;
          }
        }
        else {
          iVar3 = (**(code **)(param_1 + 0x10))
                            (param_1,"String conversion error",0x17,*(undefined8 *)(param_1 + 0x12))
          ;
          if (iVar3 == -0x80) {
            return -0x80;
          }
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 == '\0') {
              return iVar3;
            }
            FUN_1006c695b(iVar3,uVar4);
            return iVar3;
          }
        }
        iVar3 = (**(code **)(param_1 + 0x10))
                          (param_1,"</string>\n",10,*(undefined8 *)(param_1 + 0x12));
        return iVar3;
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 == '\0') {
        return iVar3;
      }
      FUN_1006c6a33(iVar3,uVar4);
      return iVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c6a9f(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

