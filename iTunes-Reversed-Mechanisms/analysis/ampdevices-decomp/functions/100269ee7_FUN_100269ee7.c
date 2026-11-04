// name: FUN_100269ee7
// address: 100269ee7

void FUN_100269ee7(long param_1)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *local_20;
  undefined1 local_18 [8];
  
  local_38 = PTR___NSConcreteStackBlock_10082caf0;
  local_30 = 0xc2000000;
  local_28 = FUN_100269f49;
  local_20 = &DAT_10083f4e8;
  _objc_copyWeak(local_18,param_1 + 0x20);
  _dispatch_async(PTR___dispatch_main_q_10082cb60,&local_38);
  _objc_destroyWeak(local_18);
  return;
}

