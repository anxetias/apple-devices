// name: FUN_1001cad10
// address: 1001cad10

int FUN_1001cad10(long param_1,int param_2,undefined1 *param_3,long param_4,int param_5,int *param_6
                 )

{
  uint uVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006ad886(uVar6);
    }
  }
  else if (param_3 == (undefined1 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006ad810(uVar6);
    }
  }
  else if (param_4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006ad79a(uVar6);
    }
  }
  else if (param_6 == (int *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006ad724(uVar6);
    }
  }
  else {
    *param_6 = 0;
    iVar4 = FUN_1001ca907();
    if (iVar4 != 0) {
      return iVar4;
    }
    plVar5 = *(long **)(param_1 + 0x10);
    if (plVar5 != (long *)0x0) {
      iVar4 = 1;
      do {
        puVar2 = (uint *)plVar5[4];
        if (puVar2[1] == 0x61746164) {
          if (iVar4 == param_2) {
            *param_3 = *(undefined1 *)((long)puVar2 + 0xb);
            uVar1 = *puVar2;
            uVar7 = (long)(int)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                               uVar1 << 0x18) - 0x10;
            if ((ulong)(long)param_5 <= uVar7) {
              uVar7 = (long)param_5;
            }
            iVar4 = (int)uVar7;
            if (iVar4 == 0) {
              return 0;
            }
            FUN_1001c631b(plVar5[4] + 0x10,param_4,(long)iVar4);
            *param_6 = iVar4;
            return 0;
          }
          iVar4 = iVar4 + 1;
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      FUN_1006ad6ae(uVar6);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

