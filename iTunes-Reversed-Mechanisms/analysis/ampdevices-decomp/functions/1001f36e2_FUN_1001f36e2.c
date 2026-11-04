// name: FUN_1001f36e2
// address: 1001f36e2

int FUN_1001f36e2(int *param_1,long param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c778f(uVar4);
    }
  }
  else if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7719(uVar4);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1001737f8(param_3);
      iVar3 = FUN_1001f316f(param_1,uVar2);
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 == '\0') {
          return iVar3;
        }
        FUN_1006c75cb(iVar3,uVar4);
        return iVar3;
      }
      iVar3 = FUN_1001e5ca8(param_3,*(undefined8 *)(param_1 + 2),(uint)param_1[4] >> 1,&local_2c);
      if (iVar3 == -0x80) {
        return -0x80;
      }
      if (iVar3 == 0) {
        iVar3 = FUN_1001f2c28(param_1,param_2,*(undefined8 *)(param_1 + 2),local_2c);
        return iVar3;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 == '\0') {
        return iVar3;
      }
      FUN_1006c7637(iVar3,uVar4);
      return iVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c76a3(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

