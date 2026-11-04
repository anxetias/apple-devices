// name: FUN_10019601e
// address: 10019601e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10019601e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_48._0_8_ = param_1;
  uVar4 = _CGImageGetWidth(param_3);
  uVar5 = _CGImageGetHeight(param_3);
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar4;
  auVar9 = pblendw((undefined1  [16])0x0,auVar9,0x33);
  auVar7._8_7_ = (uint7)((ulong)uVar5 >> 0x20);
  auVar7._0_8_ = uVar4 >> 0x20;
  auVar7[0xf] = 0;
  dVar6 = (SUB168(auVar7 | _DAT_10070e510,0) - _DAT_10070e520) + SUB168(auVar9 | _DAT_10070e500,0);
  dVar8 = (SUB168(auVar7 | _DAT_10070e510,8) - _UNK_10070e528) + SUB168(auVar9 | _DAT_10070e500,8);
  bVar1 = NAN((double)local_48._0_8_);
  bVar2 = (double)local_48._0_8_ == DAT_100700458;
  auVar10._0_8_ = (DAT_100700458 / (double)local_48._0_8_) * dVar6;
  auVar10._8_8_ = (DAT_100700458 / (double)local_48._0_8_) * dVar8;
  local_48 = roundpd(auVar10,auVar10,9);
  if ((bVar2) && (!bVar1 && !NAN(DAT_100700458))) {
    local_48._8_8_ = dVar8;
    local_48._0_8_ = dVar6;
  }
  _CGRectIntegral(local_98);
  cVar3 = _CGRectIsEmpty();
  if (cVar3 == '\0') {
    _CGContextSaveGState(param_2);
    _CGContextClipToRect(param_2);
    _CGContextTranslateCTM(in_stack_00000028,in_stack_00000030,param_2);
    local_38 = (double)_CGRectGetWidth();
    dVar6 = (double)_CGRectGetWidth();
    local_38 = local_38 / dVar6;
    local_58 = (double)_CGRectGetHeight();
    dVar6 = (double)_CGRectGetHeight();
    _CGContextScaleCTM(local_38,local_58 / dVar6,param_2);
    local_38 = (double)CONCAT44(SUB84(local_98._0_8_,4) ^ _UNK_100700b34,
                                (uint)local_98._0_8_ ^ _DAT_100700b30);
    uStack_30 = _UNK_100700b38;
    uStack_2c = _UNK_100700b3c;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = local_48._0_8_;
    uStack_60 = local_48._8_8_;
    local_58 = (double)_CGRectGetMaxY();
    _CGRectGetMaxY();
    _CGContextTranslateCTM(param_2);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = local_48._0_8_;
    uStack_60 = local_48._8_8_;
    _CGContextDrawImage(param_2,param_3);
    _CGContextRestoreGState(param_2);
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      FUN_10069538a(uVar5);
    }
    FUN_1001782e9(0,0);
  }
  return;
}

