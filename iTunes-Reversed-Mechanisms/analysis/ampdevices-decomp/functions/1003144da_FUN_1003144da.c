// name: FUN_1003144da
// address: 1003144da

ulong FUN_1003144da(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_R14;
  ulong uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  undefined7 uVar4;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100314550:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackDataIsValid( inTrackData )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      unaff_R14 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(unaff_R14,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,unaff_R14,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100314550;
    }
    uVar4 = (undefined7)((ulong)unaff_R14 >> 8);
    uVar3 = CONCAT71(uVar4,1);
    if (*(int *)(param_1 + 0x94) < 1) {
      uVar3 = CONCAT71(uVar4,*(undefined1 *)(param_1 + 0x1bb2)) & 0xffffffffffffff02;
      uVar3 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

