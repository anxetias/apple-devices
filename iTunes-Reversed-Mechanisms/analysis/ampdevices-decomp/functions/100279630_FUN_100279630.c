// name: FUN_100279630
// address: 100279630

undefined * FUN_100279630(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c76a0 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "gAppContext != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  puVar3 = &DAT_1008b4758;
  if (DAT_1008c76a0 != 0) {
    puVar3 = (undefined *)(DAT_1008c76a0 + 0x16);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

