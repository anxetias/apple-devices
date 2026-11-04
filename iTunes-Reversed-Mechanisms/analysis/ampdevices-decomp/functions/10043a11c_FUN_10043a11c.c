// name: FUN_10043a11c
// address: 10043a11c

void FUN_10043a11c(long param_1,uint *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong in_RAX;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x14dec) != '\0') {
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
    __os_log_impl(0x100000000,uVar1,1,"sync> enabling audiobook syncing",&local_28,2);
  }
  *(undefined2 *)(param_1 + 0x14dec) = 0x201;
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15360));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15368));
  *(undefined2 *)(param_1 + 0x151da) = *(undefined2 *)(param_1 + 0x14dec);
  if (param_2 != (uint *)0x0) {
    *param_2 = *param_2 | 0x18000008;
  }
  return;
}

