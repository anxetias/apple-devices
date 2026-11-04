// name: FUN_10017b49a
// address: 10017b49a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10017b49a(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  double *param_5,undefined4 param_6,int param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 local_e8 [16];
  long *local_d8;
  double dStack_d0;
  long *local_b8;
  long *plStack_b0;
  long *local_a8;
  long *plStack_a0;
  undefined1 local_98 [24];
  double local_80;
  long *local_78;
  long *plStack_70;
  undefined1 local_68 [16];
  long *local_58;
  undefined8 uStack_50;
  double local_48;
  double local_38;
  
  local_38 = (double)CONCAT44(local_38._4_4_,param_6);
  local_58 = (long *)CONCAT44(local_58._4_4_,(float)*(double *)(param_2 + 0x98));
  local_48 = param_1;
  if (param_4 == (undefined8 *)0x0) {
    local_78 = *(long **)PTR__CGPointZero_10082e300;
    plStack_70 = *(long **)(PTR__CGPointZero_10082e300 + 8);
    local_68 = (**(code **)(*(long *)*param_3 + 0x70))();
  }
  else {
    local_78 = (long *)*param_4;
    plStack_70 = (long *)param_4[1];
    local_68 = *(undefined1 (*) [16])(param_4 + 2);
  }
  cVar5 = FUN_100195380(&local_78);
  if (cVar5 != '\0') {
    return;
  }
  cVar5 = FUN_100195380(param_5);
  if (cVar5 != '\0') {
    return;
  }
  if (*(long *)(param_2 + 8) == 0) {
    return;
  }
  local_80 = (double)local_58._0_4_;
  local_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  if (*(int *)(param_2 + 0x90) != 0) {
    (**(code **)(*(long *)*param_3 + 0x30))(local_80,&local_a8);
    plVar1 = plStack_a0;
    local_b8 = local_a8;
    plVar2 = plStack_b0;
    local_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_b0 = plVar1;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_a0 + 1;
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(int *)(param_2 + 0x94) != 0) {
    (**(code **)(*(long *)*param_3 + 0x48))(local_80,&local_a8);
    plVar1 = plStack_a0;
    local_b8 = local_a8;
    plVar2 = plStack_b0;
    local_a8 = (long *)0x0;
    plStack_a0 = (long *)0x0;
    plStack_b0 = plVar1;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (plStack_a0 != (long *)0x0) {
      LOCK();
      plVar2 = plStack_a0 + 1;
      lVar6 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_b8 == (long *)0x0) {
    FUN_100203686(&local_b8,param_3);
  }
  lVar6 = (**(code **)(*local_b8 + 0xb8))();
  if (lVar6 == 0) goto LAB_10017bf83;
  _CGContextSaveGState(*(undefined8 *)(param_2 + 8));
  _CGContextSetAlpha(local_48,*(undefined8 *)(param_2 + 8));
  uVar7 = _CGImageGetWidth(lVar6);
  uVar8 = _CGImageGetHeight(lVar6);
  auVar13._8_8_ = uVar8;
  auVar13._0_8_ = uVar7;
  auVar13 = pblendw(auVar13,(undefined1  [16])0x0,0xcc);
  local_e8._0_8_ =
       ((double)(uVar7 >> 0x20 | _DAT_10070e510) - _DAT_10070e520) +
       SUB168(auVar13 | _DAT_10070e500,0);
  local_e8._8_8_ =
       ((double)(uVar8 >> 0x20 | _UNK_10070e518) - _UNK_10070e528) +
       SUB168(auVar13 | _DAT_10070e500,8);
  if ((local_58._0_4_ != DAT_100700b50) || (NAN(local_58._0_4_) || NAN(DAT_100700b50))) {
    local_e8 = FUN_1001953eb(DAT_100700458 / local_80,local_e8);
  }
  uVar10 = *(undefined8 *)(param_2 + 8);
  local_58 = (long *)param_5[1];
  dVar12 = (double)_CGRectGetMaxY();
  _CGContextTranslateCTM(0,(double)local_58 + dVar12,uVar10);
  _CGContextScaleCTM(DAT_100700458,DAT_100700af8,*(undefined8 *)(param_2 + 8));
  lVar9 = 0;
  do {
    if ((&DAT_10088f5b0)[lVar9 * 2] == param_7) {
      uVar11 = *(undefined4 *)(lVar9 * 8 + 0x10088f5b4);
      goto LAB_10017b7ef;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0xd);
  uVar11 = 2;
LAB_10017b7ef:
  _CGContextSetCompositeOperation(*(undefined8 *)(param_2 + 8),uVar11);
  dVar12 = local_38;
  if (((ulong)local_38 & 1) == 0) {
    local_a8 = local_78;
    plStack_a0 = plStack_70;
    local_98._0_16_ = local_68;
    (**(code **)(*local_b8 + 0x78))(&local_d8);
    cVar5 = _CGRectEqualToRect();
    if (cVar5 == '\0') {
      _CGRectIntegral(&local_a8);
      local_78 = local_a8;
      plStack_70 = plStack_a0;
      local_68 = local_98._0_16_;
      cVar5 = _CGRectIsEmpty();
      if (cVar5 != '\0') {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          FUN_100684a1d(uVar10);
        }
        cVar5 = FUN_1001782e9(0,0);
        if (cVar5 == '\0') goto LAB_10017bf7a;
      }
      if (((ulong)dVar12 & 2) == 0) {
        _CGContextClipToRect();
        _CGContextTranslateCTM(*param_5,param_5[1],*(undefined8 *)(param_2 + 8));
        uVar10 = *(undefined8 *)(param_2 + 8);
        local_58 = (long *)_CGRectGetWidth();
        local_48 = (double)_CGRectGetWidth();
        local_38 = (double)_CGRectGetHeight();
        dVar12 = (double)_CGRectGetHeight();
        _CGContextScaleCTM((double)local_58 / local_48,local_38 / dVar12,uVar10);
        uVar10 = *(undefined8 *)(param_2 + 8);
        local_58 = local_78;
        uStack_50 = 0;
        local_48 = (double)_CGRectGetMaxY();
        dVar12 = (double)_CGRectGetMaxY();
        _CGContextTranslateCTM
                  ((ulong)local_58 ^ _DAT_100700b30,(ulong)(local_48 - dVar12) ^ _DAT_100700b30,
                   uVar10);
        uVar10 = *(undefined8 *)(param_2 + 8);
        goto LAB_10017bb2c;
      }
      _CGContextSaveGState(*(undefined8 *)(param_2 + 8));
      _CGContextClipToRect(*(undefined8 *)(param_2 + 8));
      _CGContextScaleCTM(DAT_100700af8,DAT_100700458,*(undefined8 *)(param_2 + 8));
      _CGContextTranslateCTM
                ((double)((ulong)param_5[2] ^ _DAT_100700b30) - *param_5,param_5[1],
                 *(undefined8 *)(param_2 + 8));
      uVar10 = *(undefined8 *)(param_2 + 8);
      local_58 = (long *)_CGRectGetWidth();
      local_48 = (double)_CGRectGetWidth();
      local_38 = (double)_CGRectGetHeight();
      dVar12 = (double)_CGRectGetHeight();
      _CGContextScaleCTM((double)local_58 / local_48,local_38 / dVar12,uVar10);
      uVar10 = *(undefined8 *)(param_2 + 8);
      local_58 = local_78;
      uStack_50 = 0;
      local_48 = (double)_CGRectGetMaxY();
      _CGRectGetMaxY();
      dVar12 = (double)((ulong)local_58 ^ _DAT_100700b30);
    }
    else {
      uVar10 = *(undefined8 *)(param_2 + 8);
      if (((ulong)dVar12 & 2) == 0) {
LAB_10017bb2c:
        _CGContextDrawImage(uVar10,lVar6);
        goto LAB_10017bf7a;
      }
      _CGContextSaveGState();
      _CGContextScaleCTM(DAT_100700af8,DAT_100700458,*(undefined8 *)(param_2 + 8));
      uVar10 = *(undefined8 *)(param_2 + 8);
      dVar12 = (double)((ulong)param_5[2] ^ _DAT_100700b30) - *param_5;
    }
    _CGContextTranslateCTM(dVar12,uVar10);
    _CGContextDrawImage(*(undefined8 *)(param_2 + 8),lVar6);
    _CGContextRestoreGState(*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar10 = *(undefined8 *)(param_2 + 8);
    plVar2 = (long *)*param_5;
    dVar12 = param_5[1];
    _CGRectIntegral(&local_a8);
    cVar5 = _CGRectIsEmpty();
    if (cVar5 == '\0') {
      local_48 = dVar12;
      local_38 = (double)_CGRectGetMaxX();
      dVar12 = (double)_CGRectGetMaxY();
      _CGImageGetWidth(lVar6);
      _CGImageGetHeight(lVar6);
      FUN_1001953aa(local_80,&local_d8,&local_a8);
      cVar5 = _CGRectEqualToRect();
      _CGContextSaveGState(uVar10);
      _CGContextClipToRect(uVar10);
      uVar4 = local_98._8_8_;
      uVar3 = local_98._0_8_;
      for (; local_48 < dVar12; local_48 = local_48 + (double)uVar4) {
        plVar1 = plVar2;
        if ((double)plVar2 < local_38) {
          do {
            local_d8 = plVar1;
            local_58 = plVar1;
            if (cVar5 == '\0') {
              dStack_d0 = local_48;
              FUN_10019601e(local_80,uVar10,lVar6);
            }
            else {
              dStack_d0 = local_48;
              _CGContextDrawImage(uVar10,lVar6);
            }
            plVar1 = (long *)((double)local_58 + (double)uVar3);
          } while ((double)local_58 + (double)uVar3 < local_38);
        }
      }
      _CGContextRestoreGState(uVar10);
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        FUN_1006849a7(uVar10);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_10017bf7a:
  _CGContextRestoreGState(*(undefined8 *)(param_2 + 8));
LAB_10017bf83:
  if (plStack_b0 != (long *)0x0) {
    LOCK();
    plVar2 = plStack_b0 + 1;
    lVar6 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

