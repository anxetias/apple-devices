// name: FUN_1002b0cf4
// address: 1002b0cf4

void FUN_1002b0cf4(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 local_5c;
  char *local_5a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(&local_68,0x38);
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
    iVar3 = FUN_1002fc1ae(lVar1,0x74646469,&local_68);
    if ((iVar3 != -0x80) && (iVar3 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x400;
        local_7a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

