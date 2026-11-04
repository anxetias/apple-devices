// name: FUN_1003a66f6
// address: 1003a66f6

void FUN_1003a66f6(long *param_1,long *param_2,char param_3)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (long *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003a682b;
    }
    if ((int)param_1[8] != 0) {
      if (param_1[2] != 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "playlistItem->parent == nullptr";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_2 == (long *)0x0) {
        lVar6 = *param_1;
        plVar5 = *(long **)(lVar6 + 0x78);
        lVar4 = plVar5[2];
        param_1[2] = (long)plVar5;
        if (lVar4 == 0) goto LAB_1003a6908;
LAB_1003a6888:
        param_1[4] = lVar4;
        param_1[3] = *(long *)(lVar4 + 0x18);
        *(long **)(lVar4 + 0x18) = param_1;
        if (param_1[3] == 0) {
          plVar3 = plVar5 + 2;
          if (plVar5[2] != lVar4) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "parent->lastChild == afterItem";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
        }
        else {
          plVar3 = (long *)(param_1[3] + 0x20);
        }
LAB_1003a6965:
        *plVar3 = (long)param_1;
      }
      else {
        plVar5 = (long *)*param_2;
        lVar4 = param_2[1];
        if (lVar4 == -1) {
          lVar4 = plVar5[2];
        }
        if (*param_1 != *plVar5) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "playlistItem->playlist == parent->playlist";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (lVar4 != 0) {
          if (*(long **)(lVar4 + 0x10) != plVar5) {
            uVar2 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar2,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "afterItem == nullptr || afterItem->parent == parent";
              __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          lVar6 = *param_1;
          param_1[2] = (long)plVar5;
          goto LAB_1003a6888;
        }
        lVar6 = *param_1;
        param_1[2] = (long)plVar5;
LAB_1003a6908:
        param_1[4] = 0;
        lVar4 = plVar5[1];
        param_1[3] = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x20) = param_1;
        }
        plVar5[1] = (long)param_1;
        if (plVar5[2] == 0) {
          plVar3 = plVar5 + 2;
          goto LAB_1003a6965;
        }
      }
      if ((int)param_1[8] != 0) {
        FUN_1003a6b70(lVar6 + 0x450,(int)param_1[8],param_1);
      }
      if (param_1[5] != 0) {
        FUN_1003a6c70(lVar6 + 0x478,param_1[5],param_1);
      }
      *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
      FUN_100484c95(lVar6);
      if (param_3 == '\0') {
        FUN_10037ee15(lVar6,1);
      }
      else {
        FUN_100380783(lVar6);
        FUN_100484df3(lVar6);
        *(undefined8 *)(lVar6 + 0x14) = 0;
        *(undefined4 *)(lVar6 + 500) = 0;
      }
      goto LAB_1003a684d;
    }
  }
LAB_1003a682b:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1003a684d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

