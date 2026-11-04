// name: FUN_1006b5bde
// address: 1006b5bde

void FUN_1006b5bde(undefined8 param_1)

{
  undefined4 local_28;
  char *local_24;
  undefined2 local_1c;
  char *local_1a;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8220202;
  local_24 = "Assertion failure";
  local_1c = 0x822;
  local_1a = 
  "info != nullptr && ((info->magic == \'srai\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"info->magic == \'srai\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/Utilities/StreamUtilities.cpp\", 2453, true))"
  ;
  __os_log_error_impl(0x100000000,param_1,0x10,"%{public}s: (%{public}s)",&local_28,0x16);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

