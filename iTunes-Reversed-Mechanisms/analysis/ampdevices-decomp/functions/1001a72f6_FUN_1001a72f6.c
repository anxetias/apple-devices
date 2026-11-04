// name: FUN_1001a72f6
// address: 1001a72f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1001a72f6(double param_1,double param_2,double param_3,long param_4,undefined8 param_5,
                   undefined8 param_6,int param_7,undefined8 param_8,ulong param_9,long param_10)

{
  undefined1 auVar1 [16];
  double dVar2;
  char cVar3;
  undefined4 in_EAX;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  double dVar10;
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  if (*(long *)(param_4 + 8) == 0) {
    *(double *)(param_4 + 0x98) = param_3;
    dVar2 = DAT_10070e4c0;
    auVar11._8_8_ = param_3 * param_1 + _UNK_10070e618;
    auVar11._0_8_ = param_3 * param_2 + _DAT_10070e610;
    auVar11 = roundpd(in_XMM3,auVar11,9);
    dVar10 = auVar11._0_8_;
    dVar12 = auVar11._8_8_;
    auVar1._8_8_ = -(ulong)(_UNK_10070e4f8 <= dVar12);
    auVar1._0_8_ = -(ulong)(_DAT_10070e4f0 <= dVar10);
    iVar4 = movmskpd(in_EAX,auVar1);
    if (iVar4 != 3) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069e833(uVar5);
      }
      uVar6 = 0;
      FUN_1001782e9(0,0);
      cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar3 != '\0') {
        FUN_10069e8a9(dVar10);
        uVar6 = 0;
      }
      goto LAB_1001a7332;
    }
    *(long *)(param_4 + 0xa8) = (long)dVar12 >> 0x3f & (long)(dVar12 - DAT_10070e4c0) | (long)dVar12
    ;
    *(long *)(param_4 + 0xb0) = (long)dVar10 >> 0x3f & (long)(dVar10 - dVar2) | (long)dVar10;
    *(int *)(param_4 + 0xd0) = param_7;
    bVar9 = (param_9 & 0xfffffffd) == 0;
    *(byte *)(param_4 + 0xd4) = bVar9;
    uVar5 = 0x20;
    if (param_7 == 2) {
      uVar5 = 8;
    }
    *(undefined8 *)(param_4 + 0xc0) = uVar5;
    if (param_7 != 2) {
      if (param_10 == 0) {
        param_10 = FUN_10019540c();
        bVar9 = *(byte *)(param_4 + 0xd4);
      }
      if (param_7 == 3) {
        *(undefined1 *)(param_4 + 0xd4) = 1;
        uVar8 = 0x2002;
      }
      else {
        uVar8 = ((byte)~bVar9 & 1) * 0x2000 + 0x2000;
        if (param_7 == 0) {
          uVar8 = uVar8 | 2;
        }
        else {
          uVar8 = uVar8 | 6;
        }
      }
    }
    else {
      uVar8 = 0;
      param_10 = FUN_1001954b9();
    }
    lVar7 = (*(ulong *)(param_4 + 0xc0) >> 3) * *(long *)(param_4 + 0xa8);
    *(long *)(param_4 + 0xb8) = lVar7;
    lVar7 = _CGBitmapContextCreate
                      (0,*(long *)(param_4 + 0xa8),*(undefined8 *)(param_4 + 0xb0),8,lVar7,param_10,
                       uVar8);
    *(long *)(param_4 + 8) = lVar7;
    if (lVar7 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069e98d(uVar5);
      }
    }
    else {
      lVar7 = _CGBitmapContextGetData(lVar7);
      *(long *)(param_4 + 200) = lVar7;
      if (lVar7 != 0) {
        _CGContextTranslateCTM
                  (0,SUB84(((double)CONCAT44((undefined4)DAT_10070d3c0,
                                             (int)*(undefined8 *)(param_4 + 0xb0)) - _DAT_10070d3d0)
                           + ((double)CONCAT44(DAT_10070d3c0._4_4_,
                                               (int)((ulong)*(undefined8 *)(param_4 + 0xb0) >> 0x20)
                                              ) - _UNK_10070d3d8),0),*(undefined8 *)(param_4 + 8));
        _CGContextScaleCTM(param_3,_DAT_100700b30 ^ SUB84(param_3,0),*(undefined8 *)(param_4 + 8));
        uVar6 = CONCAT71((int7)((ulong)param_4 >> 8),1);
        goto LAB_1001a7332;
      }
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        FUN_10069e917(uVar5);
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10069e7bd(uVar5);
    }
  }
  uVar6 = 0;
  FUN_1001782e9(0,0);
LAB_1001a7332:
  return uVar6 & 0xffffffff;
}

