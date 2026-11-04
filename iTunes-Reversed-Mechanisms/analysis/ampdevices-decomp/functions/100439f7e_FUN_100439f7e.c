// name: FUN_100439f7e
// address: 100439f7e

void FUN_100439f7e(long param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong in_RAX;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x14d68) != '\0') {
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
    __os_log_impl(0x100000000,uVar1,1,"sync> enabling movie syncing",&local_28,2);
  }
  *(undefined2 *)(param_1 + 0x14d68) = 0x201;
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15330));
  *(undefined2 *)(param_1 + 0x151d4) = *(undefined2 *)(param_1 + 0x14d68);
  if (param_2 != (uint *)0x0) {
    *param_2 = *param_2 | 0x100008;
  }
  return;
}

