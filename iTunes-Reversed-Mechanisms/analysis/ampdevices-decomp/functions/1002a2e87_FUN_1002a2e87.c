// name: FUN_1002a2e87
// address: 1002a2e87

ulong FUN_1002a2e87(long param_1)

{
  long lVar1;
  ulong unaff_RBX;
  bool bVar2;
  
  if ((*(short *)(param_1 + 0x62) == 1) || (lVar1 = FUN_1004968c5(), lVar1 == 0)) {
    unaff_RBX = 0;
  }
  else {
    do {
      bVar2 = 899 < *(uint *)(lVar1 + 0x10);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar2);
      if (bVar2) break;
      lVar1 = FUN_100496985(lVar1);
    } while (lVar1 != 0);
  }
  return unaff_RBX & 0xffffffff;
}

