// name: FUN_10053ca3e
// address: 10053ca3e

undefined8 FUN_10053ca3e(long *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = (int)param_1[2];
  if (iVar3 < 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mWriteTransactionCount >= 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = (int)param_1[2];
  }
  uVar2 = 0;
  *(int *)(param_1 + 2) = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

