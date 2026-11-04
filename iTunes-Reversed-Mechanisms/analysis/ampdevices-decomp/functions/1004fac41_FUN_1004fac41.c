// name: FUN_1004fac41
// address: 1004fac41

void FUN_1004fac41(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 local_28 [8];
  
  if (*(char *)(param_1 + 0x6ae5) != '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,1,"sync> avoiding deadlock when aborting operations",local_28,
                    2);
    }
    return;
  }
  FUN_1004e17a4();
  *(undefined1 *)(param_1 + 0x6ae5) = 1;
  FUN_1004fa8e8(param_1,param_2);
  FUN_1004e7a5c(param_1);
  FUN_1004e2d0e(param_1,param_2);
  FUN_1004e3321(param_1,param_2);
  *(undefined1 *)(param_1 + 0x6ae5) = 0;
  FUN_1004e1e68(param_1);
  return;
}

