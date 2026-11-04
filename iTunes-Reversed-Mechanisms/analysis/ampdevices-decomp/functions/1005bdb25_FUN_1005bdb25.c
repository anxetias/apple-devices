// name: FUN_1005bdb25
// address: 1005bdb25

undefined8 FUN_1005bdb25(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = _CFDictionaryGetTypeID();
  lVar3 = FUN_1005ba383(param_1,&cf_com_apple_mobile_battery,0,uVar2,0);
  uVar2 = 0xe8000008;
  if (lVar3 != 0) {
    lVar4 = FUN_100171426(lVar3);
    if (0 < lVar4) {
      uVar2 = 0;
      uVar1 = FUN_100167e71(lVar3,&cf_BatteryIsCharging,0);
      *param_2 = uVar1;
      uVar1 = FUN_100167e71(lVar3,&cf_FullyCharged,0);
      param_2[1] = uVar1;
      uVar1 = FUN_100167e71(lVar3,&cf_ExternalChargeCapable,0);
      param_2[2] = uVar1;
      uVar1 = FUN_100167e71(lVar3,&cf_ExternalConnected,0);
      param_2[3] = uVar1;
      uVar1 = FUN_100167e71(lVar3,&cf_GasGaugeCapability,0);
      param_2[4] = uVar1;
      uVar1 = FUN_100167c17(lVar3,&cf_BatteryCurrentCapacity);
      param_2[5] = uVar1;
    }
  }
  FUN_10017060f(lVar3);
  return uVar2;
}

