// name: FUN_100177ddf
// address: 100177ddf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100177ddf(undefined8 param_1,ulong *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  auVar4._8_4_ = (int)((ulong)param_1 >> 0x20);
  auVar4._0_8_ = param_1;
  auVar4._12_4_ = DAT_10070d3c0._4_4_;
  dVar2 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_1) - _DAT_10070d3d0) +
          (auVar4._8_8_ - _UNK_10070d3d8);
  lVar1 = _CFTimeZoneCopyDefault();
  if (lVar1 != 0) {
    dVar3 = (double)_CFTimeZoneGetSecondsFromGMT
                              (dVar2 - *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                               lVar1);
    dVar2 = dVar2 + dVar3;
  }
  *param_2 = (long)(dVar2 - DAT_10070e4c0) & (long)dVar2 >> 0x3f | (long)dVar2;
  FUN_10017060f(lVar1);
  return 0;
}

