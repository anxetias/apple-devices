// name: FUN_1005ab22a
// address: 1005ab22a

void FUN_1005ab22a(long *param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)((long)param_1 + 0xc) != 0) {
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    FUN_1001e9eb9(param_1 + 0x11);
  }
  if (*(char *)((long)param_1 + 10) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mCopyFiberRunning";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)((long)param_1 + 10) = 0;
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x14dc9) != '\0') && (*(char *)(lVar1 + 0x38b) != '\0')) {
    if (*(char *)(lVar1 + 0x38c) != '\0') {
      cVar2 = FUN_100537ef0(0);
      if (cVar2 == '\0') goto LAB_1005ab2be;
    }
    FUN_1005a7b6c(param_1,0);
  }
LAB_1005ab2be:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

