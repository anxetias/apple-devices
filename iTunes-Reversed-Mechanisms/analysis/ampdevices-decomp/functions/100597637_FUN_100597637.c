// name: FUN_100597637
// address: 100597637

long * FUN_100597637(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    plVar3 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 != (long *)0x0) {
      do {
        if ((plVar3[1] == 0) || (*(long *)(plVar3[1] + 0x10) == 0)) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "TrackInstanceIsValid(trackInstance)";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if ((*(int *)((long)plVar3 + 0x3c) == 0x53485244) &&
                ((param_2 == 0 || (*(long *)(plVar3[4] + 8) == param_2)))) goto LAB_10059774f;
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    plVar3 = (long *)0x0;
  }
LAB_10059774f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar3;
}

