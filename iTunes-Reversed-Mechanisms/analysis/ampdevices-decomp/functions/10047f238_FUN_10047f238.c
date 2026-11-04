// name: FUN_10047f238
// address: 10047f238

undefined8 FUN_10047f238(long param_1)

{
  long lVar1;
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
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_10047f32c:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar1 = *(long *)(param_1 + 0x58);
    if (((lVar1 != 0) && (*(long *)(lVar1 + 8) != 0)) &&
       (*(long *)(*(long *)(lVar1 + 8) + 0x10) != 0)) {
      if ((**(byte **)(lVar1 + 0x10) & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(byte **)(lVar1 + 0x10) + 0x38);
      }
      goto LAB_10047f2e8;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInfo->firstInstance)";
      goto LAB_10047f32c;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10047f2e8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

