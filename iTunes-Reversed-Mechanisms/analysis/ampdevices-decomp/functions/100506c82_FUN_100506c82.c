// name: FUN_100506c82
// address: 100506c82

int FUN_100506c82(long param_1,int param_2,undefined8 param_3,uint param_4,long param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char local_6b8 [80];
  long local_668;
  uint local_65c;
  undefined1 local_658 [512];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_668 = 0;
  local_65c = param_4;
  iVar2 = FUN_10017d477(param_3,local_6b8,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      if (local_6b8[0] == '\0') {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "specInfo.isDirectory";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x78;
        goto LAB_100506eb6;
      }
      iVar2 = FUN_1001879bd(param_3,1,&local_668);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          iVar2 = FUN_100187bea(local_668,&local_458,local_6b8,local_658);
          if (iVar2 == 0) {
            uVar7 = (ulong)local_65c;
            do {
              if (param_2 == 0x626f6f6b) {
                if (local_6b8[0] != '\0') {
                  pcVar5 = "Purchases";
LAB_100506dac:
                  cVar1 = FUN_1001e4e7c(pcVar5,local_658,1);
joined_r0x000100506dbb:
                  if (cVar1 == '\0') {
                    if (local_65c != 0) {
                      uVar6 = 0;
                      do {
                        if (*(int *)(param_5 + uVar6 * 4) != 0) {
                          lVar3 = FUN_1002f950a(*(undefined8 *)(param_1 + 0x30));
                          if (lVar3 == 0) {
                            *(undefined4 *)(param_5 + uVar6 * 4) = 0;
                          }
                          else {
                            cVar1 = FUN_10017f77e(*(undefined8 *)(*(long *)(lVar3 + 0x58) + 0x80),
                                                  &local_458);
                            if (cVar1 != '\0') {
                              *(undefined4 *)(param_5 + uVar6 * 4) = 0;
                              goto LAB_100506e4a;
                            }
                          }
                        }
                        uVar6 = uVar6 + 1;
                      } while (uVar7 != uVar6);
                    }
                    if (local_6b8[0] == '\0') {
                      FUN_100184b54(&local_458);
                    }
                    else {
                      FUN_100182d59(&local_458,1);
                    }
                  }
                }
              }
              else if (param_2 == 0x72696e67) {
                if (local_6b8[0] == '\0') {
                  pcVar5 = "Ringtones.plist";
                  goto LAB_100506dac;
                }
              }
              else {
                cVar1 = local_6b8[0];
                if (param_2 == 0x736f6e67) goto joined_r0x000100506dbb;
              }
LAB_100506e4a:
              FUN_1001b1464();
              if (*(char *)(param_1 + 0x6ad3) != '\0') {
                iVar2 = -0x80;
                goto LAB_100506ea5;
              }
              iVar2 = FUN_100187bea(local_668,&local_458,local_6b8,local_658);
            } while (iVar2 == 0);
          }
          iVar2 = 0;
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
            goto LAB_100506f90;
          }
        }
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
LAB_100506f90:
        local_44c = 0x400;
        local_454 = "Assertion failure";
        local_458 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
LAB_100506ea5:
  if (local_668 != 0) {
    FUN_100187c42();
  }
LAB_100506eb6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

