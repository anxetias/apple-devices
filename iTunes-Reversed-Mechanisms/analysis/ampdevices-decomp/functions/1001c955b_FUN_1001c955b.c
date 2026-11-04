// name: FUN_1001c955b
// address: 1001c955b

int FUN_1001c955b(int *param_1,uint param_2,void *param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long local_50;
  void *local_48;
  uint local_40;
  int local_3c;
  long *local_38;
  
  local_38 = (long *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006abde2(uVar5);
    }
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      local_3c = param_4;
      iVar4 = FUN_1001c93e6(param_1,&local_40);
      if (iVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 == '\0') {
          return iVar4;
        }
        FUN_1006abb3c(iVar4,uVar5);
        return iVar4;
      }
      if (local_40 != 0) {
        uVar6 = 0;
        local_48 = param_3;
        while( true ) {
          if (uVar6 == 0) {
            iVar4 = FUN_1001c9485(param_1,0,&local_38);
            if (iVar4 != 0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 == '\0') {
                return iVar4;
              }
              FUN_1006abc94(iVar4,uVar5);
              return iVar4;
            }
          }
          else {
            if (local_38 == (long *)0x0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                FUN_1006abc1e(uVar5);
              }
              goto LAB_1001c95fa;
            }
            local_38 = (long *)*local_38;
            if (local_38 == (long *)0x0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                FUN_1006abba8(uVar5);
              }
              goto LAB_1001c95fa;
            }
          }
          pvVar2 = local_48;
          uVar1 = *(uint *)(local_38[4] + 4);
          if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
              param_2) break;
          uVar6 = uVar6 + 1;
          if (local_40 <= uVar6) {
            return 0;
          }
        }
        if ((local_3c != 0 && local_48 != (void *)0x0) && param_2 == 0x2d2d2d2d) {
          iVar4 = FUN_10015d28d(local_38,0x6d65616e,&local_50);
          if (iVar4 == -0x80) {
            return -0x80;
          }
          if (iVar4 != 0) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 == '\0') {
              return iVar4;
            }
            FUN_1006abd00(iVar4,uVar5);
            return iVar4;
          }
          if (local_50 != 0) {
            uVar6 = **(uint **)(local_50 + 0x20);
            if ((uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) -
                0xc == local_3c) {
              _memcmp(*(uint **)(local_50 + 0x20) + 3,pvVar2,(long)local_3c);
            }
          }
        }
        *param_5 = local_38;
      }
      return 0;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_1006abd6c(uVar5);
    }
  }
LAB_1001c95fa:
  FUN_1001782e9(0,0);
  return -0x32;
}

