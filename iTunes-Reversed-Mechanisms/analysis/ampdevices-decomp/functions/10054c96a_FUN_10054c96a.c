// name: FUN_10054c96a
// address: 10054c96a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054c96a(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  byte bVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar16 = *(long *)(param_1 + 0x808);
  uVar1 = *(uint *)(lVar16 + 0xc);
  uVar18 = (ulong)uVar1;
  iVar11 = *(int *)(param_1 + 0x850);
  if (uVar1 == 0 || iVar11 != 0x6d703461) {
    if (((iVar11 != 0x61617664) && (iVar11 != 0x6d703461)) && (iVar11 != 0x64726d73)) {
      bVar5 = false;
      fVar23 = DAT_100700b50;
      goto LAB_10054cc8b;
    }
    if (uVar18 != 0) goto LAB_10054c9ec;
    *(undefined8 *)(param_1 + 0x1498) = 0;
    *(undefined4 *)(param_1 + 0x1474) = 0;
    bVar5 = false;
LAB_10054cd02:
    uVar8 = 0;
  }
  else {
    if (*(int *)(lVar16 + 0x14) == 0) {
      *(undefined4 *)(lVar16 + 0x14) = *(undefined4 *)(param_1 + 0x868);
      bVar5 = true;
    }
    else {
LAB_10054c9ec:
      bVar5 = false;
    }
    uVar8 = 0;
    do {
      uVar14 = *(uint *)(lVar16 + 0x14 + uVar8 * 8);
      if ((int)uVar14 < 0x780) {
        if ((uVar14 == 0x3c0) || (uVar14 == 0x400)) {
          uVar7 = *(uint *)(param_1 + 0x868);
          if (uVar7 != uVar14 * 2) {
            if (*(char *)(param_1 + 0x649b) != '\0') {
              uVar9 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar9,0x10);
              if (cVar6 != '\0') {
                local_4a = "mUpsampling == false";
                goto LAB_10054cf8a;
              }
              goto LAB_10054cb5a;
            }
            goto LAB_10054cb75;
          }
          fVar23 = DAT_100705e60;
          if (*(char *)(param_1 + 0x649b) != '\x01') {
            uVar9 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar9,0x10);
            fVar23 = DAT_100705e60;
            if (cVar6 != '\0') {
              local_4a = "mUpsampling == true";
              goto LAB_10054cc55;
            }
            goto LAB_10054cc7a;
          }
          break;
        }
      }
      else if ((uVar14 == 0x780) || (uVar14 == 0x800)) {
        uVar7 = *(uint *)(param_1 + 0x868);
        if (uVar7 == uVar14 >> 1) {
          fVar23 = DAT_100700b28;
          if (*(char *)(param_1 + 0x649b) == '\0') break;
          uVar9 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar9,0x10);
          fVar23 = DAT_100700b28;
          if (cVar6 == '\0') goto LAB_10054cc7a;
          local_4a = "mUpsampling == false";
        }
        else {
          if (*(char *)(param_1 + 0x649b) != '\x01') {
            uVar9 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar9,0x10);
            if (cVar6 != '\0') {
              local_4a = "mUpsampling == true";
LAB_10054cf8a:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
LAB_10054cb5a:
            FUN_1001782e9(0,0);
            uVar7 = *(uint *)(param_1 + 0x868);
          }
LAB_10054cb75:
          fVar23 = DAT_100700b50;
          if (uVar7 == uVar14) break;
          uVar9 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar9,0x10);
          fVar23 = DAT_100700b50;
          if (cVar6 == '\0') goto LAB_10054cc7a;
          local_4a = "mFrameLength == duration";
        }
LAB_10054cc55:
        local_4c = 0x822;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
LAB_10054cc7a:
        FUN_1001782e9(0,0);
        break;
      }
      uVar8 = uVar8 + 1;
      fVar23 = DAT_100700b50;
    } while (uVar18 != uVar8);
LAB_10054cc8b:
    *(undefined8 *)(param_1 + 0x1498) = 0;
    *(undefined4 *)(param_1 + 0x1474) = 0;
    fVar21 = DAT_100700b50;
    iVar11 = 0;
    if (uVar18 == 0) goto LAB_10054cd02;
    uVar15 = 0;
    uVar8 = 0;
    do {
      iVar17 = *(int *)(lVar16 + 0x14 + uVar15 * 8);
      if ((fVar23 != fVar21) || (NAN(fVar23) || NAN(fVar21))) {
        iVar17 = (int)((float)iVar17 * fVar23);
        *(int *)(lVar16 + 0x14 + uVar15 * 8) = iVar17;
      }
      iVar2 = *(int *)(lVar16 + 0x10 + uVar15 * 8);
      uVar8 = uVar8 + (long)iVar17 * (long)iVar2;
      iVar11 = iVar11 + iVar2;
      uVar15 = uVar15 + 1;
    } while (uVar18 != uVar15);
    *(ulong *)(param_1 + 0x1498) = uVar8;
    *(int *)(param_1 + 0x1474) = iVar11;
  }
  *(undefined8 *)(param_1 + 0x14a0) = 0;
  *(ulong *)(param_1 + 0x14a8) = uVar8;
  *(ulong *)(param_1 + 0x14b0) = uVar8;
  *(undefined1 *)(param_1 + 0x64ab) = 0;
  *(undefined8 *)(param_1 + 0x14c0) = 0;
  *(undefined8 *)(param_1 + 0x14c8) = 0;
  uVar10 = 1;
  if (*(int *)(param_1 + 0x850) == 0x6d703461) {
    puVar3 = *(uint **)(param_1 + 0x758);
    if ((puVar3 == (uint *)0x0) ||
       (uVar14 = *puVar3,
       (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) < 0x24)
       ) goto LAB_10054d06c;
    if (puVar3[3] != 0x74736c65) {
      uVar9 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = 
        "editList->atomType == ((UInt32)(UInt32) (__builtin_constant_p(EditListAID) ? ((__uint32_t)((((__uint32_t)(EditListAID) & 0xff000000U) >> 24) | (((__uint32_t)(EditListAID) & 0x00ff0000U) >> 8) | (((__uint32_t)(EditListAID) & 0x0000ff00U) << 8) | (((__uint32_t)(EditListAID) & 0x000000ffU) << 24))) : (__builtin_constant_p(EditListAID) ? ((__uint32_t)((((__uint32_t)(EditListAID) & 0xff000000U) >> 24) | (((__uint32_t)(EditListAID) & 0x00ff0000U) >> 8) | (((__uint32_t)(EditListAID) & 0x0000ff00U) << 8) | (((__uint32_t)(EditListAID) & 0x000000ffU) << 24))) : _OSSwapInt32(EditListAID))))"
        ;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (puVar3[5] == 0x1000000) {
      if ((char)puVar3[4] == '\0') {
        uVar14 = puVar3[6];
        uVar7 = puVar3[7];
        uVar18 = (ulong)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                        uVar7 << 0x18);
        uVar8 = (ulong)(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                       uVar14 << 0x18);
      }
      else {
        uVar14 = **(uint **)(param_1 + 0x758);
        if ((uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) <
            0x2c) goto LAB_10054d022;
        uVar8 = *(ulong *)(puVar3 + 6);
        uVar18 = *(ulong *)(puVar3 + 8);
        uVar18 = uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                 (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                 (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                 (uVar18 & 0xff00) << 0x28 | uVar18 << 0x38;
        uVar8 = uVar8 >> 0x38 | (uVar8 & 0xff000000000000) >> 0x28 |
                (uVar8 & 0xff0000000000) >> 0x18 | (uVar8 & 0xff00000000) >> 8 |
                (uVar8 & 0xff000000) << 8 | (uVar8 & 0xff0000) << 0x18 | (uVar8 & 0xff00) << 0x28 |
                uVar8 << 0x38;
        if (puVar3[10] != 0x100) {
          uVar9 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar9,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "editListTable64[0].mediaRate == ((UInt32)(UInt32) (__builtin_constant_p(((Fixed) 0x00010000L)) ? ((__uint32_t)((((__uint32_t)(((Fixed) 0x00010000L)) & 0xff000000U) >> 24) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x00ff0000U) >> 8) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x0000ff00U) << 8) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x000000ffU) << 24))) : (__builtin_constant_p(((Fixed) 0x00010000L)) ? ((__uint32_t)((((__uint32_t)(((Fixed) 0x00010000L)) & 0xff000000U) >> 24) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x00ff0000U) >> 8) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x0000ff00U) << 8) | (((__uint32_t)(((Fixed) 0x00010000L)) & 0x000000ffU) << 24))) : _OSSwapInt32(((Fixed) 0x00010000L)))))"
            ;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      fVar21 = (float)*(int *)(param_1 + 0x145c);
      fVar23 = *(float *)(param_1 + 0x858);
      if ((fVar23 != fVar21) || (NAN(fVar23) || NAN(fVar21))) {
        auVar22._8_4_ = (int)(uVar8 >> 0x20);
        auVar22._0_8_ = uVar8;
        auVar22._12_4_ = DAT_10070d3c0._4_4_;
        dVar4 = ((double)fVar23 *
                (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar8) - _DAT_10070d3d0) +
                (auVar22._8_8_ - _UNK_10070d3d8))) / (double)*(int *)(param_1 + 0x145c);
        uVar8 = (ulong)dVar4;
        lVar19 = ((long)(dVar4 - DAT_10070e4c0) & (long)uVar8 >> 0x3f | uVar8) + uVar18;
        if (uVar18 == 0) {
          lVar13 = *(long *)(param_1 + 0x1498);
          *(undefined8 *)(param_1 + 0x14a0) = 0;
          if ((ulong)*(uint *)(param_1 + 0x868) <= (ulong)(lVar13 - lVar19)) {
            *(long *)(param_1 + 0x14a8) = lVar19;
            *(undefined8 *)(param_1 + 0x14c0) = 0;
            *(long *)(param_1 + 0x14c8) = lVar19;
            *(undefined1 *)(param_1 + 0x64ab) = 0;
            goto LAB_10054d022;
          }
          *(long *)(param_1 + 0x14a8) = lVar13;
          *(undefined8 *)(param_1 + 0x14c0) = 0;
          *(long *)(param_1 + 0x14c8) = lVar13;
          bVar20 = *(byte *)(param_1 + 0x64ab);
          uVar18 = 0;
          lVar19 = lVar13;
          goto LAB_10054ce81;
        }
        *(ulong *)(param_1 + 0x14a0) = uVar18;
        *(long *)(param_1 + 0x14a8) = lVar19;
        *(undefined1 *)(param_1 + 0x64ab) = 1;
        *(ulong *)(param_1 + 0x14c0) = uVar18;
        *(long *)(param_1 + 0x14c8) = lVar19;
      }
      else {
        lVar19 = uVar8 + uVar18;
        *(ulong *)(param_1 + 0x14c0) = uVar18;
        *(long *)(param_1 + 0x14c8) = lVar19;
        *(ulong *)(param_1 + 0x14a0) = uVar18;
        *(long *)(param_1 + 0x14a8) = lVar19;
        bVar20 = uVar18 != 0;
        *(byte *)(param_1 + 0x64ab) = bVar20;
LAB_10054ce81:
        if ((bVar20 & 1) == 0) goto LAB_10054d022;
      }
      if (*(long *)(param_1 + 0x1498) == 0) {
        *(long *)(param_1 + 0x1498) = lVar19 + uVar18;
      }
    }
LAB_10054d022:
    if (*(char *)(param_1 + 0x64ab) == '\0') {
      uVar18 = *(ulong *)(param_1 + 0x14a0);
      uVar8 = *(ulong *)(param_1 + 0x14a8);
    }
    else {
      uVar18 = *(ulong *)(param_1 + 0x14a0);
      if ((uVar18 == 0) || (uVar8 = *(ulong *)(param_1 + 0x14a8), uVar8 == 0)) {
        *(undefined8 *)(param_1 + 0x14a0) = 0;
        uVar8 = *(ulong *)(param_1 + 0x1498);
        *(ulong *)(param_1 + 0x14a8) = uVar8;
        uVar10 = 0;
        goto LAB_10054d066;
      }
    }
    uVar15 = uVar8 - uVar18;
    *(ulong *)(param_1 + 0x14b0) = uVar15;
    if (uVar8 < uVar18) {
      uVar9 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mDurationInFrames <= mLastValidFrame";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      uVar8 = *(ulong *)(param_1 + 0x14a8);
      uVar15 = *(ulong *)(param_1 + 0x14b0);
    }
    if (uVar8 < uVar15) {
      *(undefined8 *)(param_1 + 0x14a0) = 0;
      uVar8 = *(ulong *)(param_1 + 0x1498);
      *(ulong *)(param_1 + 0x14a8) = uVar8;
      *(ulong *)(param_1 + 0x14b0) = uVar8;
      *(undefined1 *)(param_1 + 0x64ab) = 0;
    }
  }
  else {
LAB_10054d066:
    *(undefined1 *)(param_1 + 0x64ab) = uVar10;
LAB_10054d06c:
    *(ulong *)(param_1 + 0x14b0) = uVar8;
  }
  if (*(int *)(param_1 + 0x850) != 0x6d703461) goto LAB_10054d278;
  if ((*(char *)(param_1 + 0x64ab) == '\0') && ((uVar1 & 0xfffffffe) == 2)) {
    if (bVar5) {
      lVar19 = (long)*(int *)(lVar16 + 0x14) * (long)*(int *)(lVar16 + 0x10);
LAB_10054d105:
      uVar14 = 1;
    }
    else {
      if (*(int *)(lVar16 + 0x10) == 1) {
        lVar19 = (long)*(int *)(lVar16 + 0x14);
        goto LAB_10054d105;
      }
      uVar14 = 0;
      lVar19 = 0xa40;
    }
    *(long *)(param_1 + 0x14a0) = lVar19;
    lVar13 = (long)*(int *)(lVar16 + 0x14 + (ulong)uVar14 * 8) *
             (long)*(int *)(lVar16 + 0x10 + (ulong)uVar14 * 8);
    *(long *)(param_1 + 0x14a8) = lVar13;
    uVar14 = uVar14 + 1;
    if (((uVar14 < uVar1) && (*(int *)(lVar16 + 0x10 + (ulong)uVar14 * 8) == 1)) &&
       (lVar16 = (long)*(int *)(lVar16 + 0x14 + (ulong)uVar14 * 8), lVar16 < 0x400)) {
      lVar13 = lVar13 + lVar16;
      *(long *)(param_1 + 0x14a8) = lVar13;
      *(long *)(param_1 + 0x1498) = (long)*(int *)(param_1 + 0x1474) << 10;
    }
    *(long *)(param_1 + 0x14b0) = lVar13 - lVar19;
LAB_10054d25a:
    *(undefined1 *)(param_1 + 0x64ab) = 1;
  }
  else if ((*(char *)(param_1 + 0x64ab) == '\0') && (*(long *)(param_1 + 0x14a0) == 0)) {
    if ((*(byte *)(param_1 + 0x2b37) & 0x40) != 0) {
      uVar18 = (ulong)*(uint *)(param_1 + 0x2b8c);
      *(ulong *)(param_1 + 0x14a0) = uVar18;
      lVar16 = *(long *)(param_1 + 0x2b94);
      *(long *)(param_1 + 0x14b0) = lVar16;
      *(ulong *)(param_1 + 0x14a8) = lVar16 + uVar18;
      if (*(char *)(param_1 + 0x649b) != '\0') {
        *(ulong *)(param_1 + 0x14a0) = uVar18 * 2;
        *(long *)(param_1 + 0x14b0) = lVar16 * 2;
        *(ulong *)(param_1 + 0x14a8) = uVar18 * 2 + lVar16 * 2;
      }
      goto LAB_10054d25a;
    }
    uVar18 = (ulong)((*(uint *)(param_1 + 0x868) >> 4) + *(uint *)(param_1 + 0x868) * 2);
    *(ulong *)(param_1 + 0x14a0) = uVar18;
    if (uVar8 < uVar18 || uVar8 - uVar18 == 0) {
      *(undefined8 *)(param_1 + 0x14a0) = 0;
    }
    else {
      *(ulong *)(param_1 + 0x14b0) = uVar8 - uVar18;
    }
  }
  uVar12 = 0x3c2;
  if (*(char *)(param_1 + 0x649b) == '\0') {
    uVar12 = 0;
  }
  *(undefined4 *)(param_1 + 0x14d0) = uVar12;
LAB_10054d278:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

