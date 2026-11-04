// name: FUN_1005a0df0
// address: 1005a0df0

undefined8 FUN_1005a0df0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_3 + 0x309) = 1;
  uVar1 = *(ushort *)(param_3 + 0x14);
  *(bool *)(param_3 + 0x662c) = 0x1ff < uVar1;
  *(bool *)(param_3 + 0x6632) = 0x2ff < uVar1;
  *(bool *)(param_3 + 0x6633) = 0x4ff < uVar1;
  lVar6 = FUN_1001705e9();
  lVar7 = _CFDictionaryGetTypeID();
  if (lVar6 == lVar7) {
    lVar6 = 0;
    do {
      puVar3 = (&PTR_cf_Contacts_10086e1a0)[lVar6 * 2];
      lVar7 = FUN_100166b7f(param_1,puVar3);
      lVar8 = FUN_100166b7f(param_2,puVar3);
      uVar2 = (&DAT_10086e1a8)[lVar6 * 4];
      if (lVar7 != 0) {
        *(uint *)(param_3 + 0x660c) = *(uint *)(param_3 + 0x660c) | uVar2;
        cVar4 = FUN_100167dd2(lVar7,&cf_ReadOnly,0);
        if (cVar4 != '\0') {
          *(uint *)(param_3 + 0x6610) = *(uint *)(param_3 + 0x6610) | uVar2;
        }
      }
      if (lVar8 != 0) {
        lVar7 = FUN_100166844(lVar8,&cf_Sources);
        lVar8 = FUN_100166844(lVar8,&cf_AccountNames);
        if ((lVar7 != 0) && (lVar9 = FUN_10017076e(lVar7), 0 < lVar9)) {
          *(uint *)(param_3 + 0x6614) = *(uint *)(param_3 + 0x6614) | uVar2;
          lVar11 = 0;
          do {
            uVar10 = FUN_100164a01(lVar7,lVar11);
            cVar4 = FUN_100170633(uVar10,&cf_iCloud);
            if (cVar4 == '\0') {
              cVar4 = FUN_100170633(uVar10,&cf_MobileMe);
              if (cVar4 == '\0') {
                cVar4 = FUN_100170633(uVar10,&cf_com_apple_dataaccess);
                if (cVar4 == '\0') {
                  cVar4 = FUN_100170633(uVar10,&cf_com_apple_dataaccess_CalDAV);
                  if (cVar4 == '\0') {
                    cVar4 = FUN_100170633(uVar10,&cf_com_apple_dataaccess_CardDAV);
                    if (cVar4 == '\0') {
                      cVar4 = FUN_100170633(uVar10,&cf_com_apple_dataaccess_EAS);
                      if (cVar4 == '\0') {
                        cVar4 = FUN_100170633(uVar10,&cf_com_apple_dataaccess_IMAPNotes);
                        if ((cVar4 != '\0' && lVar8 != 0) &&
                           (cVar4 = FUN_100164756(lVar8,&cf_iCloud), cVar4 != '\0'))
                        goto LAB_1005a0f41;
                        goto LAB_1005a102d;
                      }
                      goto LAB_1005a0f85;
                    }
                    if (uVar2 != 1) {
                      uVar10 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar10,0x10);
                      if (cVar4 != '\0') {
                        local_4a = "dataClassMask == kIPodSyncDataClass_Contacts";
                        goto LAB_1005a10b2;
                      }
                      goto LAB_1005a101a;
                    }
                  }
                  else if (uVar2 != 2) {
                    uVar10 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar10,0x10);
                    if (cVar4 != '\0') {
                      local_4a = "dataClassMask == kIPodSyncDataClass_Calendars";
LAB_1005a10b2:
                      local_4c = 0x822;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
LAB_1005a101a:
                    FUN_1001782e9(0,0);
                  }
                  *(uint *)(param_3 + 0x6624) = *(uint *)(param_3 + 0x6624) | uVar2;
                }
                else {
LAB_1005a0f85:
                  *(uint *)(param_3 + 0x6620) = *(uint *)(param_3 + 0x6620) | uVar2;
                }
              }
              else {
                *(uint *)(param_3 + 0x661c) = *(uint *)(param_3 + 0x661c) | uVar2;
              }
            }
            else {
LAB_1005a0f41:
              *(uint *)(param_3 + 0x6618) = *(uint *)(param_3 + 0x6618) | uVar2;
            }
LAB_1005a102d:
            lVar11 = lVar11 + 1;
          } while (lVar9 != lVar11);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
    uVar10 = 0;
    uVar5 = FUN_100167dd2(param_1,&cf_DeviceHandlesDefaultCalendar,0);
    *(undefined1 *)(param_3 + 0x662d) = uVar5;
    uVar5 = FUN_100167dd2(param_1,&cf_DeviceSupportsClearingData,0);
    *(undefined1 *)(param_3 + 0x6634) = uVar5;
  }
  else {
    lVar6 = FUN_1001705e9(param_1);
    lVar7 = _CFArrayGetTypeID();
    uVar10 = 0x460;
    if (lVar6 == lVar7) {
      lVar6 = FUN_10017076e(param_1);
      if (0 < lVar6) {
        lVar7 = 0;
        do {
          uVar10 = FUN_100164a01(param_1,lVar7);
          lVar8 = 8;
          do {
            cVar4 = FUN_100170633(uVar10,*(undefined8 *)(&UNK_10086e198 + lVar8));
            if (cVar4 != '\0') {
              *(uint *)(param_3 + 0x660c) =
                   *(uint *)(param_3 + 0x660c) | *(uint *)((long)&PTR_cf_Contacts_10086e1a0 + lVar8)
              ;
              break;
            }
            lVar8 = lVar8 + 0x10;
          } while (lVar8 != 0x58);
          lVar7 = lVar7 + 1;
        } while (lVar7 != lVar6);
      }
      uVar10 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

