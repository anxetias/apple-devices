// name: FUN_100527184
// address: 100527184

void FUN_100527184(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_10052728a:
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_10052728a;
    }
    if (*(char *)(param_2 + 0x15980) == '\0') {
      uVar6 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar6,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "handlerData->installedApplicationsRefreshPending";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined1 *)(param_2 + 0x15980) = 0;
    if (*(int *)(param_1 + 0x24) == 0) {
      FUN_100526a8d(param_2,*(undefined8 *)(param_1 + 0x30));
    }
    lVar7 = *(long *)(param_2 + 0x15998);
    if (lVar7 != 0) {
      do {
        plVar1 = *(long **)(param_2 + 0x15990);
        lVar2 = plVar1[2];
        lVar3 = *plVar1;
        plVar4 = (long *)plVar1[1];
        *(long **)(lVar3 + 8) = plVar4;
        *plVar4 = lVar3;
        *(long *)(param_2 + 0x15998) = lVar7 + -1;
        operator_delete(plVar1);
        FUN_1001e9809(lVar2);
        lVar7 = *(long *)(param_2 + 0x15998);
      } while (lVar7 != 0);
    }
    FUN_1004e1e68(param_2);
  }
  FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

