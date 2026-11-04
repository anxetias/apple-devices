// name: FUN_1001eba08
// address: 1001eba08

undefined1 FUN_1001eba08(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = _IOPSCopyPowerSourcesInfo();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = _IOPSGetProvidingPowerSourceType(lVar2);
    if (lVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_100170633(&cf_BatteryPower,lVar3);
    }
    FUN_10017060f(lVar2);
  }
  return uVar1;
}

