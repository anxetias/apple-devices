// name: FUN_10050c1f0
// address: 10050c1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10050c1f0(long param_1)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  long lVar12;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  pvVar8 = (void *)FUN_1001c629e(0x6660,&DAT_100711c6e);
  if (pvVar8 == (void *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "deviceInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x6c;
    goto LAB_10050c43f;
  }
  iVar7 = FUN_100598b00(*(undefined8 *)(param_1 + 0x66d8),pvVar8,&local_50);
  if (iVar7 != -0x80) {
    if (iVar7 == 0) {
      _memcpy((void *)(param_1 + 0x50),pvVar8,0x6660);
      if (*(char *)(param_1 + 0x6b04) != '\0') {
        *(undefined1 *)(param_1 + 0x39e) = 1;
      }
      if (*(char *)(param_1 + 0x6b05) != '\0') {
        *(undefined1 *)(param_1 + 0x39d) = 1;
      }
      if (*(char *)(param_1 + 0x338) != '\0') {
        auVar15 = FUN_10017060f(*(undefined8 *)(param_1 + 0x71b8));
        auVar14._0_8_ = auVar15._8_8_;
        auVar14._8_8_ = extraout_XMM1_Qb;
        auVar15._8_8_ = extraout_XMM0_Qb;
        *(undefined8 *)(param_1 + 0x71b8) = 0;
        if (local_50 != 0) {
          lVar9 = FUN_1001705fc();
          auVar14._8_8_ = extraout_XMM1_Qb_00;
          auVar14._0_8_ = extraout_XMM1_Qa;
          auVar15._8_8_ = extraout_XMM0_Qb_00;
          auVar15._0_8_ = extraout_XMM0_Qa;
          *(long *)(param_1 + 0x71b8) = lVar9;
          if (lVar9 != 0) goto LAB_10050c3dd;
        }
        *(undefined2 *)(param_1 + 0x335) = 0;
        *(undefined1 *)(param_1 + 0x337) = 0;
        iVar5 = _UNK_1007534fc;
        iVar4 = _UNK_1007534f8;
        iVar3 = _UNK_1007534f4;
        iVar2 = _DAT_1007534f0;
        auVar1 = _DAT_100700430;
        auVar11 = pmovsxbq(auVar15,_DAT_100753520);
        auVar13 = pmovsxbq(auVar14,_DAT_100753522);
        lVar9 = 0;
        auVar15 = pmovsxbq(in_XMM5,_DAT_100753524);
        do {
          auVar14 = auVar13 ^ auVar1;
          if (auVar14._4_4_ == iVar3 && auVar14._0_4_ < iVar2) {
            *(undefined1 *)(param_1 + 0x460 + lVar9) = 0;
          }
          if (auVar14._12_4_ == iVar5 && auVar14._8_4_ < iVar4) {
            *(undefined1 *)(param_1 + 0x484 + lVar9) = 0;
          }
          auVar14 = auVar11 ^ auVar1;
          if (auVar14._4_4_ == iVar3 && auVar14._0_4_ < iVar2) {
            *(undefined1 *)(param_1 + 0x4a8 + lVar9) = 0;
          }
          if (auVar14._12_4_ == iVar5 && auVar14._8_4_ < iVar4) {
            *(undefined1 *)(param_1 + 0x4cc + lVar9) = 0;
          }
          lVar12 = auVar13._8_8_;
          auVar13._0_8_ = auVar13._0_8_ + auVar15._0_8_;
          auVar13._8_8_ = lVar12 + auVar15._8_8_;
          lVar12 = auVar11._8_8_;
          auVar11._0_8_ = auVar11._0_8_ + auVar15._0_8_;
          auVar11._8_8_ = lVar12 + auVar15._8_8_;
          lVar9 = lVar9 + 0x90;
        } while (lVar9 != 0x2d0);
        lVar9 = 0;
        do {
          *(undefined2 *)(param_1 + 0x734 + lVar9) = 0;
          *(undefined1 *)(param_1 + 0x736 + lVar9) = 0;
          lVar9 = lVar9 + 0x31c;
        } while (lVar9 != 0x3e30);
      }
LAB_10050c3dd:
      *(undefined1 *)(param_1 + 0x15218) = 1;
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = (char *)CONCAT44(local_3a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  FUN_10017060f(local_50);
  operator_delete(pvVar8);
LAB_10050c43f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

