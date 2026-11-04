// name: FUN_1002f79b8
// address: 1002f79b8

undefined4 FUN_1002f79b8(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1002f463c();
  cVar1 = FUN_1002f52d0(&DAT_1008c5db0,local_44,&local_40,&local_3c);
  if (cVar1 == '\0') {
    local_40 = 0;
  }
  else if ((param_1 != 0x3d) && (local_40 = local_3c, param_1 != 0x3c)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    local_40 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_40;
}

