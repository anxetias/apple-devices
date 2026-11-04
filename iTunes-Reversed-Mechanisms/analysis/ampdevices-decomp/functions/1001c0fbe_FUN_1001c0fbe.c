// name: FUN_1001c0fbe
// address: 1001c0fbe

int FUN_1001c0fbe(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a4f5b(uVar3);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001e9de0(&DAT_1008a2120);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = 1;
        lVar4 = 0x58;
        do {
          if ((*(long *)((long)&DAT_10089fb38 + lVar4) == 0) &&
             (*(long *)(&DAT_10089fb68 + lVar4) == 0)) {
            *(int *)((long)&DAT_10089fb78 + lVar4) = iVar2;
            *(long *)((long)&DAT_10089fb38 + lVar4) = param_1;
            *(undefined8 *)((long)&DAT_10089fb80 + lVar4) = param_2;
            *(undefined8 *)((long)&DAT_10089fb88 + lVar4) = param_3;
            *(undefined8 *)((long)&DAT_10089fb90 + lVar4) = param_4;
            FUN_1001e9eb9(&DAT_1008a2120);
            if (param_5 == (undefined4 *)0x0) {
              return 0;
            }
            *param_5 = *(undefined4 *)((long)&DAT_10089fb78 + lVar4);
            return 0;
          }
          iVar2 = iVar2 + 1;
          lVar4 = lVar4 + 0x60;
        } while (lVar4 != 0x25d8);
        FUN_1001e9eb9(&DAT_1008a2120);
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a4e79(uVar3);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006a4eef(iVar2,uVar3);
        }
      }
    }
  }
  return iVar2;
}

