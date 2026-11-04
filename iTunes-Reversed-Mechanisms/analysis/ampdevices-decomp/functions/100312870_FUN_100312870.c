// name: FUN_100312870
// address: 100312870

ulong FUN_100312870(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    plVar4 = *(long **)(param_1 + 0x58);
    uVar2 = FUN_10031299e(plVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if ((((uint)param_5 >> 9 & 1) != 0) && (plVar4 = (long *)*plVar4, plVar4 != (long *)0x0)) {
      do {
        FUN_10031299e(plVar4,param_2,param_3,param_4,(uint)param_5 | 8,0,0,0);
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      uVar2 = uVar2 & 0xffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

