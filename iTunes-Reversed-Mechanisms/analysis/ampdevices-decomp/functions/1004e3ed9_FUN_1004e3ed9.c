// name: FUN_1004e3ed9
// address: 1004e3ed9

void FUN_1004e3ed9(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
LAB_1004e40bd:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 1) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004e40bd;
    }
    cVar2 = FUN_1001ee056();
    if (cVar2 == '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "JRIsCurrentThreadCooperative()";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(char *)((long)param_1 + 0x6abe) == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar3 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_34 = (char *)((long)param_1 + 0x244);
        local_38 = 0x8220102;
        __os_log_impl(0x100000000,uVar3,1,"support> terminating device %{public}s",&local_38,0xc);
      }
      *(undefined1 *)((long)param_1 + 0x6abe) = 1;
      FUN_1001eed65(param_1 + 0x2a7d);
      FUN_1004fac41(param_1);
      FUN_1003d1d1b(param_1);
      if (*(int *)(param_1 + 0xcdc) != 0) {
        *(undefined4 *)(param_1 + 0xcdc) = 1;
        FUN_1004dd69c(param_1);
      }
      if (param_1[6] != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3);
        if (cVar2 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "handlerData->trackData == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0);
      }
      param_1[6] = 0;
      if (*(char *)((long)param_1 + 0x3a2) != '\0') {
        FUN_100332e99(param_1);
      }
      FUN_1001c72e9(param_1 + 0xcde);
      FUN_100264ec8(param_1[0xcdb]);
      param_1[0xcdb] = 0;
      puVar4 = (undefined8 *)(param_1[4] + 0x10);
      puVar1 = (undefined8 *)0x0;
      do {
        puVar5 = puVar1;
        puVar4 = (undefined8 *)*puVar4;
        if (puVar4 == (undefined8 *)0x0) goto LAB_1004e40df;
        puVar1 = puVar4;
      } while (puVar4 != param_1);
      puVar4 = (undefined8 *)(param_1[4] + 0x10);
      if (puVar5 != (undefined8 *)0x0) {
        puVar4 = puVar5;
      }
      *puVar4 = *param_1;
      *param_1 = 0;
    }
  }
LAB_1004e40df:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

