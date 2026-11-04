// name: FUN_100528074
// address: 100528074

void FUN_100528074(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100527a20();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "AppProgressBarIsValid(progressBar)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x8e0) = 0;
    if (param_2 != '\0') {
      *(undefined8 *)(param_1 + 0x848) = 0;
    }
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      FUN_100528b3a(param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

