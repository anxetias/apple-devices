// name: FUN_10051cb08
// address: 10051cb08

void FUN_10051cb08(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != 0) {
    FUN_1005ce86a(param_3,param_1,param_2);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "idList != nullptr";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

