// name: FUN_1004e3b42
// address: 1004e3b42

void FUN_1004e3b42(long param_1)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  undefined2 local_2ac;
  char *local_2aa;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004e3c6e:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2b8 = 0x8220202;
      uStack_2b4 = 0x7a0a90;
      local_2b0 = 1;
      local_2ac = 0x822;
      local_2aa = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_2b8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2b8 = 0x8220202;
        uStack_2b4 = 0x7ab58c;
        local_2b0 = 1;
        local_2ac = 0x822;
        local_2aa = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_2b8,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_1004e3c6e;
    }
    FUN_1004e3dbc(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x38));
    FUN_10017899c(*(undefined4 *)(param_1 + 0x28));
    FUN_10017899c(*(undefined4 *)(param_1 + 0x15800));
    *(undefined4 *)(param_1 + 0x15800) = 0;
    if (*(char *)(param_1 + 0x66ec) != '\0') {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2b8 = 0x8220202;
        uStack_2b4 = 0x7a0a90;
        local_2b0 = 1;
        local_2ac = 0x822;
        local_2aa = "handlerData->aboutToDispose == false";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_2b8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined1 *)(param_1 + 0x66ec) = 1;
    uVar3 = FUN_1001c156e();
    FUN_1001c6987(uVar3,0x69706472,*(undefined4 *)(param_1 + 0x28),0,0);
    if (*(char *)(param_1 + 0x6abc) == '\0') {
      FUN_1004e3ed9(param_1);
      FUN_1004e1e68(param_1);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      pcVar1 = *(code **)(param_1 + 0x18);
      ___bzero(&local_2ac,0x278);
      local_2b8 = 10;
      uStack_2b4 = 9;
      local_2b0 = 0x284;
      (*pcVar1)(uVar3,0x756e7267,&local_2b8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

