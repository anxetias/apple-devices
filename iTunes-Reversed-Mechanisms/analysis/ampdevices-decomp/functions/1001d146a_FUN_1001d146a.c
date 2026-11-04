// name: FUN_1001d146a
// address: 1001d146a

undefined8 FUN_1001d146a(uint param_1,char param_2,char param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b15d8(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if ((param_1 >> 0x18 & 1) != 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006b1562(uVar2);
      }
      FUN_1001782e9(0,0);
    }
    bVar3 = (param_3 != '\0') != (param_2 == '\0');
    bVar4 = (param_1 & 0xffffff) == 1;
    uVar2 = 0xffffffce;
    if (bVar4) {
      uVar2 = 0;
    }
    *(bool *)param_4 = bVar4 && bVar3;
    if ((param_1 >> 0x19 & 1) != 0) {
      *(bool *)param_4 = !bVar4 || !bVar3;
    }
  }
  return uVar2;
}

