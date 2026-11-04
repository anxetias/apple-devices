// name: FUN_1004accfb
// address: 1004accfb

char FUN_1004accfb(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "DownloadItem_IsValid(inDownloadItem)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = '\0';
    FUN_1001782e9(0,0);
  }
  else if ((*(char *)(param_1 + 0x778) == '\0') && (*(long *)(param_1 + 0x1b60) != -1)) {
    cVar1 = (*(long *)(param_1 + 0x1b78) < *(long *)(param_1 + 0x1b60)) + '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

