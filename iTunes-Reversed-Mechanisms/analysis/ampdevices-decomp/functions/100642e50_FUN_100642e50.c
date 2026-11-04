// name: FUN_100642e50
// address: 100642e50

void FUN_100642e50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  cVar3 = FUN_1001cd44e("log-devicesclient",1,0);
  if (cVar3 != '\0') {
    uVar1 = FUN_1001cc24a("com.apple.amp.devices","devicesclient");
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    uVar2 = DAT_1008c3438;
    DAT_1008c3438 = uVar1;
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    return;
  }
  return;
}

