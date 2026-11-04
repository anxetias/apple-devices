// name: FUN_1001781cf
// address: 1001781cf

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_1001781cf(undefined8 param_1,int param_2)

{
  double dVar1;
  short sVar2;
  undefined8 uVar3;
  short sVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  
  auVar6._8_4_ = (int)((ulong)param_1 >> 0x20);
  auVar6._0_8_ = param_1;
  auVar6._12_4_ = DAT_10070d3c0._4_4_;
  dVar5 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)param_1) - _DAT_10070d3d0;
  dVar7 = auVar6._8_8_ - _UNK_10070d3d8;
  dVar1 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
  uVar3 = _CFTimeZoneCopyDefault();
  if (param_2 != 0) {
    _CFTimeZoneGetSecondsFromGMT((dVar5 + dVar7) - dVar1,uVar3);
  }
  sVar2 = _CFAbsoluteTimeGetDayOfWeek(uVar3);
  sVar4 = 1;
  if (sVar2 != 7) {
    sVar4 = sVar2 + 1;
  }
  FUN_10017060f(uVar3);
  return sVar4;
}

