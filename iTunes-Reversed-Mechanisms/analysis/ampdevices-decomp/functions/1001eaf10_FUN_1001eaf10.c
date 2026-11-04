// name: FUN_1001eaf10
// address: 1001eaf10

long FUN_1001eaf10(void)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = (double)FUN_1001ebd46();
  if ((DAT_1008a2ab0 == 0.0) && (!NAN(DAT_1008a2ab0))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c3882(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (dVar3 < DAT_1008a2ab0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006c38f8(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  return (long)(dVar3 - DAT_1008a2ab0);
}

