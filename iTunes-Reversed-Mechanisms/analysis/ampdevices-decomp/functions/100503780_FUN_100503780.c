// name: FUN_100503780
// address: 100503780

undefined8 FUN_100503780(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  uVar3 = FUN_1004e1958();
  iVar2 = _AMSCopySourcesForRestoreCompatibleWith(uVar3,&local_60);
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "status == AMSStatus_OK";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x4000100;
      local_54 = (char *)CONCAT44(local_54._4_4_,iVar2);
      __os_log_impl(0x100000000,uVar4,0x10,"AMSCopySourcesForRestoreCompatibleWith failed (%d)",
                    &local_58,8);
    }
  }
  FUN_10017060f(uVar3);
  FUN_100503928(local_60,param_1,param_2);
  uVar3 = local_60;
  if (param_3 != '\0') {
    uVar3 = FUN_10017072a(DAT_1008c4d90,0,local_60);
    FUN_100164902(uVar3,FUN_1005269e4,0);
    FUN_10017060f(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

