// name: FUN_10032109f
// address: 10032109f

bool FUN_10032109f(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackInstanceIsValid(trackInstance)";
LAB_100321186:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
      bVar3 = *(long *)(param_1 + 0x88) != 0;
      goto LAB_100321105;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackInstance->trackKind == kITFileKind";
      goto LAB_100321186;
    }
  }
  bVar3 = false;
  FUN_1001782e9(0,0);
LAB_100321105:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

