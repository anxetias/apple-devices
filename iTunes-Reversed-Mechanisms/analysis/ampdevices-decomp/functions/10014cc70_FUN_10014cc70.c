// name: FUN_10014cc70
// address: 10014cc70

char FUN_10014cc70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  undefined1 local_28 [16];
  
  uVar1 = _NSClassFromString(&cf_AMSBiometrics);
  FUN_10015095e(local_28);
  uVar2 = FUN_100152dc7(local_28);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_stateForAccount__10088bbe0,uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_100150de8(local_28);
  cVar4 = '\x02';
  if (lVar3 != 2) {
    if (DAT_10088fd78 != -1) {
      FUN_10014d8c5();
    }
    if ((((DAT_1008c4d60 != 0) && ((*(byte *)(DAT_1008c4d60 + 0x11) & 1) != 0)) &&
        ((*(byte *)(DAT_1008c4d60 + 0x10) & 1) != 0)) && (cVar4 = '\x02' - (lVar3 == 1), lVar3 == 0)
       ) {
      cVar4 = '\0';
    }
  }
  return cVar4;
}

