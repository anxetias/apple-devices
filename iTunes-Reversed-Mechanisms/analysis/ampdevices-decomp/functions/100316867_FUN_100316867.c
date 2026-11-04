// name: FUN_100316867
// address: 100316867

void FUN_100316867(long param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **local_78;
  undefined1 local_70;
  long local_68;
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100316929:
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
  }
  else {
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
      if (cVar1 == '\0') goto LAB_100316929;
    }
    if ((param_2 != '\0') || ((*(ulong *)(param_1 + 0x1bb0) & 0x4000000000) == 0)) {
      local_78 = &PTR_FUN_100853f80;
      local_70 = param_3;
      local_68 = param_1;
      local_58 = &local_78;
      FUN_100308bbf(param_1,param_2,&local_78);
      if (local_58 == &local_78) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (local_58 == (undefined ***)0x0) goto LAB_100316958;
      }
      (**(code **)((long)*local_58 + lVar3))();
    }
  }
LAB_100316958:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

