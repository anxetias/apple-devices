// name: FUN_10031b5dd
// address: 10031b5dd

long FUN_10031b5dd(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_10031b6c9:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      plVar3 = (long *)(param_1 + 0x58);
      do {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
          break;
        }
      } while (plVar3[5] != param_2);
      goto LAB_10031b644;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackInstancePersistentID != 0";
      goto LAB_10031b6c9;
    }
  }
  plVar3 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_10031b644:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (long)plVar3;
}

