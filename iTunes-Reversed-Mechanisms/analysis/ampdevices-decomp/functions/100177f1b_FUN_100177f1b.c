// name: FUN_100177f1b
// address: 100177f1b

undefined8 FUN_100177f1b(uint param_1,undefined4 *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)param_1;
  lVar1 = _CFTimeZoneCopyDefault();
  if (lVar1 != 0) {
    dVar3 = (double)_CFTimeZoneGetSecondsFromGMT
                              (dVar2 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                               lVar1);
    dVar2 = dVar2 + dVar3;
  }
  *param_2 = (int)(long)dVar2;
  FUN_10017060f(lVar1);
  return 0;
}

