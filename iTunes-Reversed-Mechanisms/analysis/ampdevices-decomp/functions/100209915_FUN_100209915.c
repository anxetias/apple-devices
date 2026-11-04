// name: FUN_100209915
// address: 100209915

ulong FUN_100209915(void)

{
  char cVar1;
  ID IVar2;
  long lVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  
  IVar2 = SUPreferenceManager::defaultManager
                    ((ID)PTR__OBJC_CLASS___SUPreferenceManager_10082c2e8,
                     PTR_s_defaultManager_10088bfa0);
  lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    cVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                      (lVar3,PTR_s_automaticallyCheckForUpdates_10088c2e0);
    uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),cVar1 == '\x01');
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  return uVar4 & 0xffffffff;
}

