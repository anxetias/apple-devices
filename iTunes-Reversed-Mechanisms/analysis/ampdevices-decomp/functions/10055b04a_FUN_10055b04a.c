// name: FUN_10055b04a
// address: 10055b04a

void FUN_10055b04a(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
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
  else if (*(long *)(param_1 + 0x6e00) != param_2) {
    if (*(long *)(param_1 + 0x6e00) != 0) {
      _ATHostConnectionRelease();
    }
    *(long *)(param_1 + 0x6e00) = param_2;
    if (param_2 != 0) {
      _ATHostConnectionRetain(param_2);
      if ((*(char *)(param_1 + 0x6df7) == '\0') && (*(char *)(param_1 + 0x6df8) != '\0')) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
          _ATHostConnectionSendPowerAssertion
                    (*(undefined8 *)(param_1 + 0x6e00),*(undefined8 *)PTR__kCFBooleanTrue_10082e038)
          ;
          return;
        }
        goto LAB_10055b16a;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_10055b16a:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

