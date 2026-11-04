// name: FUN_1004197a4
// address: 1004197a4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1004197a4(undefined8 param_1,long *param_2,double *param_3)

{
  long lVar1;
  double dVar2;
  int iVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  double dVar5;
  double dVar6;
  long local_30;
  double local_28;
  
  *param_3 = 0.0;
  iVar3 = FUN_10022420f(param_1,&local_30,&local_28);
  uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (iVar3 == 0) {
    dVar5 = (double)_CFAbsoluteTimeGetCurrent();
    dVar2 = local_28;
    if (local_28 <= dVar5) {
      lVar1 = *param_2;
      *param_2 = local_30;
      if (lVar1 != 0) {
        _CFRelease();
      }
    }
    else {
      dVar6 = (double)_CFAbsoluteTimeGetCurrent();
      if (_DAT_100718e00 < dVar2 - dVar6) {
        local_28 = dVar5 + DAT_10070d3a0;
      }
      *param_3 = local_28;
      FUN_10017060f(local_30);
      uVar4 = 0;
    }
  }
  return uVar4 & 0xffffffff;
}

