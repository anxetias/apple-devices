// name: FUN_1005b1c96
// address: 1005b1c96

undefined8 FUN_1005b1c96(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  long local_40 [2];
  undefined1 local_30 [8];
  undefined2 local_28 [8];
  
  (**(code **)**(undefined8 **)(param_1 + 0x28))(local_40);
  if (local_40[0] == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar1 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,0x10,"ch> **ERROR** no modifiedObjectsDict to set",local_28,2)
      ;
    }
  }
  else {
    FUN_1001a7b90(local_28);
    FUN_1001a7b90(local_30,local_40);
    FUN_1001a9c16(param_2,local_28,local_30);
    FUN_1001ab240(local_30);
    FUN_1001ab240(local_28);
  }
  FUN_1001a8fac(local_40);
  return 1;
}

