// name: FUN_1003304ea
// address: 1003304ea

void FUN_1003304ea(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1003306b6:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003306b6;
    }
    if ((*(char *)(param_1 + 0x6ad9) != '\0') && (*(char *)(param_1 + 0x6acf) == '\0')) {
      if (param_2 == '\0') {
        cVar1 = FUN_1004e83ba(param_1,0);
        if (cVar1 == '\0') goto LAB_1003306dc;
      }
      uVar3 = FUN_1004e7f5c(param_1);
      if (uVar3 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_44 = "requested";
          if (param_2 == '\0') {
            local_44 = "auto";
          }
          local_3a = *(char **)(param_1 + 0x152c8);
          local_48 = 0x8220202;
          local_3c = 0x842;
          __os_log_impl(0x100000000,uVar2,1,
                        "airtraffic> not starting %{public}s sync for device %{public}@",&local_48,
                        0x16);
        }
      }
      else {
        if (*(long *)(param_1 + 0x30) != 0) {
          cVar1 = FUN_100317605();
          if (cVar1 != '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar2 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_44 = *(char **)(param_1 + 0x152c8);
              local_48 = 0x8420102;
              __os_log_impl(0x100000000,uVar2,1,"sync> showing device %{public}@",&local_48,0xc);
            }
            FUN_100317329(*(undefined8 *)(param_1 + 0x30),1);
          }
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_44 = "requested";
          if (param_2 == '\0') {
            local_44 = "auto";
          }
          local_3a = *(char **)(param_1 + 0x152c8);
          local_48 = 0x8220202;
          local_3c = 0x842;
          __os_log_impl(0x100000000,uVar2,1,
                        "airtraffic> starting %{public}s sync for device %{public}@",&local_48,0x16)
          ;
        }
        cVar1 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
        uVar4 = uVar3 & 0xfffffffffffffff8 | 4;
        if (cVar1 == '\0') {
          uVar4 = uVar3;
        }
        FUN_100603fea(param_1,uVar4);
      }
    }
  }
LAB_1003306dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

