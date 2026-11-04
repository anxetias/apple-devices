// name: FUN_10021e708
// address: 10021e708

bool FUN_10021e708(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inSocialProfile != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_100203686(param_1 + 0x18);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

