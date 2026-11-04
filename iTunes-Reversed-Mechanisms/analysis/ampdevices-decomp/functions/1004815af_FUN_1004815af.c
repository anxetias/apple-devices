// name: FUN_1004815af
// address: 1004815af

ulong FUN_1004815af(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
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
      local_2a = "TrackInfoIsValid(inTrackInfo)";
LAB_100481692:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if ((**(byte **)(param_1 + 0x70) & 2) == 0) {
      uVar4 = 0;
      goto LAB_100481603;
    }
    uVar2 = FUN_1004744bf(param_1,0);
    uVar4 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if ((uVar2 >> 0x10 & 1) != 0) goto LAB_100481603;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "(mediaKind & kTrackInfoMediaKind_DigitalBooklet) != 0";
      goto LAB_100481692;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_100481603:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

