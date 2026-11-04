// name: FUN_1001d2d5d
// address: 1001d2d5d

int FUN_1001d2d5d(char *param_1,char *param_2,ulong param_3,sqlite3 **param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_4 == (sqlite3 **)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2e71(uVar3);
    }
    FUN_1001782e9(0,0);
    return -0x32;
  }
  *param_4 = (sqlite3 *)0x0;
  uVar2 = _sqlite3_open_v2(param_1,param_4,(uint)((param_3 & 4) == 0) * 5 + 0x10001,param_2);
  if (uVar2 != 0xffffff80) {
    if (uVar2 == 0) {
      if ((param_3 & 1) != 0) {
        uVar2 = _sqlite3_exec(*param_4,"PRAGMA encoding = \'UTF-16\'",(callback *)0x0,(void *)0x0,
                              (char **)0x0);
        if (uVar2 == 0xffffff80) goto LAB_1001d2e9b;
        if (uVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            FUN_1006b2d2d(uVar2,uVar3);
          }
          goto LAB_1001d2e7e;
        }
      }
      if ((param_3 & 2) == 0) {
        return 0;
      }
      uVar2 = _sqlite3_exec(*param_4,"PRAGMA locking_mode = EXCLUSIVE",(callback *)0x0,(void *)0x0,
                            (char **)0x0);
      if ((uVar2 != 0xffffff80) && (uVar2 != 0)) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b2d99(uVar2,uVar3);
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b2e05(uVar2,uVar3);
      }
    }
LAB_1001d2e7e:
    if (uVar2 - 100 < 2) {
      return 0;
    }
    if (uVar2 == 0) {
      return 0;
    }
    iVar4 = -0x80;
    if (uVar2 == 4) goto LAB_1001d2ea6;
  }
LAB_1001d2e9b:
  iVar4 = (uVar2 & 0xff) + 13000;
LAB_1001d2ea6:
  if (*param_4 != (sqlite3 *)0x0) {
    _sqlite3_close(*param_4);
    *param_4 = (sqlite3 *)0x0;
  }
  return iVar4;
}

