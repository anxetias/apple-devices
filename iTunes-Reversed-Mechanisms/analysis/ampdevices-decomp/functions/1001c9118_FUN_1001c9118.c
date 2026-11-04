// name: FUN_1001c9118
// address: 1001c9118

int FUN_1001c9118(int *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006ab78c(uVar5);
    }
  }
  else {
    if (-1 < (int)param_2) {
      local_28 = in_RAX;
      if (*(long *)(param_1 + 0x10) != 0) {
        uVar1 = **(uint **)(*(long *)(param_1 + 0x10) + 0x20);
        if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
            param_2) {
          return 0;
        }
        iVar3 = FUN_10015d516(*(undefined8 *)(param_1 + 2));
        if (iVar3 == -0x80) {
          return -0x80;
        }
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006ab5d2(iVar3,uVar5);
            return iVar3;
          }
          return iVar3;
        }
        iVar3 = FUN_10015ccc4(*(undefined8 *)(param_1 + 0x10),0);
        if (iVar3 == -0x80) {
          return -0x80;
        }
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006ab566(iVar3,uVar5);
            return iVar3;
          }
          return iVar3;
        }
        param_1[0x10] = 0;
        param_1[0x11] = 0;
      }
      if (7 < param_2) {
        puVar4 = (uint *)FUN_1001c6429(param_2);
        if (puVar4 == (uint *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006ab716(uVar5);
          }
          FUN_1001782e9(0,0);
          return -0x6c;
        }
        *puVar4 = param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 |
                  param_2 << 0x18;
        puVar4[1] = 0x65657266;
        iVar3 = FUN_10015cb08(puVar4,&local_28,2);
        if (iVar3 == -0x80) {
          return -0x80;
        }
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006ab6aa(iVar3,uVar5);
            return iVar3;
          }
          return iVar3;
        }
        iVar3 = FUN_10015d357(*(undefined8 *)(param_1 + 2),local_28,0);
        if (iVar3 == -0x80) {
          return -0x80;
        }
        if (iVar3 != 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            FUN_1006ab63e(iVar3,uVar5);
            return iVar3;
          }
          return iVar3;
        }
        *(undefined8 *)(param_1 + 0x10) = local_28;
      }
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_1006ab4f0(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return -0x32;
}

