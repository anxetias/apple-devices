// name: FUN_100431686
// address: 100431686

void FUN_100431686(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x15218) == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "handlerData->syncServicesAvailable";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(param_1 + 0x359) != '\0') {
    FUN_1004f09bc(param_1);
    FUN_1004f1091(param_1);
    FUN_1004f0b5c(param_1);
    *(undefined1 *)(param_1 + 0x6ac3) = 1;
    uVar2 = FUN_1004e116d();
    *(undefined8 *)(param_1 + 0x14d80) = uVar2;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      local_34 = *(char **)(param_1 + 0x14d80);
      local_38 = 0x8000100;
      __os_log_impl(0x100000000,uVar2,1,"sync> setting home mobile sync user account to 0x%016llX",
                    &local_38,0xc);
    }
    FUN_100430e89(param_1 + 0x15090,param_1 + 0x150d0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

