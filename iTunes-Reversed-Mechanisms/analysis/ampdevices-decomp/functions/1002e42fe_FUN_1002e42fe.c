// name: FUN_1002e42fe
// address: 1002e42fe

undefined8 * FUN_1002e42fe(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1001aa318(param_1 + 3);
  FUN_1001aa318(param_1 + 4);
  FUN_1001aa318(param_1 + 5);
  param_1[6] = 0;
  if ((param_2 == (undefined8 *)0x0) || (param_2[2] == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid( inTrackInfo )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,1);
  }
  else {
    uVar2 = FUN_10030064f(param_2);
    *param_1 = uVar2;
    param_1[1] = *param_2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

