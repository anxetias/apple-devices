// name: FUN_1001d23b7
// address: 1001d23b7

long FUN_1001d23b7(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b2910(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x18);
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar3 = lVar3 + *(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x28);
    }
  }
  return lVar3;
}

