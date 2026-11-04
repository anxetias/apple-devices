// name: FUN_1001746bc
// address: 1001746bc

undefined8 FUN_1001746bc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_100174702();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = _CFURLGetString(lVar1);
    if (lVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = _CFRetain(lVar2);
    }
    _CFRelease(lVar1);
  }
  return uVar3;
}

