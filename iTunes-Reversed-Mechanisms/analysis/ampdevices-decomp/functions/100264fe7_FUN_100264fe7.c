// name: FUN_100264fe7
// address: 100264fe7

void FUN_100264fe7(void *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008a2e80 != 0) {
      FUN_1001ea9a5(param_1);
    }
    if (*(char *)((long)param_1 + 0x3e) != '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "iPod->processingMessages == false";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    lVar3 = FUN_1001eaad3((long)param_1 + 0x6e8);
    if (lVar3 != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "JRPeekFirstElement( &iPod->messages ) == nullptr";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6d8));
    *(undefined8 *)((long)param_1 + 0x6d8) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6e0));
    *(undefined8 *)((long)param_1 + 0x6e0) = 0;
    if (*(long *)((long)param_1 + 0x6e00) != 0) {
      _ATHostConnectionInvalidate();
      _ATHostConnectionRelease(*(undefined8 *)((long)param_1 + 0x6e00));
      *(undefined8 *)((long)param_1 + 0x6e00) = 0;
    }
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6dc8));
    *(undefined8 *)((long)param_1 + 0x6dc8) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6dd0));
    *(undefined8 *)((long)param_1 + 0x6dd0) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6dd8));
    *(undefined8 *)((long)param_1 + 0x6dd8) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6de0));
    *(undefined8 *)((long)param_1 + 0x6de0) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6de8));
    *(undefined8 *)((long)param_1 + 0x6de8) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6e08));
    *(undefined8 *)((long)param_1 + 0x6e08) = 0;
    FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6e10));
    *(undefined8 *)((long)param_1 + 0x6e10) = 0;
    if (*(long *)((long)param_1 + 0x6e18) != 0) {
      FUN_100172ddf();
      FUN_10017060f(*(undefined8 *)((long)param_1 + 0x6e18));
      *(undefined8 *)((long)param_1 + 0x6e18) = 0;
    }
    cVar1 = FUN_1001c6646((long)param_1 + 0x6d70);
    if (cVar1 != '\0') {
      FUN_1001c72e9((long)param_1 + 0x6d70);
    }
    operator_delete(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

