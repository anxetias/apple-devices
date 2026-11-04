// name: FUN_100177e94
// address: 100177e94

undefined8 FUN_100177e94(uint param_1,undefined4 *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)param_1;
  lVar1 = _CFTimeZoneCopyDefault();
  if (lVar1 != 0) {
    dVar4 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
    dVar3 = (double)_CFTimeZoneGetSecondsFromGMT(lVar1);
    dVar4 = (double)_CFTimeZoneGetSecondsFromGMT((dVar2 - dVar4) - dVar3,lVar1);
    dVar2 = dVar2 - dVar4;
  }
  *param_2 = (int)(long)dVar2;
  FUN_10017060f(lVar1);
  return 0;
}

