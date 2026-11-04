// name: FUN_1002b2870
// address: 1002b2870

undefined8
FUN_1002b2870(long param_1,undefined1 param_2,undefined2 param_3,undefined1 param_4,
             undefined8 param_5)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    iVar3 = FUN_1002b2193(lVar1);
    if (iVar3 == 0) {
      if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
      }
      uVar4 = FUN_1002b231f(*(undefined8 *)(lVar1 + 0x2638),uVar4,*(int *)(param_1 + 0x30) + 1,
                            param_2,param_3,param_4,0,param_5);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return uVar4;
      }
      goto LAB_1002b29c8;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
LAB_1002b29c8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

