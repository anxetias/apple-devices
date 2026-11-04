// name: FUN_1004e39cc
// address: 1004e39cc

long FUN_1004e39cc(long param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004e3a43:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar4 = 0;
    FUN_1001782e9(0,0);
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
      if (cVar1 == '\0') goto LAB_1004e3a43;
    }
    if (param_2 == '\0') {
      uVar3 = *(ulong *)(param_1 + 0x153a0);
    }
    else {
      uVar3 = 0;
      if (*(ulong *)(param_1 + 0x14d10) <= *(ulong *)(param_1 + 0x153a0)) {
        uVar3 = *(ulong *)(param_1 + 0x153a0) - *(ulong *)(param_1 + 0x14d10);
      }
    }
    lVar4 = 0;
    if (*(ulong *)(param_1 + 0x153b0) <= uVar3) {
      lVar4 = uVar3 - *(ulong *)(param_1 + 0x153b0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}

