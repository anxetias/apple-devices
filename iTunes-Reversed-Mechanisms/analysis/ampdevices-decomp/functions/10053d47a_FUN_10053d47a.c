// name: FUN_10053d47a
// address: 10053d47a

int FUN_10053d47a(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0xa8))(param_1,0);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      lVar4 = param_1[0x95];
      if (lVar4 == 0) {
        if ((int)param_1[3] != 0x46494c45) goto LAB_10053d4f8;
        FUN_1003ce4f9(param_1 + 9,param_1 + 0x95);
        lVar4 = param_1[0x95];
        if (lVar4 == 0) goto LAB_10053d4f8;
      }
      FUN_1003b6828(lVar4,param_2,param_3,param_4,param_5);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_10053d4f8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

