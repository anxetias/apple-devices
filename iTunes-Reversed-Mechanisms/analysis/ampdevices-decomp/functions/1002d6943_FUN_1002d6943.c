// name: FUN_1002d6943
// address: 1002d6943

void FUN_1002d6943(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100264de6();
  FUN_10026473a(param_1,0x706f6472,0,0);
  FUN_100264854(param_1);
  cVar1 = FUN_100263428(param_1);
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITIPodRefIsValid(podRef)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)(param_1 + 0x34) = 0;
  if (*(int *)(param_1 + 0x6d68) != 0) {
    _IOObjectRelease();
    *(undefined4 *)(param_1 + 0x6d68) = 0;
  }
  if (*(int *)(param_1 + 0x6d6c) != 0) {
    _IOObjectRelease();
    *(undefined4 *)(param_1 + 0x6d6c) = 0;
  }
  FUN_100264ec8(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

