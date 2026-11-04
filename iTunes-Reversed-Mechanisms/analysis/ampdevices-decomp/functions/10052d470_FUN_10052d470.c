// name: FUN_10052d470
// address: 10052d470

int FUN_10052d470(long *param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                 long *param_6)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar3 = (**(code **)(*param_1 + 0x1f0))(param_1,param_2 + param_4,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      FUN_1001c631b(param_3,param_1[0xb3] + param_2,param_4);
      if (param_6 != (long *)0x0) {
        *param_6 = param_4;
      }
      plVar1 = (long *)param_1[0x9d];
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2,param_3,param_4);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar3;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

