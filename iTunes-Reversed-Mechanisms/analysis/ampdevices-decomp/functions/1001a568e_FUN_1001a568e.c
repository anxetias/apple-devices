// name: FUN_1001a568e
// address: 1001a568e

undefined8 FUN_1001a568e(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x50);
  if (lVar1 != 0) {
    uVar2 = FUN_1001727a0();
    _SCNetworkReachabilityUnscheduleFromRunLoop
              (lVar1,uVar2,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
    _SCNetworkReachabilitySetCallback(*(undefined8 *)(param_1 + 0x50),0,0);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return 0;
}

