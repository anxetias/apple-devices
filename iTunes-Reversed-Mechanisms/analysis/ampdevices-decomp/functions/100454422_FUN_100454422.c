// name: FUN_100454422
// address: 100454422

void FUN_100454422(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  uint7 in_register_00000001;
  ulong local_18;
  
  local_18 = (ulong)in_register_00000001 << 8;
  cVar2 = FUN_100169ddb(*param_2,"mediaSources");
  if (cVar2 != '\0') {
    uVar1 = _objc_autoreleasePoolPush();
    FUN_100451790(0x400,0,0);
    _objc_autoreleasePoolPop(uVar1);
    uVar1 = FUN_1001c156e();
    FUN_1001c6987(uVar1,0x6d6c7361,0,0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar1 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
    if (cVar2 != '\0') {
      local_18 = local_18 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar1,2,"sync> mediaSources available",&local_18,2);
    }
  }
  return;
}

