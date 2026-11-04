// name: FUN_10057641e
// address: 10057641e

undefined8 FUN_10057641e(long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  iVar3 = (**(code **)(*param_1 + 0x88))();
  iVar1 = local_2a;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*(long *)param_1[5] + 0x38))((long *)param_1[5],0,&local_40);
      iVar1 = local_2a;
      if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005764d8;
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      iVar1 = local_2a;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      iVar1 = local_2a;
    }
    local_2a = iVar3;
    if (cVar2 != '\0') {
      local_2c = 0x400;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      iVar1 = local_2a;
    }
  }
LAB_1005764d8:
  local_2a = iVar1;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

