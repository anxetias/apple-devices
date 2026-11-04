// name: FUN_100414231
// address: 100414231

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_100414231(float param_1,float param_2,float param_3,float param_4,long *param_5,uint param_6)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 local_68 [12];
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  undefined8 extraout_XMM0_Qb;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "limiter != nullptr";
LAB_1004144df:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (*param_5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "limiter->delayBuffer != nullptr";
      goto LAB_1004144df;
    }
  }
  else {
    if ((int)param_5[1] != 0) {
      if (param_6 - 1 < 2) {
        uVar7 = (ulong)(param_1 * param_4);
        *(int *)(param_5 + 5) = (int)uVar7;
        iVar9 = (int)(long)(param_2 * param_4);
        if ((int)uVar7 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "limiter->attackFrames != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          *(undefined4 *)(param_5 + 5) = 1;
          uVar7 = 1;
        }
        if (iVar9 == 0) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "decayInFrames != 0";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar7 = (ulong)*(uint *)(param_5 + 5);
          iVar9 = 1;
        }
        uVar8 = *(uint *)(param_5 + 1);
        uVar4 = 0;
        if (uVar8 / param_6 <= (uint)uVar7) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "limiter->attackFrames < (limiter->delayBufferSize / numChannels)";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar8 = *(uint *)(param_5 + 1);
          uVar6 = uVar8 / param_6 - 1;
          uVar7 = (ulong)uVar6;
          *(uint *)(param_5 + 5) = uVar6;
        }
        auVar13._0_8_ = uVar7 & 0xffffffff;
        auVar13._8_4_ = iVar9;
        auVar13._12_4_ = 0;
        stack0xffffffffffffffa0 = SUB168(auVar13 | _DAT_10070e500,8) - DAT_10070e500._8_8_;
        local_68._0_8_ = SUB168(auVar13 | _DAT_10070e500,0) - (double)DAT_10070e500;
        auVar12._0_8_ = _log2();
        auVar12._8_8_ = extraout_XMM0_Qb;
        auVar13 = roundsd(auVar12,auVar12,10);
        uVar6 = param_6 << ((byte)(long)auVar13._0_8_ & 0x1f);
        if ((int)(long)auVar13._0_8_ == 0) {
          uVar6 = uVar8;
        }
        *(uint *)(param_5 + 6) = uVar6 - 1;
        dVar10 = (double)___exp10((double)param_3 / DAT_100700ae8);
        *(float *)((long)param_5 + 0x2c) = (float)dVar10;
        auVar2._8_8_ = _UNK_10070e4f8;
        auVar2._0_8_ = _DAT_10070e4f0;
        auVar13 = divpd(auVar2,_local_68);
        dVar10 = (double)_pow(_DAT_100748970);
        local_68._4_4_ = auVar13._4_4_;
        local_68._8_4_ = auVar13._8_4_;
        uStack_5c = auVar13._12_4_;
        auVar1._4_8_ = extraout_XMM1_Qb;
        auVar1._0_4_ = local_68._4_4_;
        auVar14._0_8_ = auVar1._0_8_ << 0x20;
        auVar14._8_4_ = local_68._8_4_;
        auVar14._12_4_ = uStack_5c;
        dVar11 = (double)_pow(_DAT_100748970,auVar14._8_8_);
        *(ulong *)((long)param_5 + 0x34) =
             CONCAT44((float)(_UNK_10070e4f8 - dVar11),(float)(_DAT_10070e4f0 - dVar10));
        *(uint *)((long)param_5 + 0x24) = param_6;
        FUN_10041469d(param_5);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(numChannels != 0 && numChannels <= 2)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar4 = 0xffffffce;
      }
      goto LAB_100414513;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_4a = "limiter->delayBufferSize > 0";
      goto LAB_1004144df;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffe4;
LAB_100414513:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

