// name: FUN_1005be2f3
// address: 1005be2f3

void FUN_1005be2f3(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "carrierMatchIdentifiers != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10017060f(*param_1);
    *param_1 = 0;
    FUN_10017060f(param_1[1]);
    param_1[1] = 0;
    FUN_10017060f(param_1[2]);
    param_1[2] = 0;
    FUN_10017060f(param_1[3]);
    param_1[3] = 0;
    FUN_10017060f(param_1[4]);
    param_1[4] = 0;
    FUN_10017060f(param_1[5]);
    param_1[5] = 0;
    FUN_10017060f(param_1[6]);
    param_1[6] = 0;
    FUN_10017060f(param_1[7]);
    param_1[7] = 0;
    FUN_10017060f(param_1[8]);
    param_1[8] = 0;
    FUN_10017060f(param_1[9]);
    param_1[9] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

