// name: FUN_10053c376
// address: 10053c376

undefined8 FUN_10053c376(long *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  undefined2 local_28 [8];
  
  if (param_1[5] == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar1 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    uVar3 = 0xffffffce;
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,0x10,"ch> **ERROR** AMPLBaseCommandDataProcessor - nil dict",
                    local_28,2);
    }
  }
  else {
    FUN_1001a7a9e(local_38,param_1 + 5);
    (**(code **)(*param_1 + 0x18))(param_1,local_38);
    FUN_1001a8fac(local_38);
    uVar3 = 0;
  }
  return uVar3;
}

