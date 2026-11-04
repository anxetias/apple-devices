// name: FUN_1005d25cb
// address: 1005d25cb

void FUN_1005d25cb(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 == 0x61727477) {
    FUN_10017060f(*(undefined8 *)(param_1 + 0x2a));
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x24));
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    if (*(long *)(param_1 + 0x1e) != 0) {
      FUN_1001c64c1();
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
    }
    *param_1 = 0;
    FUN_100205d70(param_1 + 0x26);
    FUN_10021e316(param_1 + 0x20);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      operator_delete(param_1);
      return;
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inArtwork->magic == \'artw\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

