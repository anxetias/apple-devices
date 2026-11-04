// name: FUN_1002b067f
// address: 1002b067f

void FUN_1002b067f(long param_1,int param_2,long *param_3,int *param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 != 0 && param_1 != 0) {
    lVar2 = FUN_1001c63e1(param_2);
    *param_3 = lVar2;
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "*dest != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_1001c631b(param_1,lVar2,param_2);
      *param_4 = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

