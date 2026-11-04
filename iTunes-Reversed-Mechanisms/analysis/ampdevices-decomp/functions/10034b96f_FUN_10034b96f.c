// name: FUN_10034b96f
// address: 10034b96f

void FUN_10034b96f(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 local_48 [8];
  undefined2 local_38 [8];
  undefined2 local_28 [8];
  
  if (*(int *)(param_1 + 0x167d8) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_48[0] = 0;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> aborting sync operations fiber",local_48,2);
    }
    *(undefined1 *)(param_1 + 0x16849) = 1;
  }
  if (*(int *)(param_1 + 0x16810) != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_38[0] = 0;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> aborting asset copy fiber",local_38,2);
    }
    *(undefined1 *)(param_1 + 0x16849) = 1;
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0)) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_28[0] = 0;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> aborting asset transfer",local_28,2);
    }
    FUN_100407827(*(undefined8 *)(param_1 + 0x30));
  }
  FUN_100394a78(param_1,0);
  return;
}

