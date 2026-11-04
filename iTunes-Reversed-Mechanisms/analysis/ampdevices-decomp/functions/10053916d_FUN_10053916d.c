// name: FUN_10053916d
// address: 10053916d

undefined8 FUN_10053916d(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 == '\0') goto LAB_1005391fe;
    local_2a = "bitFields != __null";
  }
  else {
    if (param_2 < 0x100) {
      uVar2 = FUN_10015fa28();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 == '\0') goto LAB_1005391fe;
    local_2a = "(int) field < (32 * 8)";
  }
  local_2c = 0x822;
  local_34 = "Assertion failure";
  local_38 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
LAB_1005391fe:
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

