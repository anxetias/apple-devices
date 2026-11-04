// name: FUN_10047669e
// address: 10047669e

byte FUN_10047669e(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    bVar1 = 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xc6) >> 5 & 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

