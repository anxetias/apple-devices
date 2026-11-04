// name: FUN_100307a3e
// address: 100307a3e

undefined8 FUN_100307a3e(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar1 = *(long *)(param_1 + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(searchTrack)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_10030778b(lVar1);
    if (iVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar4 = FUN_1003078e3(lVar1,*(undefined8 *)(param_1 + 400),*(int *)(param_1 + 8) + 1);
        return uVar4;
      }
      goto LAB_100307b99;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
LAB_100307b99:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

