// name: FUN_1005b361e
// address: 1005b361e

undefined8 FUN_1005b361e(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 local_68 [8];
  undefined1 local_58 [16];
  undefined2 local_48 [12];
  undefined1 local_30 [8];
  
  FUN_1001a7ad8(param_1 + 0x18);
  FUN_1001a7b90(local_30);
  FUN_10032f0f2(local_68);
  FUN_10032f0f2(local_48);
  cVar2 = FUN_1001a9164(param_2,local_30,local_48);
  puVar3 = local_68;
  if (cVar2 != '\0') {
    puVar3 = local_48;
  }
  FUN_1001a7a9e(local_58,puVar3);
  FUN_1001a8fac(local_48);
  FUN_1001a7b1c((long *)(param_1 + 0x28),local_58);
  FUN_1001a8fac(local_58);
  FUN_1001a8fac(local_68);
  FUN_1001ab240(local_30);
  if (*(long *)(param_1 + 0x28) == 0) {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar1 = DAT_1008c7658;
    cVar2 = _os_log_type_enabled(DAT_1008c7658,0x10);
    if (cVar2 != '\0') {
      local_48[0] = 0;
      __os_log_impl(0x100000000,uVar1,0x10,
                    "ch> **ERROR** fetch changes receive - no modified objects dict",local_48,2);
    }
  }
  return 1;
}

