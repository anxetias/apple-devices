// name: FUN_10051333d
// address: 10051333d

void FUN_10051333d(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 == 0) {
      uVar4 = *param_1;
      iVar3 = FUN_100171ce8(param_2);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_58 = 0x4000100;
        local_54 = (char *)CONCAT44(local_54._4_4_,iVar3);
        __os_log_impl(0x100000000,uVar1,1,"setup> device registration request returned HTTP %u",
                      &local_58,8);
      }
      if (iVar3 - 200U < 100 || iVar3 - 400U < 100) {
        FUN_10050fef4(uVar4);
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_58 = 0x4000100;
        local_54 = (char *)CONCAT44(local_54._4_4_,param_3);
        __os_log_impl(0x100000000,uVar4,1,"setup> device registration request failed (%d)",&local_58
                      ,8);
      }
    }
    FUN_10017060f(param_2);
    FUN_1004fde8a(param_1);
    operator_delete(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

