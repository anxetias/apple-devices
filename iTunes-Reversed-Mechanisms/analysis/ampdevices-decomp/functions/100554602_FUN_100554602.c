// name: FUN_100554602
// address: 100554602

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100554602(long param_1,long param_2,uint *param_3,double *param_4,undefined1 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ushort uVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint local_7c [2];
  char *local_74;
  undefined2 local_6c;
  int local_6a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  if (*(char *)(param_1 + 0x64a8) == '\0') {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mPlayerOpen";
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x1c;
    goto LAB_100554ef1;
  }
  *(undefined4 *)(param_1 + 0x64a4) = 1;
  uVar6 = FUN_1001ebb2f(1);
  lVar16 = *(long *)(param_1 + 0x4b8);
  if ((lVar16 == 0) || (lVar2 = *(long *)(lVar16 + 8), lVar2 == param_1)) {
LAB_1005546e2:
    auVar19._0_8_ =
         (double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0x1490));
    auVar19._8_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x1490) >> 0x20);
    auVar19._12_4_ = DAT_10070d3c0._4_4_;
    *param_4 = (auVar19._0_8_ - _DAT_10070d3d0) + (auVar19._8_8_ - _UNK_10070d3d8);
    if (*(int *)(param_1 + 0x1478) < *(int *)(param_1 + 0x1474)) {
      do {
        local_7c[0] = 0;
        if (*(ulong *)(param_1 + 0x14a8) <= *(ulong *)(param_1 + 0x1488)) break;
        if (*(char *)(param_1 + 0x64a8) == '\0') {
          iVar8 = -0x1c;
          goto LAB_100554ea3;
        }
        iVar8 = FUN_1005480c6(param_1);
        if (iVar8 == 0x2351) {
          if (*(char *)(param_1 + 0x64b3) == '\0') {
            if (*(long **)(param_1 + 0x38) != (long *)0x0) {
              *(undefined1 *)(param_1 + 0x64b3) = 1;
              iVar7 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))();
              cVar5 = iVar7 != 0x7374726d;
              *(char *)(param_1 + 0x64b4) = cVar5;
              goto LAB_1005547a6;
            }
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mDataHandler != nullptr";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0);
          }
          else {
            cVar5 = *(char *)(param_1 + 0x64b4);
LAB_1005547a6:
            if (cVar5 != '\0') {
              *(undefined1 *)(param_1 + 0x64b5) = 1;
              do {
                FUN_1001ee7b6(100);
                iVar8 = (**(code **)(**(long **)(param_1 + 0x38) + 0x1a8))();
                if (iVar8 != 0) break;
                if (*(char *)(param_1 + 0x64b6) != '\0') {
                  iVar8 = 0x2351;
                  break;
                }
                iVar8 = FUN_1005480c6(param_1);
              } while (iVar8 == 0x2351);
              *(undefined1 *)(param_1 + 0x64b5) = 0;
              goto LAB_1005547f6;
            }
          }
          iVar8 = 0x2351;
          goto LAB_100554ea3;
        }
LAB_1005547f6:
        if (iVar8 != 0) goto LAB_100554ea3;
        plVar3 = *(long **)(param_1 + 0x4c0);
        if ((plVar3 != (long *)0x0) &&
           (iVar9 = (**(code **)(*plVar3 + 0x20))
                              (plVar3,*(undefined8 *)(param_1 + 0x1450),
                               *(undefined4 *)(param_1 + 0x147c)), iVar9 != 0)) {
          if (iVar9 != -0x80) {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
LAB_10055502a:
          iVar8 = 0;
          goto LAB_100554ea5;
        }
        if (*(long *)(param_1 + 0x64c0) != 0) {
          FUN_10017983e(*(long *)(param_1 + 0x64c0),*(undefined8 *)(param_1 + 0x1450),
                        *(undefined4 *)(param_1 + 0x147c));
        }
        if (*(int *)(param_1 + 0x850) == 0x616c6163) {
          FUN_10015fb7e(&local_58,*(undefined8 *)(param_1 + 0x1450),
                        *(undefined4 *)(param_1 + 0x147c));
          local_7c[0] = *(uint *)(param_1 + 0x1468);
          iVar9 = FUN_1001274c0(*(undefined8 *)(param_1 + 0x1018),&local_58,param_2,local_7c[0],
                                *(undefined4 *)(param_1 + 0x860),local_7c);
          if (iVar9 == -0x80) {
LAB_100554a0a:
            local_7c[0] = 0;
            uVar17 = 0;
          }
          else {
            if (iVar9 != 0) {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11);
              if (cVar5 != '\0') {
                local_7c[1] = 0x8220202;
                local_74 = "Assertion failure";
                local_6c = 0x400;
                local_6a = iVar9;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_7c + 1,
                                    0x12);
              }
              goto LAB_100554a0a;
            }
            uVar17 = (ulong)local_7c[0];
          }
          iVar7 = 0;
LAB_100554b51:
          if ((int)uVar17 < 1) goto LAB_100554b5e;
LAB_100554b55:
          if (*(char *)(param_1 + 0x64ad) != '\0') goto LAB_100554b5e;
          lVar16 = *(ulong *)(param_1 + 0x1488) - (long)*(int *)(param_1 + 0x14d0);
          if (*(ulong *)(param_1 + 0x1488) < (ulong)(long)*(int *)(param_1 + 0x14d0)) {
            lVar16 = 0;
          }
          uVar10 = *(uint *)(param_1 + 0x1480);
          if (uVar10 == 0) {
            if ((uVar17 + lVar16 <= *(ulong *)(param_1 + 0x14a8)) ||
               (local_7c[0] = (int)*(ulong *)(param_1 + 0x14a8) - (int)lVar16, 0 < (int)local_7c[0])
               ) goto LAB_100554b5e;
          }
          else if (uVar10 < *(uint *)(param_1 + 0x868)) {
            local_7c[0] = (int)uVar17 - uVar10;
            *(undefined4 *)(param_1 + 0x1480) = 0;
            if (0 < (int)local_7c[0]) {
              if (0 < (int)uVar10) {
                FUN_1001c631b(param_2 + (ulong)(uVar10 * *(int *)(param_1 + 0x860)) * 4,param_2,
                              (ulong)(local_7c[0] * *(int *)(param_1 + 0x860)) << 2);
              }
              goto LAB_100554b5e;
            }
          }
          else {
            *(uint *)(param_1 + 0x1480) = uVar10 - *(uint *)(param_1 + 0x868);
          }
        }
        else {
          iVar7 = FUN_1001231e2(*(undefined8 *)(param_1 + 0xf60),*(undefined8 *)(param_1 + 0x1450),
                                *(undefined4 *)(param_1 + 0x147c));
          if (iVar7 != 0) {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "decodeErr == MP4NoErr";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar9 = -0xd0;
            goto LAB_10055502a;
          }
          lVar16 = param_2;
          if ((2 < *(uint *)(param_1 + 0x85c)) && (lVar16 = *(long *)(param_1 + 0xf58), lVar16 == 0)
             ) {
            lVar16 = FUN_1001c63e1((ulong)(*(uint *)(param_1 + 0x85c) * *(int *)(param_1 + 0x868))
                                   << 2);
            *(long *)(param_1 + 0xf58) = lVar16;
            if (lVar16 == 0) {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mMultiChannelSampleBuffer != nullptr";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              local_7c[0] = 0;
              iVar9 = -0x6c;
              goto LAB_10055502a;
            }
          }
          *(long *)(param_1 + 0xf68) = lVar16;
          *(undefined4 *)(param_1 + 0xfdc) = 1;
          iVar7 = (**(code **)(**(long **)(param_1 + 0xf60) + 0x60))();
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            uVar11 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar11);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "decodeErr == MP4NoErr";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0);
            *(undefined4 *)(param_1 + 0xfd0) = 0;
          }
          fVar4 = DAT_1007563f8;
          if (2 < *(uint *)(param_1 + 0x85c)) {
            if (*(uint *)(param_1 + 0x85c) == 6) {
              iVar8 = *(int *)(param_1 + 0xfd0);
              if (0 < iVar8) {
                pfVar14 = *(float **)(param_1 + 0xf58);
                lVar16 = 0;
                do {
                  *(float *)(param_2 + lVar16 * 8) =
                       *pfVar14 * fVar4 + pfVar14[3] * fVar4 + pfVar14[1];
                  *(float *)(param_2 + 4 + lVar16 * 8) =
                       *pfVar14 * fVar4 + pfVar14[4] * fVar4 + pfVar14[2];
                  pfVar14 = pfVar14 + 6;
                  lVar16 = lVar16 + 1;
                } while (iVar8 != (int)lVar16);
              }
            }
            else {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "numMultichannels == 6";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0);
            }
          }
          if (*(char *)(param_1 + 0xff8) == '\x01') {
            if (*(char *)(param_1 + 0x6498) == '\0') {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mSBRflag != kCodecExtensionNotPresent";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0);
            }
            *(undefined1 *)(param_1 + 0x6498) = 1;
            if (*(int *)(param_1 + 0x649c) == 0) {
              *(undefined4 *)(param_1 + 0x649c) = *(undefined4 *)(param_1 + 0x1478);
            }
          }
          if (*(char *)(param_1 + 0xff9) == '\x01') {
            if (*(char *)(param_1 + 0x6499) == '\0') {
              uVar11 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar11);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mPSflag != kCodecExtensionNotPresent";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0);
            }
            *(undefined1 *)(param_1 + 0x6499) = 1;
            if (*(int *)(param_1 + 0x64a0) == 0) {
              *(undefined4 *)(param_1 + 0x64a0) = *(undefined4 *)(param_1 + 0x1478);
            }
          }
          local_7c[0] = *(uint *)(param_1 + 0xfd0);
          uVar17 = (ulong)local_7c[0];
          uVar15 = (ulong)(int)local_7c[0];
          uVar12 = *(ulong *)(param_1 + 0x1468);
          if (*(ulong *)(param_1 + 0x1468) < uVar15) {
            *(ulong *)(param_1 + 0x1468) = uVar15;
            uVar12 = uVar15;
          }
          uVar13 = (short)local_7c[0] - 1;
          if ((-1 < (short)uVar13) &&
             ((uint)*(ushort *)(param_1 + 0xfd4) < *(uint *)(param_1 + 0x860))) {
            uVar15 = (ulong)uVar13;
            do {
              uVar1 = *(undefined4 *)(param_2 + uVar15 * 4);
              *(undefined4 *)(param_2 + 4 + uVar15 * 8) = uVar1;
              *(undefined4 *)(param_2 + uVar15 * 8) = uVar1;
              bVar18 = uVar15 != 0;
              uVar15 = uVar15 - 1;
            } while (bVar18);
          }
          iVar9 = 0;
          if (0 < (int)local_7c[0]) {
            if (uVar12 < uVar17) {
              local_7c[0] = (uint)uVar12;
              iVar9 = 0;
              uVar17 = uVar12 & 0xffffffff;
              goto LAB_100554b51;
            }
            goto LAB_100554b55;
          }
LAB_100554b5e:
          if (iVar7 == 0) {
            lVar16 = *(long *)(param_1 + 0x1490);
            auVar21._8_4_ = (int)((ulong)lVar16 >> 0x20);
            auVar21._0_8_ = lVar16;
            auVar21._12_4_ = DAT_10070d3c0._4_4_;
            *param_4 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar16) - _DAT_10070d3d0) +
                       (auVar21._8_8_ - _UNK_10070d3d8);
            uVar12 = (int)local_7c[0] + lVar16;
            *(ulong *)(param_1 + 0x1490) = uVar12;
            *(undefined4 *)(param_1 + 0x1470) = 0;
            if (*(char *)(param_1 + 0x64ad) == '\0') {
              bVar18 = *(ulong *)(param_1 + 0x14a8) <= uVar12;
              if (bVar18) {
                iVar9 = 0;
              }
              iVar8 = -0x27;
              if (!bVar18) {
                iVar8 = 0;
              }
            }
            else {
              iVar8 = 0;
            }
            goto LAB_100554ea5;
          }
          local_7c[0] = 0;
          uVar10 = *(int *)(param_1 + 0x1470) + 1;
          *(uint *)(param_1 + 0x1470) = uVar10;
          if (10 < uVar10) {
            iVar9 = -3;
            goto LAB_100554e7f;
          }
          *(long *)(param_1 + 0x1490) = *(long *)(param_1 + 0x1490) + *(long *)(param_1 + 0x1468);
          if ((*(long **)(param_1 + 0xf60) != (long *)0x0) &&
             (*(int *)(param_1 + 0x850) == 0x6d703461)) {
            (**(code **)(**(long **)(param_1 + 0xf60) + 0x48))();
            *(undefined4 *)(param_1 + 0x14d0) = 0;
          }
        }
        local_7c[0] = 0;
        auVar20._0_8_ =
             (double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0x1490));
        auVar20._8_4_ = (int)((ulong)*(undefined8 *)(param_1 + 0x1490) >> 0x20);
        auVar20._12_4_ = DAT_10070d3c0._4_4_;
        *param_4 = (auVar20._0_8_ - _DAT_10070d3d0) + (auVar20._8_8_ - _UNK_10070d3d8);
      } while (*(int *)(param_1 + 0x1478) < *(int *)(param_1 + 0x1474));
      goto LAB_100554e9e;
    }
    iVar9 = 0;
LAB_100554e7f:
    local_7c[0] = 0;
    iVar8 = -0x27;
  }
  else {
    local_7c[0] = 0;
    if (lVar2 == 0) {
LAB_1005546a2:
      if (*(char *)(param_1 + 0x64ae) == '\0') {
        iVar7 = (**(code **)(**(long **)(param_1 + 0x38) + 0x120))();
        if (iVar7 != 0) goto LAB_100554e9e;
        lVar16 = *(long *)(param_1 + 0x4b8);
      }
      *(long *)(lVar16 + 8) = param_1;
      if ((*(long **)(param_1 + 0xf60) != (long *)0x0) && (*(int *)(param_1 + 0x850) == 0x6d703461))
      {
        (**(code **)(**(long **)(param_1 + 0xf60) + 0x48))();
        *(undefined4 *)(param_1 + 0x14d0) = 0;
      }
      goto LAB_1005546e2;
    }
    iVar7 = (**(code **)(**(long **)(lVar2 + 0x38) + 0x128))();
    if (iVar7 == 0) {
      lVar16 = *(long *)(param_1 + 0x4b8);
      goto LAB_1005546a2;
    }
LAB_100554e9e:
    iVar8 = -0x27;
LAB_100554ea3:
    iVar9 = 0;
  }
LAB_100554ea5:
  *param_3 = local_7c[0];
  if (iVar8 == 0 && iVar9 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = iVar9;
    if (((iVar8 != 0) && (iVar7 = iVar8, iVar8 == -0x27)) && (iVar7 = -0x27, iVar9 != 0)) {
      iVar7 = iVar9;
    }
  }
  *(undefined4 *)(param_1 + 0x64a4) = 0;
  FUN_1001ebb2f(uVar6);
LAB_100554ef1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

