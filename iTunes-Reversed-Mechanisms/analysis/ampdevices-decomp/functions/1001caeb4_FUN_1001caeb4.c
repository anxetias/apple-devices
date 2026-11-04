// name: FUN_1001caeb4
// address: 1001caeb4

int FUN_1001caeb4(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006adab6(uVar3);
    }
  }
  else {
    iVar2 = FUN_1001ca907();
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return iVar2;
      }
      FUN_1006ad8fc(iVar2,uVar3);
      return iVar2;
    }
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 != (long *)0x0) {
      iVar2 = 1;
      do {
        if (*(int *)(plVar4[4] + 4) == 0x61746164) {
          if (iVar2 == param_2) {
            iVar2 = FUN_10015d516(param_1,plVar4);
            if (iVar2 == -0x80) {
              return -0x80;
            }
            if (iVar2 != 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 == '\0') {
                return iVar2;
              }
              FUN_1006ad9d4(iVar2,uVar3);
              return iVar2;
            }
            iVar2 = FUN_10015ccc4(plVar4,1);
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
            FUN_1006ad968(iVar2,uVar3);
            return iVar2;
          }
          iVar2 = iVar2 + 1;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006ada40(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

