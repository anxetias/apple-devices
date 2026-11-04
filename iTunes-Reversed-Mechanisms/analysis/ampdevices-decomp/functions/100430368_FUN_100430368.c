// name: FUN_100430368
// address: 100430368

void FUN_100430368(long param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 local_38 [8];
  
  if (*(char *)(param_1 + 0x14cd8) != '\0') {
    if (*(char *)(param_1 + 0x39c) == '\0') {
      param_2 = '\0';
    }
    if ((*(char *)(param_1 + 0x151dc) != param_2) || (*(char *)(param_1 + 0x151dd) != param_3)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar2 != '\0') {
        local_38[0] = 0;
        __os_log_impl(0x100000000,uVar1,2,"sync> aborting sync due to book update mode change",
                      local_38,2);
      }
      FUN_1004e2d0e(param_1,1);
      if (*(char *)(param_1 + 0x151dc) != param_2) {
        FUN_1004e7aad(param_1,0);
      }
    }
    *(char *)(param_1 + 0x151dc) = param_2;
    *(char *)(param_1 + 0x151dd) = param_3;
  }
  return;
}

