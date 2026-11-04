// name: FUN_100306976
// address: 100306976

long FUN_100306976(long param_1,long param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100306a64:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_100306b12:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100306a64;
    }
    if (((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) &&
       (*(long *)(*(long *)(param_2 + 8) + 0x10) != 0)) {
      for (lVar3 = FUN_1002f9fc5(param_1); lVar3 != 0; lVar3 = FUN_1002fa118(lVar3)) {
        cVar1 = FUN_10030272d(param_2,lVar3,param_3,param_4,param_5,param_6,0);
        if (cVar1 != '\0') goto LAB_100306ac8;
      }
      lVar3 = 0;
      goto LAB_100306ac8;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackInstanceIsValid(searchInstance)";
      goto LAB_100306b12;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100306ac8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

