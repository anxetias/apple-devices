// name: FUN_100597a61
// address: 100597a61

long FUN_100597a61(long param_1)

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
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    plVar3 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x12f) == '\x02') {
LAB_100597ad5:
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)(param_1 + 0x58);
    do {
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        *(undefined1 *)(param_1 + 0x12f) = 2;
        goto LAB_100597ad5;
      }
    } while ((*(byte *)((long)plVar3 + 0x4a) & 4) == 0);
    *(undefined1 *)(param_1 + 0x12f) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return (long)plVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

