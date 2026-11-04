// name: FUN_100316309
// address: 100316309

undefined1 FUN_100316309(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_79;
  undefined **local_78;
  undefined1 *local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_79 = 0;
  if (param_1 == 0) {
LAB_1003163aa:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1003163aa;
    }
    local_78 = &PTR_FUN_100853e00;
    local_70 = &local_79;
    local_58 = &local_78;
    FUN_100308bbf(param_1,param_2,&local_78);
    if (local_58 == &local_78) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      uVar2 = local_79;
      if (local_58 == (undefined ***)0x0) goto LAB_1003163de;
    }
    (**(code **)((long)*local_58 + lVar4))();
    uVar2 = local_79;
  }
LAB_1003163de:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

