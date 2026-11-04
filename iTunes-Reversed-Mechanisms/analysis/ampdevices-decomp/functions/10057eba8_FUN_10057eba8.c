// name: FUN_10057eba8
// address: 10057eba8

void FUN_10057eba8(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_10057ea46(param_1,*(undefined8 *)(param_2 + 0x18));
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be not NULL)";
      local_2c = 0x822;
      local_2a = "changesInfo";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_10057ebfc;
  }
  *(undefined1 *)(lVar2 + 0xc) = 1;
LAB_10057ebfc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

