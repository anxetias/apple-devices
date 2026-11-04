// name: FUN_10030897a
// address: 10030897a

long FUN_10030897a(long param_1,undefined1 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long local_80;
  undefined **local_78;
  long *local_70;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = 0;
  if (param_1 == 0) {
LAB_100308a1f:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar3 = 0;
    goto LAB_100308a83;
  }
  if (*(int *)(param_1 + 0x80) != 0x74646174) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_100308a1f;
  }
  local_78 = &PTR_FUN_100853c80;
  local_70 = &local_80;
  local_58 = &local_78;
  FUN_100308bbf(param_1,param_2,&local_78);
  if (local_58 == &local_78) {
    lVar3 = 0x20;
LAB_100308a4a:
    (**(code **)((long)*local_58 + lVar3))();
  }
  else {
    lVar3 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_100308a4a;
  }
  lVar3 = local_80;
  if (local_80 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "persistentID != 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    lVar3 = local_80;
  }
LAB_100308a83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

