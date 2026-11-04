// name: FUN_10043a1e7
// address: 10043a1e7

void FUN_10043a1e7(long param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong in_RAX;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x14dee) != '\0') {
    return;
  }
  local_28 = in_RAX;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar1,1,"sync> enabling book syncing",&local_28,2);
  }
  *(undefined2 *)(param_1 + 0x14dee) = 0x201;
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15370));
  *(undefined2 *)(param_1 + 0x151dc) = *(undefined2 *)(param_1 + 0x14dee);
  if (param_2 != (uint *)0x0) {
    *param_2 = *param_2 | 0x20000008;
  }
  return;
}

