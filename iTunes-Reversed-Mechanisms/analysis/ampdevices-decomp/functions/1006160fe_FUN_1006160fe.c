// name: FUN_1006160fe
// address: 1006160fe

/* WARNING: Type propagation algorithm not settling */

void FUN_1006160fe(long param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_60 [20];
  uint local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1006161dd:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4c[1] = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4c[1] = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1006161dd;
    }
    if (*(long *)(param_1 + 0x6750) != 0) {
      FUN_1001b7a44(local_4c + 1);
      FUN_1001b7a44(local_60);
      FUN_100231b73(param_1,param_2,local_4c + 1,local_60,local_4c);
      if (0 < param_3) {
        local_4c[0] = local_4c[0] & 0xffffff7f;
      }
      FUN_1005295b5((double)param_3 / DAT_10070f3a8,*(undefined8 *)(param_1 + 0x6750),local_4c + 1,
                    local_60);
      FUN_1001b7a50(local_60);
      FUN_1001b7a50(local_4c + 1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

