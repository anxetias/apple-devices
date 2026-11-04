// name: FUN_1005762f0
// address: 1005762f0

int FUN_1005762f0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x88))();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(long *)param_1[5] + 0x18))((long *)param_1[5],param_2,param_3,param_4);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1005763b4;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_1005763b4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

