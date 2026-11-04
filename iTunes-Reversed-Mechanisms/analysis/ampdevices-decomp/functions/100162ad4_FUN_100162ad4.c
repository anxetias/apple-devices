// name: FUN_100162ad4
// address: 100162ad4

void FUN_100162ad4(long param_1,long param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100670e8d(uVar7);
    }
LAB_100162c56:
    FUN_1001782e9(0,0);
    return;
  }
  if (param_3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100670e17(uVar7);
    }
    goto LAB_100162c56;
  }
  lVar3 = FUN_1001620b6(param_1,param_3,param_2);
  if (lVar3 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      FUN_100670da1(uVar7);
    }
    goto LAB_100162c56;
  }
  lVar4 = FUN_1001748e1(param_3);
  if ((lVar4 == 0) || (lVar5 = FUN_1001737f8(lVar4), lVar5 < 1)) {
    lVar5 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                      (*(undefined8 *)(param_1 + 0x90),lVar3);
    bVar1 = true;
  }
  else {
    lVar5 = FUN_100162ca5(*(undefined8 *)(param_1 + 0x90),lVar4,lVar3);
    bVar1 = false;
  }
  FUN_10017060f(lVar4);
  if (lVar5 == 0) goto LAB_100162c76;
  cVar2 = _CFURLCredentialContainsPassword(lVar5);
  uVar7 = DAT_1008c4d90;
  if (cVar2 != '\0') {
    uVar6 = _CFURLCredentialGetUsername(lVar5);
    lVar4 = _CFURLCredentialCreate(uVar7,uVar6,0,0,2);
    if (lVar4 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        FUN_100670d2b(uVar7);
      }
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_100162c6e;
    }
    if (bVar1) {
      _CFURLCredentialStorageSetDefaultCredentialForProtectionSpace();
    }
    else {
      _CFURLCredentialStorageSetCredentialForProtectionSpace
                (*(undefined8 *)(param_1 + 0x90),lVar4,lVar3);
    }
    FUN_10017060f(lVar4);
  }
LAB_100162c6e:
  FUN_10017060f(lVar5);
LAB_100162c76:
  FUN_10017060f(lVar3);
  return;
}

