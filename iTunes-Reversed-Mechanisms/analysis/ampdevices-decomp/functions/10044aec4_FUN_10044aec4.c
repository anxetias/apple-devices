// name: FUN_10044aec4
// address: 10044aec4

ulong FUN_10044aec4(long param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10044af7d:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10044af7d;
    }
    lVar5 = FUN_1002f930c(param_1);
    uVar6 = 0;
    if (lVar5 != 0) {
      do {
        cVar1 = FUN_10044acc3(lVar5);
        if ((cVar1 != '\0') && (uVar2 = FUN_1003186de(lVar5), uVar2 != 0)) {
          if ((int)uVar6 == 0) {
            uVar3 = FUN_100177d5c(0);
            uVar6 = (ulong)uVar3;
          }
          if (uVar2 < (int)uVar6 + 0x15180U) {
            uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
            goto LAB_10044afa1;
          }
        }
        lVar5 = FUN_1002f9451(lVar5);
      } while (lVar5 != 0);
      uVar6 = 0;
    }
  }
LAB_10044afa1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

