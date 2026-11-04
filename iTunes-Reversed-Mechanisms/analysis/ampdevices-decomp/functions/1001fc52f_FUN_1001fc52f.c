// name: FUN_1001fc52f
// address: 1001fc52f

undefined1 FUN_1001fc52f(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "password != nullptr";
LAB_1001fc658:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 8) != 0x64756c63) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_1001fc5ee;
      }
      uVar2 = FUN_1001fc26b(*(undefined8 *)(param_1 + 0x152c8),param_2);
      goto LAB_1001fc612;
    }
LAB_1001fc5ee:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      goto LAB_1001fc658;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1001fc612:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

