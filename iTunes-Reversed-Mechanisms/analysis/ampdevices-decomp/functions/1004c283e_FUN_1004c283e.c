// name: FUN_1004c283e
// address: 1004c283e

void FUN_1004c283e(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((char)param_1[0xb0] == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "mExportInfo.isExporting";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    dVar3 = (double)FUN_1001ebd46();
    if ((double)param_1[0xb7] + DAT_10070e568 <= dVar3) {
      (**(code **)(*param_1 + 0x3c8))(param_1);
      lVar4 = FUN_1001ebd46();
      param_1[0xb7] = lVar4;
    }
    if ((long *)param_1[0xb4] != (long *)0x0) {
      cVar1 = (**(code **)(*(long *)param_1[0xb4] + 0x20))();
      if ((cVar1 != '\0') && ((char)param_1[0xbb] == '\0')) {
        *(undefined1 *)(param_1 + 0xbb) = 1;
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
          FUN_1001e9809(param_1 + 0xb9);
          return;
        }
        goto LAB_1004c296c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1004c296c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

