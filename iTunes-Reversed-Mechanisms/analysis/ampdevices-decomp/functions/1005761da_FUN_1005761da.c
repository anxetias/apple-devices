// name: FUN_1005761da
// address: 1005761da

int FUN_1005761da(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x88))();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(long *)param_1[5] + 0x10))((long *)param_1[5],param_2);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_10057628a;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      local_3a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
LAB_10057628a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

