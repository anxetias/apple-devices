// name: FUN_10058f82f
// address: 10058f82f

bool FUN_10058f82f(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = *(char *)(param_1 + 0x53);
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "imageInstance->pathStringIndex == ((JRStringCacheIndex) 0)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(int *)(param_1 + 0x478) != 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "imageInstance->photoPathStringIndex == ((JRStringCacheIndex) 0)";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return cVar1 == '\x03';
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

