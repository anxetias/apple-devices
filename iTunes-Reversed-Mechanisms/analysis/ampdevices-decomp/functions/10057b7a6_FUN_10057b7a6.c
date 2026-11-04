// name: FUN_10057b7a6
// address: 10057b7a6

void FUN_10057b7a6(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "ratingString != nullptr";
LAB_10057b930:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      FUN_100166ce2(param_1,&cf_system,param_2);
      FUN_1001e26e1("|",param_2);
      FUN_100166ce2(param_1,&cf_label,&local_238);
      FUN_1001e1890(&local_238,param_2);
      FUN_1001e26e1("|",param_2);
      iVar2 = FUN_100167d23(param_1,&cf_rank);
      FUN_1001e1b6d((long)iVar2,&local_238);
      FUN_1001e1890(&local_238,param_2);
      FUN_1001e26e1("|",param_2);
      FUN_100166ce2(param_1,&cf_content,&local_238);
      FUN_1001e1890(&local_238,param_2);
      goto LAB_10057b8e9;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "ratingDict != nullptr";
      goto LAB_10057b930;
    }
  }
  FUN_1001782e9(0,0);
LAB_10057b8e9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

