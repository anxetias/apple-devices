// name: sharedInstance
// address: 100661f13

/* Function Stack Size: 0x10 bytes */

ID AMPDevicesClientBroadcaster::sharedInstance(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if (DAT_1008c34c0 != -1) {
    _dispatch_once(&DAT_1008c34c0,&PTR___NSConcreteGlobalBlock_100871a00);
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_1008c34c8);
  return IVar1;
}

