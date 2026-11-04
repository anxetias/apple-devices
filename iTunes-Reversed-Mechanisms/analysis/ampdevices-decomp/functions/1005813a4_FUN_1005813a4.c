// name: FUN_1005813a4
// address: 1005813a4

undefined8 FUN_1005813a4(undefined1 *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "smartOptions != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001c62d9(param_1,0x28);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 0x18) = 0x19;
    param_1[0x1c] = 2;
    *(undefined8 *)(param_1 + 0x20) = 0x700000002;
    uVar2 = FUN_1001cf0e8(1,param_1 + 8);
    if (param_2 != '\0' && (int)uVar2 == 0) {
      local_38 = local_38 & 0xffff0000;
      param_1[2] = 1;
      uVar2 = FUN_1001cf9ec(*(undefined8 *)(param_1 + 8),0x1000002,4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

