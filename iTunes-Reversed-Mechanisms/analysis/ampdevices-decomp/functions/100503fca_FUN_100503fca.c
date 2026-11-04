// name: FUN_100503fca
// address: 100503fca

long FUN_100503fca(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10050426a:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_100504499:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10050426a;
    }
    if (param_2 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "backupList != nullptr";
        goto LAB_100504499;
      }
    }
    else if (param_3 < 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "selectedBackupIndex >= 0";
        goto LAB_100504499;
      }
    }
    else {
      lVar3 = FUN_10017076e(param_2);
      if (param_3 < lVar3) {
        lVar4 = FUN_10016499b(param_2,param_3);
        if (lVar4 == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_4a = "backupDict != nullptr";
            goto LAB_100504499;
          }
        }
        else {
          lVar5 = FUN_100166c1b(lVar4,&cf_SerialNumber);
          if (lVar5 == 0) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_4a = "selectedBackupSerialNumber != nullptr";
              goto LAB_100504499;
            }
          }
          else {
            lVar4 = FUN_100166a07(lVar4,&cf_LastBackupDate);
            if (lVar4 != 0) {
              lVar8 = -1;
              lVar9 = 0;
              local_68 = 0;
              do {
                if (param_3 != lVar9) {
                  lVar6 = FUN_10016499b(param_2,lVar9);
                  if (lVar6 == 0) {
                    uVar2 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar2,0x10);
                    if (cVar1 != '\0') {
                      local_4a = "backupDict != nullptr";
LAB_100504223:
                      local_4c = 0x822;
                      local_54 = "Assertion failure";
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                  }
                  else {
                    lVar7 = FUN_100166c1b(lVar6,&cf_SerialNumber);
                    if (lVar7 != 0) {
                      cVar1 = FUN_100169eb1(lVar7,lVar5);
                      if (cVar1 != '\0') {
                        lVar6 = FUN_100166a07(lVar6,&cf_LastBackupDate);
                        if (lVar6 == 0) {
                          uVar2 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar2,0x10);
                          if (cVar1 != '\0') {
                            local_4a = "backupDate != nullptr";
                            goto LAB_100504223;
                          }
                          goto LAB_10050424c;
                        }
                        lVar7 = FUN_10017123b(lVar6,lVar4,0);
                        if ((lVar7 == 1) &&
                           ((lVar8 == -1 || (lVar7 = FUN_10017123b(lVar6,local_68,0), lVar7 == 1))))
                        {
                          lVar8 = lVar9;
                          local_68 = lVar6;
                        }
                      }
                      goto LAB_100504259;
                    }
                    uVar2 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar2,0x10);
                    if (cVar1 != '\0') {
                      local_4a = "backupSerialNumber != nullptr";
                      goto LAB_100504223;
                    }
                  }
LAB_10050424c:
                  FUN_1001782e9(0,0);
                }
LAB_100504259:
                lVar9 = lVar9 + 1;
              } while (lVar3 != lVar9);
              goto LAB_1005044ce;
            }
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_4a = "selectedBackupDate != nullptr";
              goto LAB_100504499;
            }
          }
        }
      }
      else {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_4a = "selectedBackupIndex < numBackups";
          goto LAB_100504499;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
  lVar8 = -1;
LAB_1005044ce:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}

