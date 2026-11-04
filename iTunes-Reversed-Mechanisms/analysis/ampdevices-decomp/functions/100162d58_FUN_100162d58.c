// name: FUN_100162d58
// address: 100162d58

void FUN_100162d58(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_100670fef(uVar6);
    }
    FUN_1001782e9(0,0);
    return;
  }
  lVar2 = FUN_100162178();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                    (*(undefined8 *)(param_1 + 0x90),lVar2);
  if (lVar3 == 0) goto LAB_100162e21;
  cVar1 = _CFURLCredentialContainsPassword(lVar3);
  uVar6 = DAT_1008c4d90;
  if (cVar1 != '\0') {
    uVar4 = _CFURLCredentialGetUsername(lVar3);
    lVar5 = _CFURLCredentialCreate(uVar6,uVar4,0,0,2);
    if (lVar5 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        FUN_100670f79(uVar6);
      }
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_100162e19;
    }
    _CFURLCredentialStorageSetDefaultCredentialForProtectionSpace
              (*(undefined8 *)(param_1 + 0x90),lVar5,lVar2);
    FUN_10017060f(lVar5);
  }
LAB_100162e19:
  FUN_10017060f(lVar3);
LAB_100162e21:
  FUN_10017060f(lVar2);
  return;
}

