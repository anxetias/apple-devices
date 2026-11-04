// name: FUN_100204f0f
// address: 100204f0f

void FUN_100204f0f(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  cfstringStruct *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_1001705e9();
  lVar4 = _CFStringGetTypeID();
  if (lVar3 == lVar4) {
    cVar1 = FUN_100170633(param_1,&cf_SyncedApplications);
    if (cVar1 == '\0') {
      iVar2 = FUN_1005bbf1e(param_3,&cf_com_apple_iTunes,param_1);
      if (iVar2 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_48 = 0x8420202;
          local_3c = 0x842;
          local_3a = &cf_com_apple_iTunes;
          local_44 = param_1;
          __os_log_impl(0x100000000,uVar5,1,"restore> removed %{public}@ in %{public}@ domain",
                        &local_48,0x16);
        }
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = (cfstringStruct *)0x1007adcac;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

