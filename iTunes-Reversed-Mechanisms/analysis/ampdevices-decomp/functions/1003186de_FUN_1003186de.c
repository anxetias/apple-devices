// name: FUN_1003186de
// address: 1003186de

uint FUN_1003186de(long param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_1003187d8:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_10031874d:
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_2a = "trackInfo->videoInfo != nullptr";
        goto LAB_1003187d8;
      }
      goto LAB_10031874d;
    }
    uVar5 = *(int *)(lVar1 + 0x14) + *(int *)(lVar1 + 0x10);
    if (*(int *)(lVar1 + 0x18) != 0) {
      uVar3 = *(int *)(lVar1 + 0x18) + *(int *)(lVar1 + 0x1c);
      if (uVar5 < uVar3) {
        uVar3 = uVar5;
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        return uVar3;
      }
      goto LAB_100318802;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar5;
  }
LAB_100318802:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

