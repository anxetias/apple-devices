// name: FUN_1002a7da8
// address: 1002a7da8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002a7da8(long param_1,long param_2,long param_3,int *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  int *piVar17;
  long lVar18;
  bool bVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  int local_870;
  uint local_86c;
  long local_868;
  long local_860;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qb_01;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_2 + 0x886) == '\0') {
    uVar15 = 0;
    do {
      uVar11 = uVar15;
      if (uVar11 == 5) break;
      uVar15 = uVar11 + 1;
    } while (*(char *)(param_2 + 0x887 + uVar11) == '\0');
    bVar19 = 4 < uVar11;
  }
  else {
    bVar19 = false;
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    *(undefined1 *)(param_1 + 0xd4) = *(undefined1 *)(param_2 + 0xcf9);
  }
  if (*(char *)(param_2 + 0xcfa) == '\0') {
    local_870 = 0;
    local_860 = param_2;
    if (bVar19) {
LAB_1002a7e6d:
      iVar7 = *(int *)(local_860 + 0x870);
      if ((iVar7 == 4) || (iVar7 == 1)) {
        if (!NAN(*(double *)(local_860 + 0xd00))) {
          *(double *)(param_1 + 0xb8) = *(double *)(local_860 + 0xd00);
        }
        if (!NAN(*(double *)(local_860 + 0xd08))) {
          *(double *)(param_1 + 0xc0) = *(double *)(local_860 + 0xd08);
        }
        if (*(int *)(local_860 + 0xd10) != 0) {
          *(int *)(param_1 + 0x58) = *(int *)(local_860 + 0xd10);
        }
        if ((*(int *)(local_860 + 0xd18) != 0) && (*(int *)(local_860 + 0xd1c) != 0)) {
          lVar9 = FUN_1004993ef(param_1,1,0,1);
          auVar20._8_8_ = extraout_XMM0_Qb;
          auVar20._0_8_ = extraout_XMM0_Qa;
          if (lVar9 == 0) {
            uVar13 = FUN_1001cc310();
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "sourceImageInstance != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            FUN_1001782e9(0,0);
          }
          else {
            auVar20 = pmovzxdq(auVar20,*(undefined8 *)(local_860 + 0xd18));
            auVar20 = auVar20 | _DAT_10070e500;
            dVar22 = (double)DAT_10070e500;
            dVar23 = DAT_10070e500._8_8_;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            *(double *)(lVar9 + 0x28) = auVar20._0_8_ - dVar22;
            *(double *)(lVar9 + 0x30) = auVar20._8_8_ - dVar23;
          }
        }
        *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfe;
      }
      else if (bVar19) {
        if ((*(int *)(local_860 + 0xd18) != 0) && (*(int *)(local_860 + 0xd1c) != 0)) {
          if (iVar7 == 5 || iVar7 - 900U < 100) {
            lVar9 = FUN_1004993b9(param_1,iVar7,*(undefined2 *)(local_860 + 0x874));
            auVar21._8_8_ = extraout_XMM0_Qb_00;
            auVar21._0_8_ = extraout_XMM0_Qa_00;
          }
          else {
            lVar9 = FUN_1004993ef(param_1,iVar7,0,1);
            auVar21._8_8_ = extraout_XMM0_Qb_01;
            auVar21._0_8_ = extraout_XMM0_Qa_01;
          }
          if (lVar9 == 0) {
            uVar13 = FUN_1001cc310();
            uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "sourceImageInstance != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar13);
            FUN_1001782e9(0,0);
          }
          else {
            auVar20 = pmovzxdq(auVar21,*(undefined8 *)(local_860 + 0xd18));
            auVar20 = auVar20 | _DAT_10070e500;
            dVar22 = (double)DAT_10070e500;
            dVar23 = DAT_10070e500._8_8_;
            *(undefined8 *)(lVar9 + 0x18) = 0;
            *(undefined8 *)(lVar9 + 0x20) = 0;
            *(double *)(lVar9 + 0x28) = auVar20._0_8_ - dVar22;
            *(double *)(lVar9 + 0x30) = auVar20._8_8_ - dVar23;
          }
        }
      }
      else {
        sVar2 = *(short *)(param_1 + 0x70);
        if (sVar2 == 0) {
          uVar13 = FUN_1001cc310();
          uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "imageInfo->numNeedToConvertSourceFaceThumbInstances > 0";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar13);
          FUN_1001782e9(0,0);
          sVar2 = *(short *)(param_1 + 0x70);
        }
        if (sVar2 == 1) {
          *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfd;
        }
        *(short *)(param_1 + 0x70) = sVar2 + -1;
      }
      if (*(char *)(param_1 + 0xb3) == '\0') {
        *(undefined1 *)(param_1 + 0x80) = 0;
      }
      iVar7 = 0;
      goto LAB_1002a82ac;
    }
    local_868 = param_3;
    iVar7 = FUN_10017dbe8(param_2 + 0x890,param_5,&local_858,0x3ff,&local_870);
    param_2 = local_860;
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        if (*(int *)(local_868 + 0x84) != 0) {
          lVar9 = local_860 + 0x886;
          puVar16 = (undefined4 *)(local_868 + 0xa8);
          lVar18 = 0;
          uVar15 = 0;
          local_86c = 0;
          piVar17 = param_4;
          do {
            cVar6 = FUN_10015fa28(lVar9,uVar15 & 0xffffffff);
            if (cVar6 != '\0') {
              iVar7 = *piVar17;
              uVar14 = 0;
              if (iVar7 == 5 || iVar7 - 900U < 100) {
                uVar14 = *(undefined2 *)(local_860 + 0x874);
              }
              lVar10 = FUN_100499159(param_1,iVar7,uVar14);
              if (lVar10 == 0) {
                uVar13 = FUN_1001cc310();
                uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "imageInstance != nullptr";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                (*(code *)PTR__objc_release_10082c7b0)(uVar13);
                FUN_1001782e9(0,0);
                uVar3 = *(uint *)(local_868 + 0x84);
                iVar7 = -0x6c;
                param_2 = local_860;
                if ((ulong)uVar3 != 0) {
                  uVar15 = 0;
                  uVar14 = *(undefined2 *)(local_860 + 0x874);
                  do {
                    cVar6 = FUN_10015fa28(lVar9,uVar15 & 0xffffffff);
                    if (cVar6 != '\0') {
                      iVar8 = *param_4;
                      if (iVar8 == 5 || iVar8 - 900U < 100) {
                        lVar18 = FUN_1004993b9(param_1,iVar8,uVar14);
                      }
                      else {
                        lVar18 = FUN_1004993ef(param_1,iVar8,0,1);
                      }
                      if (lVar18 != 0) {
                        FUN_100497f5f(lVar18);
                      }
                    }
                    uVar15 = uVar15 + 1;
                    param_4 = param_4 + 0x1e;
                    param_2 = local_860;
                  } while (uVar3 != uVar15);
                }
                goto LAB_1002a8183;
              }
              uVar13 = FUN_100499456(lVar10);
              FUN_1001ddddc(uVar13,&local_858,local_870 * 2,lVar10 + 0x44);
              if ((puVar16[0xd] == 0x706e6720) || (puVar12 = puVar16, puVar16[0xd] == 0x6a706567)) {
                uVar11 = (ulong)local_86c;
                local_86c = local_86c + 1;
                puVar12 = (undefined4 *)(uVar11 * 4 + *(long *)(local_860 + 0xcc8));
              }
              *(undefined4 *)(lVar10 + 0x3c) = *puVar12;
              *(undefined4 *)(lVar10 + 0x40) = *puVar16;
              puVar1 = (undefined8 *)(*(long *)(local_860 + 0xcd8) + lVar18);
              uVar13 = *puVar1;
              uVar4 = puVar1[1];
              puVar1 = (undefined8 *)(*(long *)(local_860 + 0xcd8) + 0x10 + lVar18);
              uVar5 = puVar1[1];
              *(undefined8 *)(lVar10 + 0x28) = *puVar1;
              *(undefined8 *)(lVar10 + 0x30) = uVar5;
              *(undefined8 *)(lVar10 + 0x18) = uVar13;
              *(undefined8 *)(lVar10 + 0x20) = uVar4;
              *(undefined4 *)(lVar10 + 0x38) =
                   *(undefined4 *)(*(long *)(local_860 + 0xcd0) + uVar15 * 4);
              *(char *)(lVar10 + 0x52) = (char)piVar17[3];
            }
            uVar15 = uVar15 + 1;
            lVar18 = lVar18 + 0x20;
            piVar17 = piVar17 + 0x1e;
            puVar16 = puVar16 + 0x38;
          } while (uVar15 < *(uint *)(local_868 + 0x84));
        }
        goto LAB_1002a7e6d;
      }
      uVar13 = FUN_1001cc310();
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      cVar6 = _os_log_type_enabled(uVar13,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar13);
      param_2 = local_860;
    }
  }
  else {
    if ((*(int *)(param_2 + 0x870) != 4) && (iVar7 = 0, *(int *)(param_2 + 0x870) != 1))
    goto LAB_1002a82ac;
    *(char *)(param_1 + 0x80) = *(char *)(param_2 + 0xcfa);
    iVar7 = 0;
  }
LAB_1002a8183:
  if ((((*(char *)(param_2 + 0xcb0) == '\x01') && (*(char *)(param_2 + 0xcf8) == '\0')) &&
      (iVar8 = FUN_100182d4d(param_2 + 0x890), iVar8 != -0x80)) && (iVar8 != 0)) {
    uVar13 = FUN_1001cc310();
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    cVar6 = _os_log_type_enabled(uVar13,0x10);
    if (cVar6 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x400;
      local_84a = iVar8;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_858,0x12);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  }
LAB_1002a82ac:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

