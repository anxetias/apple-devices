// name: FUN_10027bd41
// address: 10027bd41

void FUN_10027bd41(void)

{
  long lVar1;
  
  lVar1 = _CFNotificationCenterGetDistributedCenter();
  if (lVar1 != 0) {
    _CFNotificationCenterPostNotification
              (lVar1,&cf_com_apple_iTunes_prefsChanged,&cf_com_apple_iTunes,0,0);
    return;
  }
  return;
}

