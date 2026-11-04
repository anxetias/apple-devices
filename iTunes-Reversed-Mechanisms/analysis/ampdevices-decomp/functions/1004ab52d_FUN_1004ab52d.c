// name: FUN_1004ab52d
// address: 1004ab52d

long FUN_1004ab52d(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "( DownloadItem_IsValid(inSubItem) && ((inSubItem)->isContainer == false) )";
LAB_1004ab632:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(long *)(param_1 + 0x7b8) == 0) {
      lVar3 = 0;
      goto LAB_1004ab581;
    }
    lVar3 = FUN_1004afedb();
    cVar1 = FUN_1004aa626(lVar3);
    if ((cVar1 != '\0') && (*(char *)(lVar3 + 0x778) == '\0')) goto LAB_1004ab581;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "( DownloadItem_IsValid(nextItem) && ((nextItem)->isContainer == false) )";
      goto LAB_1004ab632;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1004ab581:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

