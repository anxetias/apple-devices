// name: FUN_100268422
// address: 100268422

/* WARNING: Type propagation algorithm not settling */

int FUN_100268422(long param_1,long *param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 local_60 [4];
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "buffer != nullptr";
LAB_1002685b4:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_5c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
    }
  }
  else if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "outRequestData != nullptr";
      goto LAB_1002685b4;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      iVar3 = FUN_1002688dc(param_1,0x23,local_60,local_5c);
      if (iVar3 == 0) {
        if (local_5c[0] < 2) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_4a = "dataLength >= 2";
LAB_1002687f6:
            local_4c = 0x822;
            local_54 = "Assertion failure";
            local_5c[1] = 0x8220202;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16)
            ;
          }
        }
        else {
          uVar7 = (ulong)*(byte *)(param_1 + 6);
          uVar6 = *(byte *)(param_1 + 6) + 2;
          if (local_5c[0] < uVar6) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_4a = "dataLength >= (1 + requestLength + 1)";
              goto LAB_1002687f6;
            }
          }
          else {
            bVar1 = *(byte *)(param_1 + 7 + uVar7);
            if (local_5c[0] == uVar6 + bVar1) {
              if ((bVar1 & 3) == 0) {
                lVar5 = FUN_100170dc5(DAT_1008c4d90,param_1 + 7,uVar7);
                *param_2 = lVar5;
                if (lVar5 == 0) {
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_4a = "*outRequestData != nullptr";
LAB_1002688b0:
                    local_4c = 0x822;
                    local_54 = "Assertion failure";
                    local_5c[1] = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",
                                        local_5c + 1,0x16);
                  }
                }
                else {
                  lVar5 = FUN_100170720(DAT_1008c4d90,bVar1 >> 2,
                                        PTR__kCFTypeArrayCallBacks_10082e130);
                  if (lVar5 != 0) {
                    if ((ulong)bVar1 != 0) {
                      uVar8 = 0;
                      do {
                        uVar6 = *(uint *)(param_1 + uVar7 + 8 + uVar8);
                        FUN_10016595b(lVar5,uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 |
                                            (uVar6 & 0xff00) << 8 | uVar6 << 0x18);
                        uVar8 = uVar8 + 4;
                      } while (uVar8 < bVar1);
                    }
                    *param_3 = lVar5;
                    iVar3 = 0;
                    goto LAB_10026868b;
                  }
                  uVar4 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar4,0x10);
                  if (cVar2 != '\0') {
                    local_4a = "diversityElementIDsArray != nullptr";
                    goto LAB_1002688b0;
                  }
                }
                FUN_1001782e9(0,0);
                iVar3 = -0x6c;
                goto LAB_100268675;
              }
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_4a = "(diversityElementIDsLength & 3) == 0";
                goto LAB_1002687f6;
              }
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar4,0x10);
              if (cVar2 != '\0') {
                local_4a = "dataLength == (2 + requestLength + diversityElementIDsLength)";
                goto LAB_1002687f6;
              }
            }
          }
        }
        FUN_1001782e9(0,0);
        iVar3 = -0x32;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_5c + 1,0x12);
        }
      }
LAB_100268675:
      FUN_10017060f(*param_2);
      *param_2 = 0;
      FUN_10017060f(0);
      goto LAB_10026868b;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_4a = "outDiversityElementIDsArray != nullptr";
      goto LAB_1002685b4;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_10026868b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

