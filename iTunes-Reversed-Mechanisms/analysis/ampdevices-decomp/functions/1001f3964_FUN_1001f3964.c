// name: FUN_1001f3964
// address: 1001f3964

int FUN_1001f3964(int *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x786d6c65)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7aa1(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      iVar2 = FUN_1001f25c0(param_1,param_2,1);
      if (iVar2 == -0x80) {
        return -0x80;
      }
      if (iVar2 != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 == '\0') {
          return iVar2;
        }
        FUN_1006c79bf(iVar2,uVar3);
        return iVar2;
      }
      iVar2 = FUN_1001f3cf3(param_1,"<array>");
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
      FUN_1006c7953(iVar2,uVar3);
      return iVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c7a2b(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

