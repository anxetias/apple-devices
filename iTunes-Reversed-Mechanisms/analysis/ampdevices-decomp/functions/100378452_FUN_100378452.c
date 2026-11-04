// name: FUN_100378452
// address: 100378452

undefined8 FUN_100378452(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036d859();
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return 0xffffffdd;
    }
  }
  else {
    uVar2 = FUN_100378a7c(lVar3,param_2);
    FUN_10036d4d2(lVar3);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      uVar4 = FUN_10036db97(uVar2);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

