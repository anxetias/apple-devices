// name: FUN_1002fc027
// address: 1002fc027

int FUN_1002fc027(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
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
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      uStack_60 = 1;
      local_5c = 0x822;
      local_5a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x45);
    FUN_1001c62d9(&local_68,0x38);
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
    if (*(long *)(param_1 + 8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
    }
    iVar2 = FUN_1002fc1ae(uVar3,0x7464756c,&local_68);
    if ((iVar2 == -0x80) || (iVar2 == 0)) {
      if ((iVar2 == 0) && (cVar1 == '\x01')) {
        *(undefined1 *)(param_1 + 0x45) = 0;
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_88 = 0x8220202;
        local_84 = "Assertion failure";
        local_7c = 0x400;
        local_7a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

