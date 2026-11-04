// name: FUN_100481708
// address: 100481708

ulong FUN_100481708(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong unaff_RBX;
  long *plVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
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
    unaff_RBX = 0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar3 = (long *)(param_1 + 0x58);
    do {
      plVar3 = (long *)*plVar3;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) break;
      cVar1 = FUN_1002b0c30(plVar3);
    } while (cVar1 == '\0');
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RBX & 0xffffffff;
}

