// name: FUN_1001e7dc1
// address: 1001e7dc1

void FUN_1001e7dc1(byte *param_1)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *param_1;
  if (bVar1 != 0) {
    lVar2 = 0;
    do {
      param_1[lVar2 + 1] = (&DAT_100712040)[param_1[lVar2 + 1]];
      lVar2 = lVar2 + 1;
    } while ((ushort)lVar2 < (ushort)bVar1);
  }
  return;
}

