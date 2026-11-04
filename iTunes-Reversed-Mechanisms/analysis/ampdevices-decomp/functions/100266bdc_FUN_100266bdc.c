// name: FUN_100266bdc
// address: 100266bdc

undefined1 FUN_100266bdc(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100263428();
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "ITIPodRefIsValid(iPod)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    if (((iVar1 == 0x69506164) || (iVar1 == 0x69506f74)) || (iVar1 == 0x6950686e)) {
      uVar4 = *(undefined1 *)(param_1 + 0x3f);
    }
    else {
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

