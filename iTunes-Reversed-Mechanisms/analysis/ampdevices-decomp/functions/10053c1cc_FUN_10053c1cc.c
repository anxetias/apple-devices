// name: FUN_10053c1cc
// address: 10053c1cc

undefined8 FUN_10053c1cc(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_38 [16];
  undefined2 local_28 [4];
  
  FUN_10032f0f2(local_38);
  cVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_38);
  if (cVar2 == '\0') {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar1 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "pk> **ERROR** AMPLBaseCommandDataPacker - couldn\'t add command specific data to dict"
                    ,local_28,2);
    }
    FUN_10032f0f2(param_1);
  }
  else {
    FUN_1001a7abe(param_1,local_38);
  }
  FUN_1001a8fac(local_38);
  return param_1;
}

