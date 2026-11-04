// name: FUN_10013dc59
// address: 10013dc59

void FUN_10013dc59(void)

{
  char cVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  IVar2 = NSURLRequest::instancesRespondToSelector_
                    ((ID)PTR__OBJC_CLASS___NSURLRequest_10082c6c0,
                     PTR_s_instancesRespondToSelector__10088bb10,
                     PTR_s__initWithCFURLRequest__10088bae0);
  if ((char)IVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10013e48f(uVar3);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') {
      return;
    }
  }
  cVar1 = _objc_opt_respondsToSelector(PTR__OBJC_CLASS___NSURLResponse_10082c6c8);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3);
    if (cVar1 != '\0') {
      FUN_10013e505(uVar3);
    }
    cVar1 = FUN_1001782e9(0);
    if (cVar1 == '\0') {
      return;
    }
  }
  uVar3 = _NSClassFromString(&cf_AKAppleIDSession);
  lVar4 = _objc_alloc_init(uVar3);
  if (lVar4 != 0) {
    _CFRetain(lVar4);
    (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  }
  bVar5 = DAT_1008c4d40 != 0;
  DAT_1008c4d40 = lVar4;
  if (bVar5) {
    _CFRelease();
  }
  if (DAT_1008c4d40 != 0) {
    DAT_1008c4d38 = 1;
    DAT_1008c4d48 =
         _dispatch_queue_create("com.apple.iTunes.StoreAppleIDSession",(dispatch_queue_attr_t)0x0);
    if (DAT_1008c4d48 == (dispatch_queue_t)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10013e57b(uVar3);
      }
      FUN_1001782e9(0,0);
    }
  }
  return;
}

