// name: FUN_10043a2a2
// address: 10043a2a2

void FUN_10043a2a2(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  ulong in_RAX;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x14d2a) != '\0') {
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
    __os_log_impl(0x100000000,uVar1,1,"sync> enabling podcast syncing",&local_28,2);
  }
  *(undefined2 *)(param_1 + 0x14d29) = 0x104;
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15320));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15328));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15318));
  *(ushort *)(param_1 + 0x151d8) =
       *(ushort *)(param_1 + 0x14d29) << 8 | *(ushort *)(param_1 + 0x14d29) >> 8;
  if (param_2 != (ulong *)0x0) {
    *param_2 = *param_2 | 0x1c008;
  }
  return;
}

