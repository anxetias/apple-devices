// name: FUN_100162cea
// address: 100162cea

undefined8 FUN_100162cea(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100670f03(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100162178();
    if (lVar2 != 0) {
      uVar3 = _CFURLCredentialStorageCopyDefaultCredentialForProtectionSpace
                        (*(undefined8 *)(param_1 + 0x90),lVar2);
      FUN_10017060f(lVar2);
      return uVar3;
    }
  }
  return 0;
}

