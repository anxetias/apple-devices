// name: FUN_100416636
// address: 100416636

undefined8 FUN_100416636(long param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "rentalVault.IsValid()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return 0xffffffce;
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar4 = FUN_1001a8626(param_2);
    uVar3 = FUN_1001a8610(param_2);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      uVar4 = FUN_100049620(uVar1,uVar4,uVar3);
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

