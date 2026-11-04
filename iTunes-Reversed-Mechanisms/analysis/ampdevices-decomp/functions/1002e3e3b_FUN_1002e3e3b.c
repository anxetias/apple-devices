// name: FUN_1002e3e3b
// address: 1002e3e3b

ulong FUN_1002e3e3b(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
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
      local_2a = "TrackInfoIsValid( inTrackInfo )";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,1);
  }
  else {
    lVar2 = FUN_1001ab132(param_1 + 0x160);
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),-1 < *(short *)(param_1 + 0xc6));
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

