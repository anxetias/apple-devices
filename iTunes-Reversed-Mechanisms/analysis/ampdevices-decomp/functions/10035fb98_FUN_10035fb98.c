// name: FUN_10035fb98
// address: 10035fb98

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10035fb98(long param_1)

{
  undefined1 auVar1 [12];
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int local_88;
  int iStack_84;
  undefined8 uStack_70;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bd7e0 == '\0') {
    lVar5 = 0;
    auVar10 = _PTR___mh_execute_header_10070bce0;
    do {
      iVar3 = auVar10._8_4_;
      auVar15._4_12_ = auVar10._4_12_;
      auVar15._0_4_ = iVar3;
      auVar12._12_4_ = auVar10._12_4_;
      auVar12._0_8_ = auVar15._0_8_;
      auVar12._8_4_ = auVar12._12_4_;
      auVar11._8_8_ = auVar12._8_8_;
      auVar11._4_4_ = _UNK_1007075e8;
      auVar11._0_4_ = iVar3;
      auVar13._0_12_ = auVar11._0_12_;
      auVar13._12_4_ = _UNK_1007075ec;
      auVar16 = pmovzxdq(in_XMM3,auVar10);
      auVar17._0_8_ = (SUB168(auVar16 | _DAT_10070e500,0) - (double)DAT_10070e500) * _DAT_1007454e0;
      auVar17._8_8_ = (SUB168(auVar16 | _DAT_10070e500,8) - DAT_10070e500._8_8_) * _UNK_1007454e8;
      auVar14._0_8_ = (SUB168(auVar13 | _DAT_10070e500,0) - (double)DAT_10070e500) * _DAT_1007454e0;
      auVar14._8_8_ = (SUB168(auVar13 | _DAT_10070e500,8) - DAT_10070e500._8_8_) * _UNK_1007454e8;
      auVar15 = divpd(auVar14,_DAT_1007454f0);
      auVar16 = divpd(auVar17,_DAT_1007454f0);
      in_XMM3 = auVar16;
      dVar6 = (double)_sin(auVar16._0_8_);
      uStack_54 = auVar16._4_4_;
      uStack_50 = auVar16._8_4_;
      uStack_4c = auVar16._12_4_;
      auVar1._4_8_ = extraout_XMM0_Qb;
      auVar1._0_4_ = uStack_54;
      auVar16._0_8_ = auVar1._0_8_ << 0x20;
      auVar16._8_4_ = uStack_50;
      auVar16._12_4_ = uStack_4c;
      dVar7 = (double)_sin(auVar16._8_8_);
      dVar8 = (double)_sin();
      uStack_70 = auVar15._8_8_;
      dVar9 = (double)_sin(uStack_70);
      local_88 = auVar10._0_4_;
      iStack_84 = auVar10._4_4_;
      *(float *)(&DAT_1008bd7f0 + lVar5) = (float)dVar6;
      *(float *)(lVar5 + 0x1008bd7f4) = (float)dVar7;
      *(float *)(lVar5 + 0x1008bd7f8) = (float)dVar8;
      *(float *)(lVar5 + 0x1008bd7fc) = (float)dVar9;
      auVar10._0_4_ = local_88 + _DAT_100707630;
      auVar10._4_4_ = iStack_84 + _UNK_100707634;
      auVar10._8_4_ = iVar3 + _UNK_100707638;
      auVar10._12_4_ = auVar12._12_4_ + _UNK_10070763c;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 800);
    DAT_1008bd7e0 = '\x01';
  }
  lVar5 = FUN_1001c64dc((ulong)*(uint *)(param_1 + 0x1870) << 4);
  *(long *)(param_1 + 0x10) = lVar5;
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "decoderData->eqSamplesIn != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x6c;
  }
  else {
    lVar5 = FUN_1001c64dc((ulong)*(uint *)(param_1 + 0x1870) << 4);
    *(long *)(param_1 + 0x18) = lVar5;
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "decoderData->eqSamplesOut != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      iVar3 = -0x6c;
    }
    else {
      iVar3 = FUN_100414057(param_1 + 0x1290);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          FUN_1001c62d9(param_1 + 0x11e0,0xb0);
          *(undefined4 *)(param_1 + 0x11a0) = 10;
          *(undefined8 *)(param_1 + 0x11a4) = 0;
          *(undefined8 *)(param_1 + 0x11ac) = 0;
          *(undefined8 *)(param_1 + 0x11b4) = 0;
          *(undefined8 *)(param_1 + 0x11bc) = 0;
          *(undefined8 *)(param_1 + 0x11c0) = 0;
          *(undefined8 *)(param_1 + 0x11c8) = 0;
          iVar3 = 0;
          goto LAB_10035fdd6;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_1001c64c1();
      }
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_1001c64c1();
    }
  }
LAB_10035fdd6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

