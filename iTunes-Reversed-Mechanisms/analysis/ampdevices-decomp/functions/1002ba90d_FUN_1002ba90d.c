// name: FUN_1002ba90d
// address: 1002ba90d

undefined8 FUN_1002ba90d(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inChannelPersistentID != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_10048bbac(param_1,10,0);
    if (lVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
        uVar3 = FUN_1002ba73f(lVar2,param_2);
        return uVar3;
      }
      goto LAB_1002ba9e8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return 0;
  }
LAB_1002ba9e8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

