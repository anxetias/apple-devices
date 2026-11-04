// name: FUN_1004f465d
// address: 1004f465d

long FUN_1004f465d(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    iVar2 = 0;
    if (((param_1 != (int *)0x0) && (iVar2 = 0, *param_1 == 0x4f4c5354)) && (param_1[1] != 0)) {
      iVar2 = (int)((ulong)(*(long *)(param_1 + 4) - *(long *)(param_1 + 2)) >> 3) * -0x49249249;
    }
    local_38 = 0x4000100;
    local_34 = (char *)CONCAT44(local_34._4_4_,iVar2);
    __os_log_impl(0x100000000,uVar3,1,"drag> creating internal drag with %u objects",&local_38,8);
  }
  iVar2 = FUN_1002c3500(&local_40);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      *(undefined1 *)(local_40 + 0x81) = 1;
      iVar2 = FUN_10063af15(param_1,0,local_40,1);
      if (iVar2 != 0) {
        if (iVar2 != -0x80) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
        FUN_1002c38bf(local_40);
      }
      if (iVar2 == 0) goto LAB_1004f477b;
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x400;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
    }
  }
  local_40 = 0;
LAB_1004f477b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_40;
}

