// name: FUN_1005e5544
// address: 1005e5544

void FUN_1005e5544(long param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "outObjectSpec != nullptr";
LAB_1005e562d:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    FUN_1001c62d9(param_2,0x2c);
    if (*(long *)(param_1 + 8) != 0) {
      *param_2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x88);
      param_2[6] = *(undefined4 *)(param_1 + 0x14);
      goto LAB_1005e55f0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "trackData != nullptr";
      goto LAB_1005e562d;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005e55f0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

