// name: FUN_1003c59c2
// address: 1003c59c2

undefined8 FUN_1003c59c2(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined2 local_28 [8];
  
  uVar3 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar1 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    uVar3 = 0xffffffce;
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,0x10,"ch> AMPLChangeDataProcessor - no data",local_28,2);
    }
  }
  return uVar3;
}

