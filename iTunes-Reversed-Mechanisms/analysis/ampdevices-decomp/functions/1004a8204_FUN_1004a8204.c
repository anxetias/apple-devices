// name: FUN_1004a8204
// address: 1004a8204

void FUN_1004a8204(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = (long)&PTR_FUN_10085d098;
  if ((int)param_1[1] == 0x61726179) {
    iVar2 = FUN_10015a861(param_1 + 1);
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "ArrayGetCount(&mList) == 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    (**(code **)(*param_1 + 0x58))(param_1);
    FUN_10015a7f4(param_1 + 1);
  }
  FUN_1001e9d75(param_1 + 7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

