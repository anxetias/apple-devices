// name: FUN_10036aa7d
// address: 10036aa7d

ulong FUN_10036aa7d(long param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long local_90;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  char *local_7a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = 0;
  if (*(char *)(param_1 + 0x2a3) == '\0') {
    uVar9 = 0;
    goto LAB_10036ad11;
  }
  piVar1 = *(int **)(param_1 + 0x2b0);
  uVar9 = 0;
  if (piVar1 == (int *)0x0) goto LAB_10036ad11;
  if ((*piVar1 == 0x4f4c5354) && (piVar1[1] != 0)) {
    uVar9 = (ulong)(uint)((int)((ulong)(*(long *)(piVar1 + 4) - *(long *)(piVar1 + 2)) >> 3) *
                         -0x49249249);
  }
  iVar3 = FUN_100594adc(&local_90,uVar9);
  if (iVar3 == -0x80) {
LAB_10036ad03:
    uVar9 = 0;
  }
  else {
    if (iVar3 != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        puVar10 = &local_88;
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x400;
        local_7a = (char *)CONCAT44(local_7a._4_4_,iVar3);
LAB_10036ae15:
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar10,0x12);
      }
      goto LAB_10036ad03;
    }
    if (local_90 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x822;
        local_7a = "newList != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
      }
      uVar9 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      if ((int)uVar9 != 0) {
        iVar3 = 0;
        do {
          puVar5 = (undefined8 *)FUN_1005968ea(*(undefined8 *)(param_1 + 0x2b0),iVar3,0);
          if (puVar5 == (undefined8 *)0x0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_4a = "sourceTrack != nullptr";
LAB_10036ac6a:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_10036ac31:
            FUN_1001782e9(0,0);
          }
          else {
            if (*(int *)(*(long *)(param_1 + 8) + 0x84) == 0x2062696c) {
              lVar8 = puVar5[0x30];
              lVar6 = FUN_100308474(param_1);
              if (lVar8 != lVar6) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "sourceTrack->sourceTrackDatabaseID == GetTrackDataPersistentID(playlist)";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              lVar8 = FUN_100300729(*(undefined8 *)(param_1 + 8),puVar5[0x31]);
            }
            else {
              lVar8 = FUN_100307b9e(*(long *)(param_1 + 8),*puVar5);
            }
            if (lVar8 == 0) {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                local_4a = "destTrack != nullptr";
                goto LAB_10036ac6a;
              }
              goto LAB_10036ac31;
            }
            FUN_10031baf6(lVar8,&local_88);
            iVar4 = FUN_100594f1e(local_90,&local_88,1,0);
            if (iVar4 != 0) {
              if (iVar4 == -0x80) goto LAB_10036ad03;
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 == '\0') goto LAB_10036ad03;
              puVar10 = &local_58;
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              goto LAB_10036ae15;
            }
          }
          iVar3 = iVar3 + 1;
        } while ((int)uVar9 != iVar3);
      }
      FUN_100595344(*(undefined8 *)(param_1 + 0x2b0));
      *(long *)(param_1 + 0x2b0) = local_90;
      local_90 = 0;
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    }
  }
  FUN_100595344(local_90);
LAB_10036ad11:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

