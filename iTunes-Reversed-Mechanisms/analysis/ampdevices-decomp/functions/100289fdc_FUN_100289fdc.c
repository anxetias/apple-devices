// name: FUN_100289fdc
// address: 100289fdc

int FUN_100289fdc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined2 local_7c;
  int local_7a;
  long *local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inSearchCriteria != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    local_88._0_4_ = 0x844f70;
    local_88._4_4_ = 1;
    local_68 = &local_88;
    iVar2 = FUN_1001cf857(param_1,&local_88);
    if (local_68 == &local_88) {
      lVar3 = 0x20;
LAB_10028a073:
      (**(code **)(*local_68 + lVar3))();
    }
    else {
      lVar3 = 0x28;
      if (local_68 != (long *)0x0) goto LAB_10028a073;
    }
    if (iVar2 == -0x80) goto LAB_10028a0be;
    if (iVar2 == 0) {
      iVar2 = FUN_1001d1887(param_1,param_2,param_3,FUN_100289b76,0,param_4);
      goto LAB_10028a0be;
    }
  }
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_88._0_4_ = 0x8220202;
    local_88._4_4_ = 0x7a0a90;
    uStack_80 = 1;
    local_7c = 0x400;
    local_7a = iVar2;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
  }
LAB_10028a0be:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

