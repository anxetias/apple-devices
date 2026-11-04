// name: FUN_1002d6ef8
// address: 1002d6ef8

long FUN_1002d6ef8(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = param_2;
  if (param_2 == 0) {
    lVar2 = _DADiskCopyDescription();
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "descriptionDictionary != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1002d6fa2;
    }
  }
  lVar3 = FUN_100166bb8(lVar2,&cf_DAAppearanceTime);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "appearanceTime != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1001705fc(lVar3);
  if (param_2 == 0) {
    FUN_10017060f(lVar2);
  }
LAB_1002d6fa2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

