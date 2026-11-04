// name: FUN_10023ea92
// address: 10023ea92

int FUN_10023ea92(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_40 [4];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "dragRef != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    _PasteboardSynchronize(*(undefined8 *)(param_1 + 0x78));
    iVar2 = _PasteboardGetItemCount(*(undefined8 *)(param_1 + 0x78),local_40);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        *param_2 = local_40[0];
      }
      else {
        uVar3 = FUN_1001cc310();
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

