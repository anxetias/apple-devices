// name: FUN_1001669a0
// address: 1001669a0

undefined8 FUN_1001669a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_100171475();
  if (lVar1 != 0) {
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFDataGetTypeID();
    if (lVar2 == lVar3) {
      uVar4 = FUN_1001705fc(lVar1);
      return uVar4;
    }
    lVar2 = _CFGetTypeID(lVar1);
    lVar3 = _CFStringGetTypeID();
    if (lVar2 == lVar3) {
      uVar4 = FUN_100165cab(DAT_1008c4d90,lVar1);
      return uVar4;
    }
  }
  return 0;
}

