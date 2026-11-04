// name: FUN_1005e3e6c
// address: 1005e3e6c

long FUN_1005e3e6c(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    param_2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    do {
      param_2 = *(long *)(param_2 + 0x48);
      if (param_2 == 0) {
        param_2 = 0;
        break;
      }
    } while ((*(byte *)(param_2 + 0xc5) & 0x10) != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_2;
}

