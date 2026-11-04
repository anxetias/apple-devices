// name: FUN_1001ce7ad
// address: 1001ce7ad

undefined1 FUN_1001ce7ad(long param_1,undefined8 *param_2)

{
  char cVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_30;
  
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      FUN_1006afa26(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  else {
    puVar6 = &local_30;
    if (param_2 != (undefined8 *)0x0) {
      puVar6 = param_2;
    }
    *puVar6 = 0;
    sVar2 = _GetNextProcess(puVar6);
    if (sVar2 == 0) {
      uVar5 = *(undefined8 *)PTR__kCFBundleIdentifierKey_10082e048;
      do {
        lVar3 = _ProcessInformationCopyDictionary(puVar6,0xffffffff);
        if (lVar3 != 0) {
          lVar4 = FUN_100166c1b(lVar3,uVar5);
          if ((lVar4 != 0) && (lVar4 = FUN_100173bb7(lVar4,param_1,1), lVar4 == 0)) {
            FUN_10017060f(lVar3);
            return 1;
          }
          FUN_10017060f(lVar3);
        }
        sVar2 = _GetNextProcess(puVar6);
      } while (sVar2 == 0);
    }
  }
  return 0;
}

