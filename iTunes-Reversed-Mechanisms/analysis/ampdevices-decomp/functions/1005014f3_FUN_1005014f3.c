// name: FUN_1005014f3
// address: 1005014f3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005014f3(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = _AMSGetSourcesForRestore();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar3 = FUN_10017076e(0);
      if (0 < lVar3) {
        lVar7 = 0;
        do {
          lVar4 = FUN_10016499b(0,lVar7);
          if (lVar4 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_44a = "backupDict != nullptr";
              goto LAB_100501731;
            }
LAB_100501669:
            FUN_1001782e9(0,0);
          }
          else {
            cVar1 = FUN_100167dd2(lVar4,&cf_NoAutoDelete,0);
            if (cVar1 == '\0') {
              lVar5 = FUN_100166a07(lVar4,&cf_LastBackupDate);
              if (lVar5 == 0) {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  local_44a = "backupDate != nullptr";
                  goto LAB_100501731;
                }
              }
              else {
                dVar8 = (double)FUN_1001711f6(lVar5);
                dVar9 = (double)FUN_1001711e2();
                if (dVar9 + _DAT_1007534e0 <= dVar8) goto LAB_100501672;
                lVar4 = FUN_100166c1b(lVar4,&cf_BackupPath);
                if (lVar4 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_44a = "backupPath != nullptr";
LAB_100501731:
                    local_44c = 0x822;
                    local_454 = "Assertion failure";
                    local_458 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458
                                        ,0x16);
                  }
                }
                else {
                  lVar4 = FUN_10017454a(DAT_1008c4d90,lVar4,0,1);
                  if (lVar4 != 0) {
                    cVar1 = FUN_10016ffd2(lVar4,&local_458,0);
                    if (cVar1 != '\0') {
                      FUN_100182d59(&local_458,1);
                    }
                    FUN_10017060f(lVar4);
                    goto LAB_100501672;
                  }
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_44a = "backupURL != nullptr";
                    goto LAB_100501731;
                  }
                }
              }
              goto LAB_100501669;
            }
          }
LAB_100501672:
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
      }
      FUN_10017060f(0);
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

