// name: FUN_10059571f
// address: 10059571f

undefined8 FUN_10059571f(undefined8 param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
     (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_10031bd9c(param_2,&local_58);
    uVar2 = FUN_100594f1e(param_1,&local_58,0,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

