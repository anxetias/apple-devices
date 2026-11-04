// name: FUN_1004b15f3
// address: 1004b15f3

void FUN_1004b15f3(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "DownloadItem_IsValid(inItem)";
LAB_1004b17aa:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x170) = 0;
    *(undefined1 *)(param_1 + 0x178) = 0;
    if (*(char *)(param_1 + 0x778) != '\0') goto LAB_1004b16df;
    *(undefined8 *)(param_1 + 0x1b80) = 0;
    *(undefined1 *)(param_1 + 0x12d0) = 0;
    FUN_10017060f(*(undefined8 *)(param_1 + 0x12f8));
    *(undefined8 *)(param_1 + 0x12f8) = 0;
    cVar1 = FUN_1004aa626(param_1);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x778) == '\0')) {
      if ((*(int *)(param_1 + 0x140) != 0x70656e64) && (*(int *)(param_1 + 0x1304) == 0x68747470)) {
        FUN_10017060f(*(undefined8 *)(param_1 + 0x1348));
        *(undefined8 *)(param_1 + 0x1348) = 0;
        FUN_10017060f(*(undefined8 *)(param_1 + 0x1350));
        *(undefined8 *)(param_1 + 0x1350) = 0;
        *(undefined4 *)(param_1 + 0x1358) = 0;
        if (*(long *)(param_1 + 0x1338) != 0) {
          FUN_100199903();
          uVar2 = FUN_10019aa5a(*(undefined8 *)(param_1 + 0x1338));
          *(undefined4 *)(param_1 + 0x1368) = uVar2;
          FUN_100199872(*(undefined8 *)(param_1 + 0x1338));
          *(undefined8 *)(param_1 + 0x1338) = 0;
        }
      }
      goto LAB_1004b16df;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      goto LAB_1004b17aa;
    }
  }
  FUN_1001782e9(0,0);
LAB_1004b16df:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

