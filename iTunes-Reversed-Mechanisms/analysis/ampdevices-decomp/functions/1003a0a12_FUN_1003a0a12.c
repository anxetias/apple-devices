// name: FUN_1003a0a12
// address: 1003a0a12

long FUN_1003a0a12(undefined8 param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == (long *)0x0) || (param_2[1] == 0)) || (*(long *)(param_2[1] + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(inTrackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = *param_2;
    if (lVar4 == 0) {
      lVar2 = FUN_1003a095a();
      if (lVar2 == 0) {
        lVar4 = 0;
      }
      else {
        do {
          lVar4 = *(long *)(lVar2 + 0x58);
          if (lVar4 != 0) break;
          lVar2 = FUN_1003a095a();
          lVar4 = 0;
        } while (lVar2 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

