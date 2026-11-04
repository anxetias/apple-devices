// name: FUN_10061831b
// address: 10061831b

void FUN_10061831b(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,int param_5
                  ,long param_6)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  undefined4 local_4a;
  undefined4 uStack_46;
  undefined2 local_42;
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar7 = FUN_100601c1f(param_6);
  if (cVar7 == '\0') {
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      local_4c = 0x822;
      local_4a = 0x7ca858;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
  uVar6 = uStack_4e;
  uVar5 = uStack_50;
  iVar4 = local_54;
  uStack_50 = (undefined2)((ulong)param_4 >> 0x20);
  uVar2 = uStack_50;
  uStack_4e = (undefined2)((ulong)param_4 >> 0x30);
  uVar3 = uStack_4e;
  local_54 = (int)param_4;
  iVar1 = local_54;
  if (cVar7 != '\0') {
    local_58 = 0x8420302;
    local_4c = 0x842;
    local_4a = (undefined4)param_3;
    uStack_46 = (undefined4)((ulong)param_3 >> 0x20);
    local_42 = 0x400;
    local_40 = param_5;
    __os_log_impl(0x100000000,uVar8,1,
                  "sync> dataClassName = %{public}@, status = %{public}@, errorCode = %d",&local_58,
                  0x1c);
    iVar4 = local_54;
    uVar5 = uStack_50;
    uVar6 = uStack_4e;
  }
  uStack_4e = uVar6;
  uStack_50 = uVar5;
  local_54 = iVar4;
  cVar7 = FUN_100170633(param_3,&cf_ProgressSyncCompleted);
  if (cVar7 != '\0') goto LAB_1006183f7;
  if (param_4 == 0) {
    cVar7 = FUN_100170633(param_3,&cf_ProgressSyncStarting);
    uVar10 = 0x70726570;
    if (cVar7 != '\0') goto LAB_100618509;
    uVar10 = 0;
  }
  else {
    cVar7 = FUN_100170633(param_4,&cf_com_apple_Contacts);
    uVar10 = 0x636f6e74;
    if (cVar7 == '\0') {
      cVar7 = FUN_100170633(param_4,&cf_com_apple_Calendars);
      uVar10 = 0x63616c6e;
      if (cVar7 == '\0') {
        cVar7 = FUN_100170633(param_4,&cf_com_apple_Bookmarks);
        uVar10 = 0x626d726b;
        if (cVar7 == '\0') {
          cVar7 = FUN_100170633(param_4,&cf_com_apple_Notes);
          uVar10 = 0x6e6f7465;
          if (cVar7 == '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar8 = DAT_1008c75b8;
            cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            uVar10 = 0;
            if (cVar7 != '\0') {
              local_58 = 0x8420102;
              local_54 = iVar1;
              uStack_50 = uVar2;
              uStack_4e = uVar3;
              __os_log_impl(0x100000000,uVar8,0x10,"sync> unexpected data class %{public}@",
                            &local_58,0xc);
              uVar10 = 0;
            }
            goto LAB_10061852a;
          }
        }
      }
    }
LAB_100618509:
    *(uint *)(param_6 + 0x458) = uVar10;
    if (*(int *)(param_6 + 0x30) == 0) {
      FUN_100618e6d(*(undefined8 *)(param_6 + 0x10),uVar10,0);
    }
  }
LAB_10061852a:
  cVar7 = FUN_100170633(param_3,&cf_ProgressSyncPlanCancelled);
  if ((param_5 == 0) || (cVar7 == '\0')) goto LAB_1006183f7;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar8 = DAT_1008c75b8;
  cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
  if (uVar10 < 0x636f6e74) {
    if (uVar10 == 0x626d726b) {
      if (cVar7 != '\0') {
        uVar9 = FUN_1005c68ce(param_5);
        local_58 = 0x4000202;
        uStack_50 = 0x820;
        uStack_4e = (undefined2)uVar9;
        local_4c = (undefined2)((ulong)uVar9 >> 0x10);
        local_4a = (undefined4)((ulong)uVar9 >> 0x20);
        local_54 = param_5;
        __os_log_impl(0x100000000,uVar8,0x10,"sync> bookmarks sync error %d (%s)",&local_58,0x12);
      }
      *(int *)(*(long *)(param_6 + 0x28) + 0x3c) = param_5;
      goto LAB_1006183f7;
    }
    if (uVar10 == 0x63616c6e) {
      if (cVar7 != '\0') {
        uVar9 = FUN_1005c68ce(param_5);
        local_58 = 0x4000202;
        uStack_50 = 0x820;
        uStack_4e = (undefined2)uVar9;
        local_4c = (undefined2)((ulong)uVar9 >> 0x10);
        local_4a = (undefined4)((ulong)uVar9 >> 0x20);
        local_54 = param_5;
        __os_log_impl(0x100000000,uVar8,0x10,"sync> calendars sync error %d (%s)",&local_58,0x12);
      }
      *(int *)(*(long *)(param_6 + 0x28) + 0x38) = param_5;
      goto LAB_1006183f7;
    }
  }
  else {
    if (uVar10 == 0x6e6f7465) {
      if (cVar7 != '\0') {
        uVar9 = FUN_1005c68ce(param_5);
        local_58 = 0x4000202;
        uStack_50 = 0x820;
        uStack_4e = (undefined2)uVar9;
        local_4c = (undefined2)((ulong)uVar9 >> 0x10);
        local_4a = (undefined4)((ulong)uVar9 >> 0x20);
        local_54 = param_5;
        __os_log_impl(0x100000000,uVar8,0x10,"sync> notes sync error %d (%s)",&local_58,0x12);
      }
      *(int *)(*(long *)(param_6 + 0x28) + 0x40) = param_5;
      goto LAB_1006183f7;
    }
    if (uVar10 == 0x636f6e74) {
      if (cVar7 != '\0') {
        uVar9 = FUN_1005c68ce(param_5);
        local_58 = 0x4000202;
        uStack_50 = 0x820;
        uStack_4e = (undefined2)uVar9;
        local_4c = (undefined2)((ulong)uVar9 >> 0x10);
        local_4a = (undefined4)((ulong)uVar9 >> 0x20);
        local_54 = param_5;
        __os_log_impl(0x100000000,uVar8,0x10,"sync> contacts sync error %d (%s)",&local_58,0x12);
      }
      *(int *)(*(long *)(param_6 + 0x28) + 0x34) = param_5;
      goto LAB_1006183f7;
    }
  }
  if (cVar7 != '\0') {
    uVar9 = FUN_1005c68ce(param_5);
    local_58 = 0x4000202;
    uStack_50 = 0x820;
    uStack_4e = (undefined2)uVar9;
    local_4c = (undefined2)((ulong)uVar9 >> 0x10);
    local_4a = (undefined4)((ulong)uVar9 >> 0x20);
    local_54 = param_5;
    __os_log_impl(0x100000000,uVar8,0x10,"sync> generic AMS sync error %d (%s)",&local_58,0x12);
  }
  *(int *)(*(long *)(param_6 + 0x28) + 0x4c) = param_5;
LAB_1006183f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

