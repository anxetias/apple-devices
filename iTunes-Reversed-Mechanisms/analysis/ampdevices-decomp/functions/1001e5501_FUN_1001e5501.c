// name: FUN_1001e5501
// address: 1001e5501

ulong FUN_1001e5501(long param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_RBX;
  bool bVar4;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006be918(uVar2);
    }
    unaff_RBX = 0;
    FUN_1001782e9(0,0);
  }
  else if (param_2 == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    lVar3 = 0;
    do {
      bVar4 = (byte)(*(char *)(param_1 + lVar3) - 0x30U) < 10;
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar4);
      if (!bVar4) break;
      bVar4 = (ulong)param_2 - 1 != lVar3;
      lVar3 = lVar3 + 1;
    } while (bVar4);
  }
  return unaff_RBX & 0xffffffff;
}

