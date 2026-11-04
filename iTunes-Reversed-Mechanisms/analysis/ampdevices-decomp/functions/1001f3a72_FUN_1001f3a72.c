// name: FUN_1001f3a72
// address: 1001f3a72

int FUN_1001f3a72(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7d47(uVar3);
    }
  }
  else {
    if ((char)param_1[0xe] == '\0') {
      if (param_1[1] != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006c7b8d(uVar3);
        }
        FUN_1001782e9(0,0);
      }
      *(undefined1 *)(param_1 + 0xe) = 1;
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n",0x27,
                         *(undefined8 *)(param_1 + 0x12));
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c7cdb(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,
                         "<!DOCTYPE plist PUBLIC \"-//Apple Computer//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n"
                         ,0x70,*(undefined8 *)(param_1 + 0x12));
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c7c6f(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = (**(code **)(param_1 + 0x10))
                        (param_1,"<plist version=\"1.0\">\n",0x16,*(undefined8 *)(param_1 + 0x12));
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006c7c03(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7b17(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

