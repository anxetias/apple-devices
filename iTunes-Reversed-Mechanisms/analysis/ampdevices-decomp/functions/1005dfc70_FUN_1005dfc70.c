// name: FUN_1005dfc70
// address: 1005dfc70

undefined1 * FUN_1005dfc70(long param_1,uint param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  undefined4 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 < 7) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    puVar3 = &DAT_ffffff30;
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x400;
      local_2a = 0xffffff30;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x12);
    }
  }
  else {
    *param_4 = *(undefined1 *)(param_1 + 5);
    *param_3 = *(undefined1 *)(param_1 + 6);
    puVar3 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

