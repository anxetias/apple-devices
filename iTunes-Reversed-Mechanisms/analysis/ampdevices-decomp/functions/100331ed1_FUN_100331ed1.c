// name: FUN_100331ed1
// address: 100331ed1

void FUN_100331ed1(void)

{
  undefined8 uVar1;
  undefined1 in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  ulong local_18;
  
  if (DAT_1008bd7d0 == '\x01') {
    local_18 = CONCAT71(in_register_00000001,in_AL);
    DAT_1008bd7d0 = '\0';
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_18 = local_18 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar1,1,"airtraffic> stopping host wakeup service",&local_18,2);
    }
    _ATHostAdvertiserStopWakeupService();
  }
  return;
}

