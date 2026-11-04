// name: FUN_1001b3bcc
// address: 1001b3bcc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1001b3bcc(long param_1,long param_2,char param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar22;
  undefined1 local_120 [48];
  long local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  long local_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffe78 >> 0x20);
  if (param_2 == 0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      FUN_1006a11e9(uVar11);
    }
LAB_1001b3d90:
    FUN_1001782e9(0,0);
    return 0;
  }
  lVar7 = _CGImageSourceCreateWithData(param_2,0);
  if (lVar7 == 0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      FUN_1006a1173(uVar11);
    }
    goto LAB_1001b3d90;
  }
  if ((param_3 == '\0') || (lVar8 = _CGImageSourceCopyPropertiesAtIndex(lVar7,0,0), lVar8 == 0)) {
    lVar8 = 0;
    lVar9 = _CGImageSourceCreateImageAtIndex(lVar7,0,0);
    if (lVar9 == 0) goto LAB_1001b3d9e;
    FUN_10017060f(lVar7);
    lVar8 = 0;
    goto LAB_1001b4a6b;
  }
  bVar4 = FUN_100167c17(lVar8,*(undefined8 *)PTR__kCGImagePropertyOrientation_10082e890);
  lVar9 = _CGImageSourceCreateImageAtIndex(lVar7,0,0);
  if (lVar9 == 0) {
LAB_1001b3d9e:
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      FUN_1006a10fd(uVar11);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(lVar7);
    goto LAB_1001b4a70;
  }
  if (bVar4 < 2) goto LAB_1001b49b5;
  local_98 = *(undefined8 *)PTR__CGAffineTransformIdentity_10082e168;
  uStack_90 = *(undefined8 *)(PTR__CGAffineTransformIdentity_10082e168 + 8);
  local_88 = *(double *)(PTR__CGAffineTransformIdentity_10082e168 + 0x10);
  dStack_80 = *(double *)(PTR__CGAffineTransformIdentity_10082e168 + 0x18);
  local_a8 = *(double *)(PTR__CGAffineTransformIdentity_10082e168 + 0x20);
  dStack_a0 = *(double *)(PTR__CGAffineTransformIdentity_10082e168 + 0x28);
  local_b0 = *(double *)(PTR__CGAffineTransformIdentity_10082e168 + 0x28);
  local_b8 = _CGImageGetWidth(lVar9);
  lVar10 = _CGImageGetHeight(lVar9);
  local_f0 = param_1;
  local_70 = lVar10;
  switch(bVar4) {
  case 2:
    _CGAffineTransformMakeScale(DAT_100700af8,DAT_100700458,local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_b0 = dStack_c0;
    local_a8 = (double)local_b8;
    dStack_a0 = 0.0;
    break;
  case 3:
    local_58 = local_88;
    dStack_50 = dStack_80;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_48 = local_a8;
    dStack_40 = dStack_a0;
    local_a8 = (double)local_b8;
    local_b0 = (double)lVar10;
    _CGAffineTransformTranslate(local_a8 * DAT_10070c188,DAT_10070c188 * local_b0,local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeRotation(DAT_100700b18,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeTranslation(local_a8 * DAT_100700b00,local_b0 * DAT_100700b00,local_120);
    uVar11 = local_68;
    _CGAffineTransformConcat(local_e8);
    uVar22 = (undefined4)((ulong)uVar11 >> 0x20);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_b0 = dStack_c0;
    goto LAB_1001b4371;
  case 4:
    _CGAffineTransformMakeScale(DAT_100700458,DAT_100700af8,local_e8);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_b0 = (double)lVar10;
LAB_1001b4371:
    dStack_a0 = 0.0;
    local_a8 = local_c8;
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    break;
  case 5:
    local_70 = _CGImageGetWidth(lVar9);
    local_58 = local_88;
    dStack_50 = dStack_80;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_48 = local_a8;
    dStack_40 = dStack_a0;
    uVar11 = _CGImageGetWidth(lVar9);
    auVar17._8_4_ = (int)((ulong)uVar11 >> 0x20);
    auVar17._0_8_ = uVar11;
    auVar17._12_4_ = DAT_10070d3c0._4_4_;
    dVar16 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar11) - _DAT_10070d3d0;
    dVar20 = auVar17._8_8_ - _UNK_10070d3d8;
    dStack_a0 = dVar16 + dVar20;
    local_a8 = (dVar16 + dVar20) * DAT_10070c188;
    _CGImageGetHeight(lVar9);
    _CGAffineTransformTranslate(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeRotation(DAT_100711680,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    local_a8 = (double)lVar10;
    dStack_a0 = 0.0;
    _CGAffineTransformMakeTranslation
              (local_a8 * DAT_100700b00,(double)local_70 * DAT_100700b00,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeScale(DAT_100700af8,DAT_100700458,local_120);
    uVar11 = local_68;
    _CGAffineTransformConcat(local_e8);
    uVar22 = (undefined4)((ulong)uVar11 >> 0x20);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_b8 = lVar10;
    local_b0 = dStack_c0;
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    break;
  case 6:
    lVar10 = _CGImageGetWidth(lVar9);
    _CGAffineTransformMakeRotation(DAT_100711680,local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    uVar11 = local_e8._0_8_;
    _CGAffineTransformTranslate((double)-lVar10,local_e8);
    uVar22 = (undefined4)((ulong)uVar11 >> 0x20);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_a8 = local_c8;
    dStack_a0 = 0.0;
    local_b0 = dStack_c0;
    local_b8 = local_70;
    local_70 = lVar10;
    break;
  case 7:
    local_70 = _CGImageGetWidth(lVar9);
    local_58 = local_88;
    dStack_50 = dStack_80;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_48 = local_a8;
    dStack_40 = dStack_a0;
    uVar11 = _CGImageGetWidth(lVar9);
    auVar18._8_4_ = (int)((ulong)uVar11 >> 0x20);
    auVar18._0_8_ = uVar11;
    auVar18._12_4_ = DAT_10070d3c0._4_4_;
    dVar16 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar11) - _DAT_10070d3d0;
    dVar20 = auVar18._8_8_ - _UNK_10070d3d8;
    dStack_a0 = dVar16 + dVar20;
    local_a8 = (dVar16 + dVar20) * DAT_10070c188;
    _CGImageGetHeight(lVar9);
    _CGAffineTransformTranslate(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeRotation(DAT_100711678,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    local_a8 = (double)lVar10;
    dStack_a0 = 0.0;
    _CGAffineTransformMakeTranslation
              (local_a8 * DAT_100700b00,(double)local_70 * DAT_100700b00,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeScale(DAT_100700af8,DAT_100700458,local_120);
    uVar11 = local_68;
    _CGAffineTransformConcat(local_e8);
    uVar22 = (undefined4)((ulong)uVar11 >> 0x20);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_a8 = local_a8 + local_c8;
    local_b8 = lVar10;
    local_b0 = dStack_c0;
    break;
  case 8:
    local_70 = _CGImageGetWidth(lVar9);
    local_58 = local_88;
    dStack_50 = dStack_80;
    local_68 = local_98;
    uStack_60 = uStack_90;
    local_48 = local_a8;
    dStack_40 = dStack_a0;
    uVar11 = _CGImageGetWidth(lVar9);
    auVar19._8_4_ = (int)((ulong)uVar11 >> 0x20);
    auVar19._0_8_ = uVar11;
    auVar19._12_4_ = DAT_10070d3c0._4_4_;
    dVar16 = (double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar11) - _DAT_10070d3d0;
    dVar20 = auVar19._8_8_ - _UNK_10070d3d8;
    dStack_a0 = dVar16 + dVar20;
    local_a8 = (dVar16 + dVar20) * DAT_10070c188;
    _CGImageGetHeight(lVar9);
    _CGAffineTransformTranslate(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeRotation(DAT_100711678,local_120);
    _CGAffineTransformConcat(local_e8);
    local_88 = local_d8;
    dStack_80 = dStack_d0;
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_58 = local_d8;
    dStack_50 = dStack_d0;
    local_68 = local_e8._0_8_;
    uStack_60 = local_e8._8_8_;
    local_48 = local_c8;
    dStack_40 = dStack_c0;
    _CGAffineTransformMakeTranslation
              ((double)lVar10 * DAT_100700b00,(double)local_70 * DAT_100700b00,local_120);
    uVar11 = local_68;
    _CGAffineTransformConcat(local_e8);
    uVar22 = (undefined4)((ulong)uVar11 >> 0x20);
    local_98 = local_e8._0_8_;
    uStack_90 = local_e8._8_8_;
    local_a8 = local_c8;
    dStack_a0 = 0.0;
    local_b8 = lVar10;
    local_b0 = dStack_c0;
    local_88 = local_d8;
    dStack_80 = dStack_d0;
  }
  uVar11 = _CGImageGetBitsPerComponent(lVar9);
  uVar12 = _CGImageGetColorSpace(lVar9);
  uVar6 = _CGImageGetBitmapInfo(lVar9);
  lVar10 = _CGBitmapContextCreate(0,local_b8,local_70,uVar11,0,uVar12,CONCAT44(uVar22,uVar6));
  param_1 = local_f0;
  if (lVar10 != 0) {
    local_d8 = local_88;
    dStack_d0 = dStack_80;
    local_e8._8_8_ = uStack_90;
    local_e8._0_8_ = local_98;
    local_c8 = local_a8;
    dStack_c0 = local_b0;
    _CGContextConcatCTM(lVar10);
    uVar13 = _CGImageGetWidth(lVar9);
    uVar14 = _CGImageGetHeight(lVar9);
    local_e8 = (undefined1  [16])0x0;
    auVar21._8_8_ = uVar14;
    auVar21._0_8_ = uVar13;
    auVar19 = pblendw((undefined1  [16])0x0,auVar21,0x33);
    local_d8 = ((double)(uVar13 >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
               SUB168(auVar19 | _DAT_10070e500,0);
    dStack_d0 = ((double)(uVar14 >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
                SUB168(auVar19 | _DAT_10070e500,8);
    _CGContextDrawImage(lVar10,lVar9);
    lVar15 = _CGBitmapContextCreateImage(lVar10);
    if (lVar15 != 0) {
      _CGImageRelease(lVar9);
      lVar9 = lVar15;
    }
    param_1 = local_f0;
    _CGContextRelease(lVar10);
  }
LAB_1001b49b5:
  FUN_10017060f(lVar7);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_e8._8_8_;
  local_e8 = auVar1 << 0x40;
  cVar5 = _CFDictionaryGetValueIfPresent
                    (lVar8,*(undefined8 *)PTR__kCGImagePropertyDPIWidth_10082e838);
  if (cVar5 != '\0') {
    _CFNumberGetValue(local_e8._0_8_,3,param_1 + 0x50);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_e8._8_8_;
  local_e8 = auVar2 << 0x40;
  cVar5 = _CFDictionaryGetValueIfPresent
                    (lVar8,*(undefined8 *)PTR__kCGImagePropertyDPIHeight_10082e830);
  if (cVar5 != '\0') {
    _CFNumberGetValue(local_e8._0_8_,3,param_1 + 0x54);
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_e8._8_8_;
  local_e8 = auVar3 << 0x40;
  cVar5 = _CFDictionaryGetValueIfPresent(lVar8,*(undefined8 *)PTR__kCGImagePropertyDepth_10082e840);
  if (cVar5 != '\0') {
    _CFNumberGetValue(local_e8._0_8_,3,param_1 + 0x58);
  }
LAB_1001b4a6b:
  *(long *)(param_1 + 0x48) = lVar9;
LAB_1001b4a70:
  if (lVar8 != 0) {
    _CFRelease(lVar8);
  }
  return 0;
}

