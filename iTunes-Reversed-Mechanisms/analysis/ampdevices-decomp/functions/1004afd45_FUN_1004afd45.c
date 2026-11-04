// name: FUN_1004afd45
// address: 1004afd45

long FUN_1004afd45(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) == '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "( DownloadItem_IsValid(inItem) && (inItem)->isContainer )";
      goto LAB_1004afeac;
    }
  }
  else {
    if (*(int *)(param_1 + 0x7a0) < 1) {
      lVar2 = 0;
      goto LAB_1004afe27;
    }
    lVar2 = FUN_1001c2e6b(param_1 + 0x7a8);
    *(int *)(param_1 + 0x7a0) = *(int *)(param_1 + 0x7a0) + -1;
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_2a = "linkElement != __null";
LAB_1004afeac:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
    }
    else {
      lVar2 = FUN_1004afedb(lVar2);
      cVar1 = FUN_1004aa626(lVar2);
      if ((cVar1 != '\0') && (*(char *)(lVar2 + 0x778) == '\0')) goto LAB_1004afe27;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_2a = "( DownloadItem_IsValid(subItem) && ((subItem)->isContainer == false) )";
        goto LAB_1004afeac;
      }
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1004afe27:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

