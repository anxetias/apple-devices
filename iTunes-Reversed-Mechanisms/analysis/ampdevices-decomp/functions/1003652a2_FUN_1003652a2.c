// name: FUN_1003652a2
// address: 1003652a2

ulong FUN_1003652a2(void)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  double local_28;
  uint local_1c;
  
  lVar2 = FUN_100166bb8();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = FUN_100171fd3(lVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_100164d80(lVar2,&local_1c);
      uVar3 = 0;
      if (cVar1 != '\0') {
        uVar3 = (ulong)local_1c;
      }
    }
    else {
      cVar1 = FUN_1001654db(lVar2,&local_28);
      uVar3 = (long)(local_28 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) &
              0xffffffff;
      if (cVar1 == '\0') {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

