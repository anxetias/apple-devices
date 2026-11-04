// name: FUN_10043e8db
// address: 10043e8db

void FUN_10043e8db(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = _CFNotificationCenterGetLocalCenter();
  _CFNotificationCenterRemoveObserver(uVar1,param_1[1],*param_1,param_1[2]);
  return;
}

