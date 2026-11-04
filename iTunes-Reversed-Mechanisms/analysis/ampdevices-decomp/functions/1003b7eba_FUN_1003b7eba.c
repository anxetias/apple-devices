// name: FUN_1003b7eba
// address: 1003b7eba

undefined8 FUN_1003b7eba(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_2f8;
  char *local_2f4;
  undefined2 local_2ec;
  char *local_2ea;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 != 0x656e6364) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2f8 = 0x8220202;
      local_2f4 = "Assertion failure (expected to be true)";
      local_2ec = 0x822;
      local_2ea = "plugin->magic == \'encd\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2f8 = 0x8220202;
        local_2f4 = "Assertion failure";
        local_2ec = 0x822;
        local_2ea = 
        "((plugin->magic == \'encd\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"plugin->magic == \'encd\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/iTunes/Application/Plugins.cpp\", 103, true))"
        ;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_2f8,0x16);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffffce;
      goto LAB_1003b7f6b;
    }
  }
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &local_2f8;
    FUN_1001c62d9(param_3,0x2c0);
  }
  uVar2 = (**(code **)(param_1 + 10))(param_2,param_3,*(undefined8 *)(param_1 + 0xc));
LAB_1003b7f6b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

