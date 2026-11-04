// name: FUN_100267a68
// address: 100267a68

void FUN_100267a68(void *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (void *)0x0) {
LAB_100267ba4:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "clientRef != nullptr && ((clientRef->magic == \'clie\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"clientRef->magic == \'clie\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/iPod/iPodSupport.cpp\", 1304, true))"
      ;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100267be4;
  }
  if (*(int *)((long)param_1 + 8) != 0x636c6965) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "clientRef->magic == \'clie\'";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_100267ba4;
  }
  FUN_1001ea9a5(param_1,DAT_1008a2e80 + 3);
  operator_delete(param_1);
  if (DAT_1008a2e80[3] != 0) goto LAB_100267be4;
  FUN_10055bfce();
  FUN_1002d610d();
  if ((long *)*DAT_1008a2e80 == (long *)0x0) {
LAB_100267bd4:
    operator_delete(DAT_1008a2e80);
  }
  else {
    plVar4 = (long *)*DAT_1008a2e80;
    do {
      plVar1 = (long *)*plVar4;
      if ((int)plVar4[5] != 1) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "deviceRecord->retainCount == 1";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_100264fe7(plVar4);
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
    if (DAT_1008a2e80 != (long *)0x0) goto LAB_100267bd4;
  }
  DAT_1008a2e80 = (long *)0x0;
LAB_100267be4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

