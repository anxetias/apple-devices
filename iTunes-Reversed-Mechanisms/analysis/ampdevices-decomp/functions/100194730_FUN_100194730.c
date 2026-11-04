// name: FUN_100194730
// address: 100194730

undefined4 FUN_100194730(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  long local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100695059(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar3 = FUN_1001736b8(0,0,&cf_x_finder_iTunes___,param_1);
    uVar4 = FUN_100169d9e(uVar3);
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar1 != '\0') {
      local_48 = 0x8420102;
      local_44 = param_1;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "requesting Finder reveal device %{public}@",&local_48,0xc);
    }
    uVar2 = FUN_1001945c6(uVar4,param_2);
    FUN_1001c64c1(uVar4);
    FUN_10017060f(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

