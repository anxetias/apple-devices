// name: FUN_10046f34e
// address: 10046f34e

void FUN_10046f34e(long *param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  bVar1 = (**(code **)(*param_1 + 0x48))();
  if ((bVar1 | param_2) == 1) {
    uVar2 = FUN_1001713ff(DAT_1008c4d90,0,0,0,0,0);
    uVar3 = _CFNotificationCenterGetLocalCenter();
    _CFNotificationCenterPostNotification
              (uVar3,*(undefined8 *)PTR__kCMByteStreamNotification_AvailableLengthChanged_10082bbc0,
               param_1[2],uVar2,1);
    FUN_10017060f(uVar2);
    return;
  }
  return;
}

