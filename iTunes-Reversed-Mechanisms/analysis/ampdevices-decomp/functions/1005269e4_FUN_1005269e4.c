// name: FUN_1005269e4
// address: 1005269e4

long FUN_1005269e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_100166c1b(param_1,&cf_DeviceName);
  if (lVar1 == 0) {
    lVar1 = FUN_100166c1b(param_1,&cf_DisplayName);
  }
  lVar2 = FUN_100166c1b(param_2,&cf_DeviceName);
  if (lVar2 == 0) {
    lVar2 = FUN_100166c1b(param_2,&cf_DisplayName);
  }
  lVar1 = FUN_100173bb7(lVar1,lVar2,0x41);
  if (lVar1 == 0) {
    uVar3 = FUN_100166a07(param_1,&cf_LastBackupDate);
    uVar4 = FUN_100166a07(param_2,&cf_LastBackupDate);
    lVar1 = FUN_10017123b(uVar3,uVar4,0);
    lVar1 = -lVar1;
  }
  return lVar1;
}

