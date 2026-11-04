// name: FUN_100177d88
// address: 100177d88

int FUN_100177d88(void)

{
  ulong uVar1;
  double dVar2;
  int local_20 [2];
  
  dVar2 = (double)_CFAbsoluteTimeGetCurrent();
  uVar1 = (ulong)(dVar2 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008);
  uVar1 = (long)((dVar2 + *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008) -
                DAT_10070e4c0) & (long)uVar1 >> 0x3f | uVar1;
  FUN_100177ddf(uVar1,local_20);
  return local_20[0] - (int)uVar1;
}

