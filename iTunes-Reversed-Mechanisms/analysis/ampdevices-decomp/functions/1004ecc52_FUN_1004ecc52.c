// name: FUN_1004ecc52
// address: 1004ecc52

undefined8 FUN_1004ecc52(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004eccec:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1004ecd6c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004eccec;
    }
    if (*(char *)(param_1 + 0x37d) != '\0') {
      lVar3 = *(long *)(param_1 + 0x15970);
      if (param_2 != '\0' || lVar3 == 0) {
        FUN_1004ef6b9(param_1,0);
        lVar3 = *(long *)(param_1 + 0x15970);
      }
      uVar2 = FUN_1001705fc(lVar3);
      goto LAB_1004ecd9c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "handlerData->deviceInfo.supportsApplications";
      goto LAB_1004ecd6c;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1004ecd9c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

