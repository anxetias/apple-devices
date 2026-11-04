// name: FUN_100312763
// address: 100312763

undefined8 FUN_100312763(long param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  uint in_R8D;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return 0xffffffce;
    }
  }
  else if (((in_R8D >> 9 & 1) == 0) || (*(long *)(lVar1 + 0x58) != param_1)) {
    uVar3 = FUN_10031299e();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
      return uVar3;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    uVar3 = FUN_100312870(lVar1);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

