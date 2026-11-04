// name: FUN_10031fe30
// address: 10031fe30

undefined8 FUN_10031fe30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInstanceIsValid(inTrackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0xffffffce;
    }
  }
  else {
    uVar2 = FUN_1002b458b();
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar4 = FUN_10032046f(lVar1,uVar2,1,param_2,param_3);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

