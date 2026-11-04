// name: FUN_1004a9316
// address: 1004a9316

void FUN_1004a9316(long param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_2 == (void *)0x0) {
      if (*(char *)(param_1 + 0x1250) != '\x01') goto LAB_1004a9369;
      *(undefined1 *)(param_1 + 0x1250) = 0;
    }
    else {
      _memcpy((void *)(param_1 + 0xe30),param_2,0x420);
      *(undefined1 *)(param_1 + 0x1250) = 1;
    }
    *(int *)(param_1 + 0x1254) = *(int *)(param_1 + 0x1254) + 1;
  }
LAB_1004a9369:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

