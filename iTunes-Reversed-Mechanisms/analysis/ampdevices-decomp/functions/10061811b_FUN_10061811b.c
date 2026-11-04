// name: FUN_10061811b
// address: 10061811b

void FUN_10061811b(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,long param_6)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_58;
  long local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  undefined4 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_58 = 0x8420302;
    local_4c = 0x842;
    local_42 = 0x400;
    local_54 = param_4;
    local_4a = param_3;
    local_40 = param_5;
    __os_log_impl(0x100000000,uVar1,1,
                  "sync> dataClassName = %{public}@, status = %{public}@, errorCode = %d",&local_58,
                  0x1c);
  }
  cVar2 = FUN_100170633(param_3,&cf_ProgressSyncCompleted);
  if (cVar2 == '\0') {
    if (param_4 == 0) {
      cVar2 = FUN_100170633(param_3,&cf_ProgressSyncStarting);
      uVar3 = 0x70726570;
      if (cVar2 == '\0') goto LAB_1006182c7;
    }
    else {
      cVar2 = FUN_100170633(param_4,&cf_com_apple_Contacts);
      uVar3 = 0x72636f6e;
      if (cVar2 == '\0') {
        cVar2 = FUN_100170633(param_4,&cf_com_apple_Calendars);
        uVar3 = 0x7263616c;
        if (cVar2 == '\0') {
          cVar2 = FUN_100170633(param_4,&cf_com_apple_Bookmarks);
          uVar3 = 0x72626d6b;
          if (cVar2 == '\0') {
            cVar2 = FUN_100170633(param_4,&cf_com_apple_Notes);
            uVar3 = 0x726e6f74;
            if (cVar2 == '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar1 = DAT_1008c75b8;
              cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8420102;
                local_54 = param_4;
                __os_log_impl(0x100000000,uVar1,0x10,
                              "ClearDataClassesStatusCallback() - unexpected data class %{public}@",
                              &local_58,0xc);
              }
              goto LAB_1006182c7;
            }
          }
        }
      }
    }
    *(undefined4 *)(param_6 + 0x458) = uVar3;
    if (*(int *)(param_6 + 0x30) == 0) {
      FUN_100618e6d(*(undefined8 *)(param_6 + 0x10),uVar3,0);
    }
  }
LAB_1006182c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

