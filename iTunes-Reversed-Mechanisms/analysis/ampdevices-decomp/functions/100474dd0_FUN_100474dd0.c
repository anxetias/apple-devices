// name: FUN_100474dd0
// address: 100474dd0

ulong FUN_100474dd0(long param_1,char param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = *(uint *)(*(long *)(param_1 + 0x70) + 0xc);
    if ((param_2 != '\0' || uVar4 == 0) && (uVar4 = *(uint *)(param_1 + 0xd4), uVar4 == 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar2 = FUN_10047fd52();
        return uVar2;
      }
      goto LAB_100474eba;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return (ulong)uVar4;
  }
LAB_100474eba:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

