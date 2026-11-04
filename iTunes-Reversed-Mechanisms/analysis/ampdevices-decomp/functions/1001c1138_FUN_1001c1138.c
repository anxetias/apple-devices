// name: FUN_1001c1138
// address: 1001c1138

int FUN_1001c1138(long param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a50b3(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001e9de0(&DAT_1008a2120);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 1;
        lVar4 = 0;
        do {
          if ((*(long *)((long)&DAT_10089fb90 + lVar4) == 0) &&
             (*(long *)((long)&DAT_10089fbc0 + lVar4) == 0)) {
            *(int *)(lVar4 + 0x10089fbd0) = iVar2;
            FUN_1001c128c(lVar4 + 0x10089fba0,param_1);
            FUN_1001e9eb9(&DAT_1008a2120);
            if (param_2 == (undefined4 *)0x0) {
              return 0;
            }
            *param_2 = *(undefined4 *)(lVar4 + 0x10089fbd0);
            return 0;
          }
          iVar2 = iVar2 + 1;
          lVar4 = lVar4 + 0x60;
        } while (lVar4 != 0x2580);
        FUN_1001e9eb9(&DAT_1008a2120);
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a4fd1(uVar3);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a5047(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

