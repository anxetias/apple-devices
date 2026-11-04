// name: FUN_10035879d
// address: 10035879d

void FUN_10035879d(long param_1,undefined1 param_2,undefined1 param_3)

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
  if (((param_1 != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) &&
     (*(long *)(lVar1 + 0x10) != 0)) {
    FUN_1003584ca(lVar1,param_2,param_3);
    return;
  }
  uVar3 = FUN_1001cc310();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "TrackInstanceIsValid(trackInstance)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

