// name: FUN_1002eab6a
// address: 1002eab6a

void FUN_1002eab6a(long param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10017060f(*(undefined8 *)(param_1 + 0x10));
  uVar6 = FUN_10017072a(DAT_1008c4d90,0,param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  lVar7 = FUN_10017076e(uVar6);
  if (0 < lVar7) {
    bVar5 = 0;
    lVar11 = 0;
    do {
      lVar8 = FUN_10016499b(*(undefined8 *)(param_1 + 0x10),lVar11);
      if (lVar8 == 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "dataClassDetail != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar9 = FUN_100166c1b(lVar8,&cf_kAMSDataClassName);
        if (lVar9 == 0) {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dataClassName != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          bVar1 = FUN_100167e61(lVar8,&cf_kAMSDataClassEnabled,0);
          uVar2 = FUN_100167e61(lVar8,&cf_kAMSDataClassReset,0);
          bVar1 = bVar1 & *(byte *)(param_1 + 0x42);
          cVar3 = FUN_100170633(lVar9,&cf_com_apple_Contacts);
          if (cVar3 == '\0') {
            cVar3 = FUN_100170633(lVar9,&cf_com_apple_Calendars);
            if (cVar3 == '\0') {
              cVar3 = FUN_100170633(lVar9,&cf_com_apple_Bookmarks);
              if (cVar3 == '\0') {
                cVar3 = FUN_100170633(lVar9,&cf_com_apple_Notes);
                if (cVar3 == '\0') {
                  FUN_100170633(lVar9,&cf_com_apple_MailAccounts);
                }
                else {
                  bVar5 = bVar5 | bVar1;
                  if ((param_4 == 0) || ((*(byte *)(param_1 + 0x48) & 0x10) != 0)) {
                    plVar10 = *(long **)(param_1 + 0x38);
                    if (plVar10 == (long *)0x0) {
                      plVar10 = operator_new(0x50,(nothrow_t *)PTR_nothrow_10082c970);
                      if (plVar10 != (long *)0x0) {
                        *plVar10 = (long)&PTR_FUN_100854338;
                        plVar10[1] = param_1;
                        lVar8 = FUN_1001705fc(&cf_com_apple_Notes);
                        plVar10[2] = lVar8;
                        plVar10[3] = 0;
                        *(undefined4 *)(plVar10 + 4) = 0xffffffff;
                        *(undefined4 *)((long)plVar10 + 0x24) = 0xffffffff;
                        *(undefined4 *)(plVar10 + 5) = 0xffffffff;
                        *(undefined4 *)((long)plVar10 + 0x2c) = 0xffffffff;
                        *(undefined1 (*) [16])(plVar10 + 6) = (undefined1  [16])0x0;
                        *(undefined1 (*) [16])((long)plVar10 + 0x3a) = (undefined1  [16])0x0;
                      }
                      *(long **)(param_1 + 0x38) = plVar10;
                    }
                    cVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar11,0,uVar2,param_3);
                    if (cVar3 == '\0') {
                      if (*(long **)(param_1 + 0x38) != (long *)0x0) {
                        (**(code **)(**(long **)(param_1 + 0x38) + 8))();
                      }
                      *(undefined8 *)(param_1 + 0x38) = 0;
                    }
                  }
                }
              }
              else {
                bVar5 = bVar5 | bVar1;
                if ((param_4 == 0) || ((*(byte *)(param_1 + 0x48) & 4) != 0)) {
                  plVar10 = *(long **)(param_1 + 0x30);
                  if (plVar10 == (long *)0x0) {
                    plVar10 = operator_new(0x50,(nothrow_t *)PTR_nothrow_10082c970);
                    if (plVar10 != (long *)0x0) {
                      *plVar10 = (long)&PTR_FUN_100854338;
                      plVar10[1] = param_1;
                      lVar8 = FUN_1001705fc(&cf_com_apple_Bookmarks);
                      plVar10[2] = lVar8;
                      plVar10[3] = 0;
                      *(undefined4 *)(plVar10 + 4) = 0xffffffff;
                      *(undefined4 *)((long)plVar10 + 0x24) = 0xffffffff;
                      *(undefined4 *)(plVar10 + 5) = 0xffffffff;
                      *(undefined4 *)((long)plVar10 + 0x2c) = 0xffffffff;
                      *(undefined1 (*) [16])(plVar10 + 6) = (undefined1  [16])0x0;
                      *(undefined1 (*) [16])((long)plVar10 + 0x3a) = (undefined1  [16])0x0;
                    }
                    *(long **)(param_1 + 0x30) = plVar10;
                  }
                  cVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar11,0,uVar2,param_3);
                  if (cVar3 == '\0') {
                    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
                      (**(code **)(**(long **)(param_1 + 0x30) + 8))();
                    }
                    *(undefined8 *)(param_1 + 0x30) = 0;
                  }
                }
              }
              goto LAB_1002ead42;
            }
            bVar4 = 1;
            if (((param_4 != 0) && ((*(byte *)(param_1 + 0x48) & 2) != 0)) &&
               ((*(char *)(param_1 + 0x55) != '\x01' || ((*(byte *)(param_1 + 0x50) & 2) != 0)))) {
              bVar4 = 0;
            }
            if (bVar1 == 0) {
LAB_1002eada1:
              uVar6 = 0;
            }
            else if (((*(byte *)(param_1 + 0x44) & 2) == 0) ||
                    (uVar6 = 1, (*(byte *)(param_1 + 0x4c) & 2) != 0)) {
              bVar5 = 1;
              goto LAB_1002eada1;
            }
            if ((param_4 & bVar4) == 0) {
              plVar10 = *(long **)(param_1 + 0x28);
              if (plVar10 == (long *)0x0) {
                plVar10 = operator_new(0x78,(nothrow_t *)PTR_nothrow_10082c970);
                if (plVar10 != (long *)0x0) {
                  FUN_100205f96(plVar10,param_1,*(undefined1 *)(param_1 + 0x54));
                }
                *(long **)(param_1 + 0x28) = plVar10;
              }
              cVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar11,uVar6,uVar2,param_3);
              if (cVar3 == '\0') {
                if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                  (**(code **)(**(long **)(param_1 + 0x28) + 8))();
                }
                *(undefined8 *)(param_1 + 0x28) = 0;
              }
            }
          }
          else {
            bVar4 = 1;
            if (((param_4 != 0) && ((*(byte *)(param_1 + 0x48) & 1) != 0)) &&
               ((*(char *)(param_1 + 0x55) != '\x01' || ((*(byte *)(param_1 + 0x50) & 1) != 0)))) {
              bVar4 = 0;
            }
            if (bVar1 == 0) {
LAB_1002eac82:
              uVar6 = 0;
            }
            else if (((*(byte *)(param_1 + 0x44) & 1) == 0) ||
                    (uVar6 = 1, (*(byte *)(param_1 + 0x4c) & 1) != 0)) {
              bVar5 = 1;
              goto LAB_1002eac82;
            }
            if ((param_4 & bVar4) == 0) {
              plVar10 = *(long **)(param_1 + 0x20);
              if (plVar10 == (long *)0x0) {
                plVar10 = operator_new(0x70,(nothrow_t *)PTR_nothrow_10082c970);
                if (plVar10 != (long *)0x0) {
                  FUN_10060137e(plVar10,param_1);
                }
                *(long **)(param_1 + 0x20) = plVar10;
              }
              cVar3 = (**(code **)(*plVar10 + 0x10))(plVar10,lVar11,uVar6,uVar2,param_3);
              if (cVar3 == '\0') {
                if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
                }
                *(undefined8 *)(param_1 + 0x20) = 0;
              }
            }
          }
        }
      }
LAB_1002ead42:
      lVar11 = lVar11 + 1;
    } while (lVar7 != lVar11);
    if ((bVar5 & 1) != 0) {
      FUN_1002eb0c8(param_1,1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

