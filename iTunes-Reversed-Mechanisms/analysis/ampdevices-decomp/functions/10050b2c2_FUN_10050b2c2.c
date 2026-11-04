// name: FUN_10050b2c2
// address: 10050b2c2

void FUN_10050b2c2(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 local_28 [8];
  
  if ((param_1 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
    if ((*(char *)(param_1 + 0x6acf) != '\0') ||
       ((*(byte *)(*(long *)(param_1 + 0x30) + 0x2be0) & 0x20) != 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_28[0] = 0;
        __os_log_impl(0x100000000,uVar1,1,
                      "sync> aborting iPod sync due to system sleep notification",local_28,2);
      }
    }
    FUN_100315cf3(*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

