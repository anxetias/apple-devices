// name: FUN_1005980c8
// address: 1005980c8

void FUN_1005980c8(uint *param_1,long param_2,long param_3,int param_4,uint param_5,char param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 2) {
    fVar9 = DAT_100700b50;
    if (param_6 != '\0') {
      fVar9 = (float)param_1[0x46c];
    }
    pfVar5 = (float *)(param_1 + 0x46);
    iVar6 = 0;
    do {
      if (((char)param_1[6] != '\0') || (*(char *)(pfVar5 + 6) != '\0')) {
        auVar12 = ZEXT416(*param_1);
        auVar10 = insertps(ZEXT416(param_1[1]),pfVar5[1],0x10);
        fVar14 = *pfVar5;
        if (param_4 != 0) {
          auVar15 = insertps(ZEXT416(param_1[5]),pfVar5[5],0x10);
          auVar13 = insertps(ZEXT416(param_1[4]),pfVar5[4],0x10);
          fVar1 = (float)param_1[2];
          fVar2 = (float)param_1[3];
          auVar12 = insertps(auVar12,ZEXT416((uint)*pfVar5),0x10);
          lVar8 = 0;
          auVar11 = auVar10;
          do {
            auVar10 = auVar12;
            uVar4 = *(undefined8 *)(param_2 + lVar8 * 8);
            auVar12._0_4_ =
                 fVar1 * auVar11._0_4_ +
                 (float)uVar4 * auVar13._0_4_ * auVar15._0_4_ * fVar9 + fVar2 * auVar10._0_4_;
            auVar12._4_4_ =
                 fVar1 * auVar11._4_4_ +
                 (float)((ulong)uVar4 >> 0x20) * auVar13._4_4_ * auVar15._4_4_ * fVar9 +
                 fVar2 * auVar10._4_4_;
            auVar12._8_4_ =
                 auVar11._8_4_ * 0.0 +
                 auVar13._8_4_ * auVar15._8_4_ * 0.0 * 0.0 + auVar10._8_4_ * 0.0;
            auVar12._12_4_ =
                 auVar11._12_4_ * 0.0 +
                 auVar13._12_4_ * auVar15._12_4_ * 0.0 * 0.0 + auVar10._12_4_ * 0.0;
            uVar4 = *(undefined8 *)(param_3 + lVar8 * 8);
            *(ulong *)(param_3 + lVar8 * 8) =
                 CONCAT44((float)((ulong)uVar4 >> 0x20) + (auVar12._4_4_ - auVar11._4_4_),
                          (float)uVar4 + (auVar12._0_4_ - auVar11._0_4_));
            lVar8 = lVar8 + 1;
            auVar11 = auVar10;
            fVar14 = auVar12._4_4_;
          } while (param_4 != (int)lVar8);
        }
        *param_1 = auVar12._0_4_;
        param_1[1] = auVar10._0_4_;
        *pfVar5 = fVar14;
        uVar4 = extractps(auVar10,1);
        *(undefined8 *)(pfVar5 + 1) = uVar4;
      }
      param_1 = param_1 + 7;
      pfVar5 = pfVar5 + 7;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 10);
  }
  else if (param_5 == 1) {
    FUN_100598310(param_1,0,1,param_2,param_3,param_4,param_6);
  }
  else if (param_5 < 0x11) {
    if (param_5 != 0) {
      uVar7 = 0;
      do {
        FUN_100598310(param_1,uVar7,param_5,param_2,param_3,param_4,param_6);
        uVar7 = uVar7 + 1;
      } while (param_5 != uVar7);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "numChannels <= kMaxEqualizerChannels";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

