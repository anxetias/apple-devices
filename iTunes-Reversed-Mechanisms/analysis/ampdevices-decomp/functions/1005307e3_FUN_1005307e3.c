// name: FUN_1005307e3
// address: 1005307e3

int FUN_1005307e3(undefined8 *param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong local_80;
  code *local_78;
  long local_70;
  ulong local_68;
  float local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    local_78 = param_4;
    iVar2 = (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&local_80);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = -0x27;
        if (param_2 <= local_80) {
          lVar4 = local_80 - param_2;
          if (param_3 + param_2 <= local_80) {
            lVar4 = param_3;
          }
          local_70 = FUN_1001c63e1(1000000);
          if (local_70 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "buffer != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x6c;
          }
          else {
            lVar7 = lVar4 + param_2;
            uVar5 = local_80 - lVar7;
            if (uVar5 != 0) {
              local_5c = (float)uVar5;
              uVar6 = uVar5;
              do {
                uVar8 = 1000000;
                if (uVar6 < 1000000) {
                  uVar8 = uVar6;
                }
                local_68 = uVar8;
                iVar2 = (**(code **)(*(long *)*param_1 + 0x90))
                                  ((long *)*param_1,lVar7,local_70,uVar8,1,&local_68);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_100530bc1:
                      local_4c = 0x400;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_100530bd4;
                }
                if (local_68 != uVar8) {
LAB_100530ae6:
                  uVar3 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar3,0x10);
                  if (cVar1 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "count == bytesToMove";
                    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar2 = -0x24;
                  goto LAB_100530bd4;
                }
                iVar2 = (**(code **)(*(long *)*param_1 + 0x98))
                                  ((long *)*param_1,param_2,local_70,uVar8,1,&local_68);
                if (iVar2 != 0) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_100530bc1;
                    }
                  }
                  goto LAB_100530bd4;
                }
                if (local_68 != uVar8) goto LAB_100530ae6;
                uVar6 = uVar6 - uVar8;
                if ((local_78 != (code *)0x0) &&
                   (iVar2 = (*local_78)((int)(((float)(uVar5 - uVar6) * DAT_10070bcf0) / local_5c) &
                                        0xffff,param_5), iVar2 != 0)) {
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    if (cVar1 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      goto LAB_100530bc1;
                    }
                  }
                  goto LAB_100530bd4;
                }
                lVar7 = lVar7 + uVar8;
                param_2 = param_2 + uVar8;
              } while (uVar6 != 0);
            }
            iVar2 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,local_80 - lVar4);
LAB_100530bd4:
            FUN_1001c64c1(local_70);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

