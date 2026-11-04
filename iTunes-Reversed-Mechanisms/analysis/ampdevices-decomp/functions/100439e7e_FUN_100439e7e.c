// name: FUN_100439e7e
// address: 100439e7e

void FUN_100439e7e(long param_1,ushort *param_2)

{
  undefined8 uVar1;
  undefined1 in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  ulong local_28;
  
  if (*(char *)(param_1 + 0x14d6c) != '\0') {
    return;
  }
  local_28 = CONCAT71(in_register_00000001,in_AL);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_28 = local_28 & 0xffffffffffff0000;
    __os_log_impl(0x100000000,uVar1,1,"sync> enabling music syncing",&local_28,2);
  }
  *(undefined1 *)(param_1 + 0x14d6c) = 1;
  *(undefined1 *)(param_1 + 0x14cdb) = 2;
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x152f0));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x152f8));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15300));
  FUN_1002c0bea(*(undefined8 *)(param_1 + 0x15308));
  FUN_1002c13d4(*(undefined8 *)(param_1 + 0x15310));
  *(undefined1 *)(param_1 + 0x151d2) = *(undefined1 *)(param_1 + 0x14d6c);
  *(undefined1 *)(param_1 + 0x151d3) = *(undefined1 *)(param_1 + 0x14cdb);
  if (param_2 != (ushort *)0x0) {
    *param_2 = *param_2 | 0x3c08;
  }
  return;
}

