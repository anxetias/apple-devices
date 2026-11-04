// name: FUN_1001c97e8
// address: 1001c97e8

int FUN_1001c97e8(int *param_1,uint param_2,void *param_3,int param_4,void *param_5,int param_6,
                 undefined8 *param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long local_78;
  long local_70;
  void *local_68;
  size_t local_60;
  size_t local_58;
  void *local_50;
  int local_48;
  uint local_44;
  long *local_40;
  char local_31;
  
  local_40 = (long *)0x0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6d657461)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ac16a(uVar4);
    }
  }
  else {
    if (param_7 != (undefined8 *)0x0) {
      *param_7 = 0;
      local_68 = param_5;
      local_50 = param_3;
      iVar3 = FUN_1001c93e6(param_1,&local_44);
      if (iVar3 != 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          FUN_1006abe58(iVar3,uVar4);
          return iVar3;
        }
        return iVar3;
      }
      if (local_44 == 0) {
        return 0;
      }
      local_31 = (param_4 != 0 && local_50 != (void *)0x0) && param_2 == 0x2d2d2d2d;
      local_60 = (size_t)param_6;
      local_58 = (size_t)param_4;
      uVar5 = 0;
      local_48 = param_6;
      do {
        if (uVar5 == 0) {
          iVar3 = FUN_1001c9485(param_1,0,&local_40);
          if (iVar3 != 0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_1006abfb0(iVar3,uVar4);
              return iVar3;
            }
            return iVar3;
          }
        }
        else {
          if (local_40 == (long *)0x0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_1006abf3a(uVar4);
            }
            goto LAB_1001c9890;
          }
          local_40 = (long *)*local_40;
          if (local_40 == (long *)0x0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_1006abec4(uVar4);
            }
            goto LAB_1001c9890;
          }
        }
        uVar1 = *(uint *)(local_40[4] + 4);
        if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
            param_2) {
          if (local_31 == '\0') {
LAB_1001c99ac:
            iVar3 = FUN_10015d28d(local_40,0x6e616d65,&local_78);
            if (iVar3 != 0) {
              if (iVar3 == -0x80) {
                return -0x80;
              }
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_1006ac01c(iVar3,uVar4);
                return iVar3;
              }
              return iVar3;
            }
            if (local_78 != 0) {
              uVar1 = **(uint **)(local_78 + 0x20);
              if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   - 0xc == local_48) &&
                 (iVar3 = _memcmp(*(uint **)(local_78 + 0x20) + 3,local_68,local_60), iVar3 == 0)) {
                *param_7 = local_40;
                return 0;
              }
            }
          }
          else {
            iVar3 = FUN_10015d28d(local_40,0x6d65616e,&local_70);
            if (iVar3 != 0) {
              if (iVar3 == -0x80) {
                return -0x80;
              }
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                FUN_1006ac088(iVar3,uVar4);
                return iVar3;
              }
              return iVar3;
            }
            if (local_70 != 0) {
              uVar1 = **(uint **)(local_70 + 0x20);
              if (((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18)
                   - 0xc == param_4) &&
                 (iVar3 = _memcmp(*(uint **)(local_70 + 0x20) + 3,local_50,local_58), iVar3 == 0))
              goto LAB_1001c99ac;
            }
          }
        }
        uVar5 = uVar5 + 1;
        if (local_44 <= uVar5) {
          return 0;
        }
      } while( true );
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006ac0f4(uVar4);
    }
  }
LAB_1001c9890:
  FUN_1001782e9(0,0);
  return -0x32;
}

