// name: FUN_100529281
// address: 100529281

void FUN_100529281(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
  }
  else {
    if (param_4 == 0) {
      *(undefined2 *)(param_1 + 0x218) = 0;
    }
    else {
      FUN_1001e1c39(param_4);
    }
    if (param_5 == 0) {
      *(undefined2 *)(param_1 + 0x618) = 0;
    }
    else {
      FUN_1001e1c39(param_5);
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1005293c1(0,param_1,param_2,param_3,0,1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

