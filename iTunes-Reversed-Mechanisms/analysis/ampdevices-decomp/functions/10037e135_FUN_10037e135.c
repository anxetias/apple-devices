// name: FUN_10037e135
// address: 10037e135

undefined8 FUN_10037e135(undefined8 param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  if (param_2 == 0) {
    if (*param_3 == 0x70626c74) {
      FUN_10037b52e(*(undefined8 *)(param_3 + 2),param_1);
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "params->magic == \'pblt\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffffce;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

