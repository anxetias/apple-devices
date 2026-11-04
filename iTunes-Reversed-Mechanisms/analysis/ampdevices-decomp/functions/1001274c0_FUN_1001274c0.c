// name: FUN_1001274c0
// address: 1001274c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001274c0(uint *param_1,ulong *param_2,long param_3,uint param_4,uint param_5,uint *param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  ulong *puVar4;
  uint *puVar5;
  char cVar6;
  undefined1 uVar7;
  byte bVar8;
  char cVar9;
  short sVar10;
  undefined2 uVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  byte bVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 local_1ac [36];
  ulong local_188;
  long local_180;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  uint *local_158;
  int local_150;
  int local_14c;
  uint local_148;
  uint local_144;
  uint local_140;
  int local_13c;
  uint local_138;
  undefined4 local_134;
  ulong *local_130;
  ulong local_128;
  uint local_120;
  uint local_11c;
  ulong local_118;
  uint local_10c;
  long local_108;
  ulong local_100;
  uint *local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined2 local_d8 [32];
  undefined2 local_98 [32];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar29 = (ulong)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 == 0 || param_2 == (ulong *)0x0) || param_6 == (uint *)0x0) {
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a120(uVar14);
    }
LAB_100127574:
    FUN_1001782e9(0,0);
    iVar13 = -0x32;
LAB_100127583:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return iVar13;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  uVar26 = (ulong)param_5;
  if (param_5 == 0) {
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a770(uVar14);
    }
    goto LAB_100127574;
  }
  if (*param_1 < param_4) {
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a6f0(uVar14);
    }
    goto LAB_100127574;
  }
  *(undefined2 *)(param_1 + 6) = 0;
  *param_6 = param_4;
  local_180 = param_3 + 8;
  local_14c = param_5 * 3;
  local_188 = (ulong)(param_5 * 2);
  local_e8 = 0;
  local_158 = param_6;
  local_130 = param_2;
  local_128 = uVar26;
  local_108 = param_3;
  local_f8 = param_1;
LAB_100127668:
  if (param_2[1] <= *param_2) {
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a1a0(uVar14);
    }
    goto LAB_100128a07;
  }
  local_118 = CONCAT44(local_118._4_4_,(uint)*(byte *)((long)param_1 + 6));
  uVar7 = FUN_10015fc81();
  iVar13 = 0;
  switch(uVar7) {
  case 0:
  case 3:
    bVar8 = FUN_10015fc81(param_2,4);
    *(ushort *)(param_1 + 6) = (ushort)param_1[6] | (ushort)(1 << (bVar8 & 0x1f));
    sVar10 = FUN_10015fb9a(param_2,0xc);
    if (sVar10 == 0) {
      uVar18 = FUN_10015fb9a();
      uVar26 = (ulong)CONCAT31((int3)(uVar18 >> 8),(byte)uVar18 >> 1) & 0xffffffffffffff03;
      if ((char)uVar26 == '\x03') {
        uVar14 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar14,0x10);
        if (cVar6 != '\0') {
          FUN_10066a670(uVar14);
        }
        goto LAB_100128a07;
      }
      bVar8 = *(byte *)((long)param_1 + 5);
      if ((uVar18 & 0xf8) != 0) {
        iVar13 = FUN_10015fb9a(param_2,0x10);
        uVar12 = FUN_10015fb9a();
        uVar12 = uVar12 | iVar13 << 0x10;
        uVar29 = (ulong)uVar12;
        if (*local_f8 < uVar12) {
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            FUN_10066a580(uVar14);
          }
          goto LAB_100128a07;
        }
      }
      uVar17 = (int)uVar26 * 8 & 0xff;
      uVar12 = bVar8 - uVar17;
      local_f0 = (ulong)uVar12;
      local_e0 = uVar29;
      if ((uVar18 & 1) == 0) {
        local_11c = uVar17;
        local_100 = uVar26;
        cVar6 = FUN_10015fb9a(param_2,8);
        cVar9 = FUN_10015fb9a(param_2,8);
        if (cVar9 != '\0' || cVar6 != '\0') {
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mixBits == 0) && (mixRes == 0)";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_120 = FUN_10015fb9a(param_2,8);
        uVar18 = FUN_10015fb9a(param_2,8);
        local_10c = uVar18 & 0x1f;
        if (local_10c != 0) {
          uVar29 = (ulong)local_10c;
          uVar26 = 0;
          do {
            uVar11 = FUN_10015fb9a(param_2,0x10);
            local_98[uVar26] = uVar11;
            uVar26 = uVar26 + 1;
          } while (uVar29 != uVar26);
        }
        uVar29 = local_e0;
        if ((char)local_100 != '\0') {
          local_168 = param_2[2];
          local_178 = *param_2;
          uStack_170 = param_2[1];
          FUN_10015fdfe(param_2,(int)local_e0 * local_11c);
        }
        puVar5 = local_f8;
        FUN_100126f90(local_1ac,*(undefined1 *)((long)local_f8 + 7),
                      (uVar18 >> 5 & 7) * (int)local_118 >> 2,(char)local_f8[2],uVar29 & 0xffffffff,
                      uVar29 & 0xffffffff,*(undefined2 *)((long)local_f8 + 10));
        iVar13 = FUN_100126fd0(local_1ac,param_2,*(undefined8 *)(puVar5 + 0xc),uVar29 & 0xffffffff,
                               local_f0,&local_13c);
        uVar29 = local_e0;
        uVar24 = local_f0;
        if (iVar13 != 0) {
          if (iVar13 != -0x80) {
            uVar14 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar14,0x10);
            if (cVar6 != '\0') {
              FUN_10066a600(iVar13,uVar14);
            }
          }
          goto LAB_100127583;
        }
        uVar14 = *(undefined8 *)(puVar5 + 0xc);
        if ((local_120 & 0xf0) != 0) {
          FUN_100126400(uVar14,uVar14,local_e0 & 0xffffffff,0,0x1f,local_f0 & 0xffffffff,0);
          uVar14 = *(undefined8 *)(puVar5 + 0xc);
        }
        uVar26 = local_128;
        FUN_100126400(uVar14,*(undefined8 *)(puVar5 + 8),uVar29 & 0xffffffff,local_98,local_10c,
                      uVar24,local_120 & 0xf);
        puVar5 = local_f8;
        if ((char)local_100 == '\0') {
          bVar2 = true;
        }
        else if ((int)uVar29 == 0) {
          bVar2 = false;
        }
        else {
          uVar26 = 0;
          do {
            uVar11 = FUN_10015fb9a();
            *(undefined2 *)(*(long *)(puVar5 + 0xe) + uVar26 * 2) = uVar11;
            uVar26 = uVar26 + 1;
          } while ((uVar29 & 0xffffffff) != uVar26);
          bVar2 = false;
          uVar29 = local_e0;
          uVar26 = local_128;
        }
      }
      else {
        if ((char)uVar26 != '\0') {
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled();
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bytesShifted == 0";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9();
        }
        puVar5 = local_f8;
        puVar4 = local_130;
        bVar8 = 0x20 - (char)uVar12;
        if (uVar12 < 0x11) {
          if ((int)local_e0 != 0) {
            uVar29 = local_e0 & 0xffffffff;
            uVar26 = 0;
            do {
              iVar13 = FUN_10015fb9a();
              *(int *)(*(long *)(puVar5 + 8) + uVar26 * 4) =
                   (iVar13 << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
              uVar26 = uVar26 + 1;
            } while (uVar29 != uVar26);
          }
        }
        else if ((int)local_e0 != 0) {
          local_118 = CONCAT44(local_118._4_4_,(int)local_f0 + -0x10);
          local_100 = local_e0 & 0xffffffff;
          uVar29 = 0;
          do {
            iVar13 = FUN_10015fb9a(puVar4,0x10);
            uVar18 = FUN_10015fb9a();
            *(uint *)(*(long *)(puVar5 + 8) + uVar29 * 4) =
                 uVar18 | (iVar13 << 0x10) >> (bVar8 & 0x1f);
            uVar29 = uVar29 + 1;
          } while (local_100 != uVar29);
        }
        local_13c = (int)local_f0 * (int)local_e0;
        bVar2 = true;
        uVar29 = local_e0;
        uVar26 = local_128;
      }
      param_1 = local_f8;
      param_2 = local_130;
      auVar3 = _DAT_100707b10;
      uVar12 = (uint)uVar26;
      uVar18 = (uint)uVar29;
      switch((uint)*(byte *)((long)local_f8 + 5) << 0x1e | *(byte *)((long)local_f8 + 5) - 0x10 >> 2
            ) {
      case 0:
        if (uVar18 != 0) {
          lVar27 = *(long *)(local_f8 + 8);
          uVar24 = uVar29 & 0xffffffff;
          if (uVar18 < 8 || uVar12 != 1) {
            uVar19 = 0;
            uVar16 = 0;
          }
          else {
            uVar17 = uVar18 & 0xfffffff8;
            uVar19 = (ulong)uVar17;
            uVar16 = (ulong)(uVar17 * uVar12);
            uVar22 = 0;
            do {
              auVar31 = pshufb(*(undefined1 (*) [16])(lVar27 + uVar22 * 2),auVar3);
              auVar32 = pshufb(*(undefined1 (*) [16])(lVar27 + 0x10 + uVar22 * 2),auVar3);
              puVar1 = (undefined8 *)(local_180 + (local_e8 & 0xffffffff) * 2 + -8 + uVar22);
              *puVar1 = auVar31._0_8_;
              puVar1[1] = auVar32._0_8_;
              uVar22 = uVar22 + 0x10;
            } while ((uVar24 * 2 & 0xfffffffffffffff0) != uVar22);
            if (uVar17 == uVar18) break;
          }
          lVar30 = local_108 + (local_e8 & 0xffffffff) * 2;
          uVar21 = uVar19;
          for (uVar22 = uVar29 & 3; uVar22 != 0; uVar22 = uVar22 - 1) {
            *(undefined2 *)(lVar30 + uVar16 * 2) = *(undefined2 *)(lVar27 + uVar21 * 4);
            uVar21 = uVar21 + 1;
            uVar16 = (ulong)((int)uVar16 + uVar12);
          }
          if (uVar19 - uVar24 < 0xfffffffffffffffd) {
            do {
              iVar13 = (int)uVar16;
              *(undefined2 *)(lVar30 + uVar16 * 2) = *(undefined2 *)(lVar27 + uVar21 * 4);
              *(undefined2 *)(lVar30 + (ulong)(iVar13 + uVar12) * 2) =
                   *(undefined2 *)(lVar27 + 4 + uVar21 * 4);
              *(undefined2 *)(lVar30 + (ulong)(uint)((int)local_188 + iVar13) * 2) =
                   *(undefined2 *)(lVar27 + 8 + uVar21 * 4);
              *(undefined2 *)(lVar30 + (ulong)(uint)(iVar13 + local_14c) * 2) =
                   *(undefined2 *)(lVar27 + 0xc + uVar21 * 4);
              uVar21 = uVar21 + 4;
              uVar16 = (ulong)(iVar13 + uVar12 + (int)local_188 + uVar12);
            } while (uVar24 != uVar21);
          }
        }
        break;
      case 1:
        FUN_100126110(*(undefined8 *)(local_f8 + 8),(ulong)(uint)((int)local_e8 * 3) + local_108,
                      uVar26 & 0xffffffff,uVar29 & 0xffffffff);
        break;
      case 2:
        if (bVar2) {
          FUN_100125fc0(*(undefined8 *)(local_f8 + 8),(ulong)(uint)((int)local_e8 * 3) + local_108,
                        uVar26 & 0xffffffff,uVar29 & 0xffffffff);
        }
        else {
          FUN_100126050();
        }
        break;
      case 4:
        if (bVar2) {
          FUN_1001261c0(*(undefined8 *)(local_f8 + 8),local_108 + (local_e8 & 0xffffffff) * 4,
                        uVar26 & 0xffffffff,uVar29 & 0xffffffff);
        }
        else {
          FUN_1001262e0();
        }
      }
      uVar17 = (int)local_e8 + 1;
      uVar24 = (ulong)uVar17;
      *local_158 = uVar18;
      iVar13 = 0;
      if (uVar17 < uVar12) goto LAB_100127656;
      goto LAB_1001286ec;
    }
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a500(uVar14);
    }
    goto LAB_100128a07;
  case 1:
    uVar18 = (int)local_e8 + 2;
    if ((uint)uVar26 < uVar18) {
      iVar13 = 0;
      goto LAB_1001286e3;
    }
    local_120 = uVar18;
    bVar8 = FUN_10015fc81(param_2,4);
    *(ushort *)(param_1 + 6) = (ushort)param_1[6] | (ushort)(1 << (bVar8 & 0x1f));
    sVar10 = FUN_10015fb9a(param_2,0xc);
    if (sVar10 == 0) {
      uVar18 = FUN_10015fb9a();
      puVar5 = local_f8;
      uVar26 = (ulong)CONCAT31((int3)(uVar18 >> 8),(byte)uVar18 >> 1) & 0xffffffffffffff03;
      cVar6 = (char)uVar26;
      if (cVar6 == '\x03') {
        uVar14 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar14,0x10);
        if (cVar6 != '\0') {
          FUN_10066a480(uVar14);
        }
        goto LAB_100128a07;
      }
      local_f0 = CONCAT44(local_f0._4_4_,(uint)*(byte *)((long)local_f8 + 5));
      if ((uVar18 & 0xf8) != 0) {
        iVar13 = FUN_10015fb9a(param_2,0x10);
        uVar12 = FUN_10015fb9a();
        uVar12 = uVar12 | iVar13 << 0x10;
        uVar29 = (ulong)uVar12;
        if (*puVar5 < uVar12) {
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            FUN_10066a320(uVar14);
          }
          goto LAB_100128a07;
        }
      }
      local_e0 = uVar29;
      if ((uVar18 & 1) == 0) {
        local_138 = FUN_10015fb9a(param_2,8);
        local_134 = FUN_10015fb9a(param_2,8);
        local_11c = FUN_10015fb9a(param_2,8);
        uVar18 = FUN_10015fb9a(param_2,8);
        local_100 = CONCAT44(local_100._4_4_,uVar18);
        uVar18 = uVar18 & 0x1f;
        if (uVar18 != 0) {
          uVar29 = 0;
          do {
            uVar11 = FUN_10015fb9a(param_2,0x10);
            local_98[uVar29] = uVar11;
            uVar29 = uVar29 + 1;
          } while (uVar18 != uVar29);
        }
        local_148 = uVar18;
        local_10c = FUN_10015fb9a(param_2,8);
        local_144 = FUN_10015fb9a(param_2,8);
        uVar18 = local_144 & 0x1f;
        if (uVar18 != 0) {
          uVar29 = 0;
          do {
            uVar11 = FUN_10015fb9a(param_2,0x10);
            local_d8[uVar29] = uVar11;
            uVar29 = uVar29 + 1;
          } while (uVar18 != uVar29);
        }
        uVar29 = local_e0;
        uVar12 = (int)uVar26 * 8 & 0xff;
        local_140 = uVar18;
        if (cVar6 != '\0') {
          local_168 = param_2[2];
          local_178 = *param_2;
          uStack_170 = param_2[1];
          FUN_10015fdfe(param_2,uVar12 * (int)local_e0 * 2);
        }
        puVar5 = local_f8;
        iVar25 = ((int)local_f0 - uVar12) + 1;
        FUN_100126f90(local_1ac,*(undefined1 *)((long)local_f8 + 7),
                      ((uint)local_100 >> 5 & 7) * (int)local_118 >> 2,(char)local_f8[2],uVar29,
                      uVar29 & 0xffffffff,*(undefined2 *)((long)local_f8 + 10));
        iVar13 = FUN_100126fd0(local_1ac,param_2,*(undefined8 *)(puVar5 + 0xc),local_e0,iVar25,
                               &local_13c);
        uVar18 = local_11c;
        if (iVar13 != 0) {
          if (iVar13 != -0x80) {
            uVar14 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar14,0x10);
            if (cVar6 != '\0') {
              FUN_10066a410(iVar13,uVar14);
            }
          }
          goto LAB_100127583;
        }
        uVar14 = *(undefined8 *)(puVar5 + 0xc);
        local_100 = uVar26;
        if ((local_11c & 0xf0) != 0) {
          FUN_100126400(uVar14,uVar14,local_e0,0,0x1f,iVar25,0);
          uVar14 = *(undefined8 *)(puVar5 + 0xc);
        }
        uVar29 = local_e0;
        uVar17 = local_144 >> 5;
        FUN_100126400(uVar14,*(undefined8 *)(puVar5 + 8),local_e0 & 0xffffffff,local_98,local_148,
                      iVar25,uVar18 & 0xf);
        local_f0 = CONCAT44(local_f0._4_4_,iVar25);
        FUN_100126f90(local_1ac,*(undefined1 *)((long)puVar5 + 7),(uVar17 & 7) * (int)local_118 >> 2
                      ,(char)puVar5[2],uVar29 & 0xffffffff,uVar29 & 0xffffffff,
                      *(undefined2 *)((long)puVar5 + 10));
        iVar13 = FUN_100126fd0(local_1ac,local_130,*(undefined8 *)(puVar5 + 0xc),uVar29 & 0xffffffff
                               ,local_f0 & 0xffffffff,&local_150);
        uVar29 = local_e0;
        uVar24 = local_f0;
        if (iVar13 != 0) {
          if (iVar13 != -0x80) {
            uVar14 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar14,0x10);
            if (cVar6 != '\0') {
              FUN_10066a3a0(iVar13,uVar14);
            }
          }
          goto LAB_100127583;
        }
        uVar14 = *(undefined8 *)(puVar5 + 0xc);
        if ((local_10c & 0xf0) != 0) {
          FUN_100126400(uVar14,uVar14,local_e0 & 0xffffffff,0,0x1f,local_f0 & 0xffffffff,0);
          uVar14 = *(undefined8 *)(puVar5 + 0xc);
        }
        uVar26 = local_128;
        FUN_100126400(uVar14,*(undefined8 *)(puVar5 + 10),uVar29 & 0xffffffff,local_d8,local_140,
                      uVar24 & 0xffffffff,local_10c & 0xf);
        puVar5 = local_f8;
        uVar23 = local_134;
        uVar18 = local_138;
        if ((char)local_100 == '\0') {
          local_100 = 0;
        }
        else {
          uVar17 = (int)uVar29 * 2;
          uVar29 = local_e0;
          if (uVar17 != 0) {
            uVar24 = 0;
            do {
              uVar11 = FUN_10015fb9a(&local_178,uVar12);
              *(undefined2 *)(*(long *)(puVar5 + 0xe) + uVar24 * 2) = uVar11;
              uVar11 = FUN_10015fb9a();
              *(undefined2 *)(*(long *)(puVar5 + 0xe) + 2 + uVar24 * 2) = uVar11;
              uVar24 = uVar24 + 2;
              uVar29 = local_e0;
              uVar26 = local_128;
              uVar23 = local_134;
              uVar18 = local_138;
            } while (uVar24 < uVar17);
          }
        }
      }
      else {
        if (cVar6 != '\0') {
          uVar14 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled();
          if (cVar6 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "bytesShifted == 0";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x16);
          }
          FUN_1001782e9();
        }
        puVar5 = local_f8;
        puVar4 = local_130;
        bVar8 = *(byte *)((long)local_f8 + 5);
        local_f0 = (ulong)bVar8;
        bVar15 = 0x20 - bVar8;
        if (bVar8 < 0x11) {
          if ((int)local_e0 != 0) {
            local_118 = local_e0 & 0xffffffff;
            uVar29 = 0;
            do {
              iVar13 = FUN_10015fb9a(puVar4,local_f0 & 0xffffffff);
              *(int *)(*(long *)(puVar5 + 8) + uVar29 * 4) =
                   (iVar13 << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
              iVar13 = FUN_10015fb9a();
              *(int *)(*(long *)(puVar5 + 10) + uVar29 * 4) =
                   (iVar13 << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
              uVar29 = uVar29 + 1;
            } while (local_118 != uVar29);
          }
        }
        else if ((int)local_e0 != 0) {
          local_118 = CONCAT44(local_118._4_4_,bVar8 - 0x10);
          local_100 = local_e0 & 0xffffffff;
          uVar29 = 0;
          do {
            iVar13 = FUN_10015fb9a(puVar4,0x10);
            uVar18 = FUN_10015fb9a(puVar4,local_118 & 0xff);
            *(uint *)(*(long *)(local_f8 + 8) + uVar29 * 4) =
                 uVar18 | (iVar13 << 0x10) >> (bVar15 & 0x1f);
            iVar13 = FUN_10015fb9a(puVar4,0x10);
            uVar18 = FUN_10015fb9a();
            *(uint *)(*(long *)(local_f8 + 10) + uVar29 * 4) =
                 uVar18 | (iVar13 << 0x10) >> (bVar15 & 0x1f);
            uVar29 = uVar29 + 1;
          } while (local_100 != uVar29);
        }
        local_150 = (int)local_f0 * (int)local_e0;
        local_100 = 0;
        uVar29 = local_e0;
        uVar26 = local_128;
        uVar23 = 0;
        local_13c = local_150;
        uVar18 = 0;
      }
      param_1 = local_f8;
      param_2 = local_130;
      cVar6 = (char)uVar23;
      switch((uint)*(byte *)((long)local_f8 + 5) << 0x1e | *(byte *)((long)local_f8 + 5) - 0x10 >> 2
            ) {
      case 0:
        FUN_1001257a0(*(undefined8 *)(local_f8 + 8),*(undefined8 *)(local_f8 + 10),
                      local_108 + (local_e8 & 0xffffffff) * 2,uVar26 & 0xffffffff,
                      uVar29 & 0xffffffff,uVar18 & 0xff,(int)cVar6);
        break;
      case 1:
        FUN_1001259a0(*(undefined8 *)(local_f8 + 8),*(undefined8 *)(local_f8 + 10),
                      (ulong)(uint)((int)local_e8 * 3) + local_108,uVar26 & 0xffffffff,
                      uVar29 & 0xffffffff,uVar18 & 0xff,(int)cVar6);
        break;
      case 2:
        FUN_100125ac0(*(undefined8 *)(local_f8 + 8),*(undefined8 *)(local_f8 + 10),
                      (ulong)(uint)((int)local_e8 * 3) + local_108,uVar26 & 0xffffffff,
                      uVar29 & 0xffffffff,uVar18 & 0xff,(int)cVar6,*(undefined8 *)(local_f8 + 0xe),
                      (char)local_100);
        break;
      case 4:
        FUN_100125d40(*(undefined8 *)(local_f8 + 8),*(undefined8 *)(local_f8 + 10),
                      local_108 + (local_e8 & 0xffffffff) * 4,uVar26 & 0xffffffff,
                      uVar29 & 0xffffffff,uVar18 & 0xff,(int)cVar6,*(undefined8 *)(local_f8 + 0xe),
                      (char)local_100);
      }
      *local_158 = (uint)uVar29;
      iVar13 = 0;
      uVar24 = (ulong)local_120;
      if (local_120 < (uint)uVar26) goto LAB_100127656;
      goto LAB_1001286ec;
    }
    uVar14 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar14,0x10);
    if (cVar6 != '\0') {
      FUN_10066a2a0(uVar14);
    }
LAB_100128a07:
    FUN_1001782e9(0,0);
    iVar13 = -0xd0;
    goto LAB_100127583;
  case 2:
  case 5:
    iVar13 = -0xd0;
LAB_1001286e3:
    uVar24 = local_e8 & 0xffffffff;
    goto LAB_1001286ec;
  case 4:
    iVar13 = FUN_100128b40();
    break;
  case 6:
    iVar13 = FUN_100128c00();
    break;
  case 7:
    iVar13 = 0;
    FUN_10015fe19(param_2,0);
    if (*param_2 != param_2[1]) {
      uVar14 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar14,0x10);
      if (cVar6 != '\0') {
        FUN_10066a220(uVar14);
      }
      iVar13 = 0;
      FUN_1001782e9(0,0);
    }
    goto LAB_100127583;
  }
  uVar24 = local_e8 & 0xffffffff;
  if ((uint)uVar26 <= (uint)local_e8) goto LAB_1001286ec;
LAB_100127656:
  local_e8 = uVar24;
  if (iVar13 != 0) goto LAB_1001286ec;
  goto LAB_100127668;
LAB_1001286ec:
  uVar18 = (uint)uVar24;
  uVar12 = (uint)uVar26;
  if (uVar18 < uVar12) {
    uVar17 = (int)uVar29 * 3;
    if (uVar12 == 1) {
      local_e0 = (uVar29 & 0xffffffff) * 4;
      local_f0 = (uVar29 & 0xffffffff) * 2;
      uVar29 = uVar24 * 3;
      lVar27 = local_108 + uVar24 * 2;
      lVar30 = local_108 + uVar24 * 4;
      local_e8 = CONCAT44(local_e8._4_4_,iVar13);
      do {
        uVar24 = uVar24 + 1;
        cVar6 = *(char *)((long)local_f8 + 5);
        uVar26 = local_f0;
        lVar20 = lVar27;
        if (cVar6 == '\x10') {
LAB_10012874e:
          FUN_1001c62d9(lVar20,uVar26);
          iVar13 = (int)local_e8;
        }
        else {
          if (cVar6 == '\x18') {
            uVar26 = (ulong)uVar17;
            lVar20 = (uVar29 & 0xffffffff) + local_108;
            goto LAB_10012874e;
          }
          uVar26 = local_e0;
          lVar20 = lVar30;
          if (cVar6 == ' ') goto LAB_10012874e;
        }
        uVar29 = uVar29 + 3;
        lVar27 = lVar27 + 2;
        lVar30 = lVar30 + 4;
      } while ((int)uVar24 != 1);
    }
    else {
      uVar28 = (int)uVar29 * uVar12;
      uVar17 = uVar17 * uVar12;
      if (uVar17 == 0) {
        if (uVar28 != 0) {
          uVar26 = uVar26 & 0xffffffff;
          if (*(char *)((long)local_f8 + 5) == '\x10') {
            uVar29 = uVar24;
            if ((uVar12 - uVar18 & 1) != 0) {
              uVar18 = 0;
              do {
                *(undefined2 *)(local_108 + uVar24 * 2 + (ulong)uVar18 * 2) = 0;
                uVar18 = uVar18 + uVar12;
              } while (uVar18 < uVar28);
              uVar29 = uVar24 + 1;
            }
            if (uVar26 - 1 != uVar24) {
              do {
                uVar18 = 0;
                do {
                  *(undefined2 *)(local_108 + uVar29 * 2 + (ulong)uVar18 * 2) = 0;
                  uVar18 = uVar18 + uVar12;
                } while (uVar18 < uVar28);
                uVar18 = 0;
                do {
                  *(undefined2 *)(local_108 + 2 + uVar29 * 2 + (ulong)uVar18 * 2) = 0;
                  uVar18 = uVar18 + uVar12;
                } while (uVar18 < uVar28);
                uVar29 = uVar29 + 2;
              } while (uVar29 != uVar26);
            }
          }
          else if (*(char *)((long)local_f8 + 5) == ' ') {
            uVar29 = uVar24;
            if ((uVar12 - uVar18 & 1) != 0) {
              uVar18 = 0;
              do {
                *(undefined4 *)(local_108 + uVar24 * 4 + (ulong)uVar18 * 4) = 0;
                uVar18 = uVar18 + uVar12;
              } while (uVar18 < uVar28);
              uVar29 = uVar24 + 1;
            }
            if (uVar26 - 1 != uVar24) {
              do {
                uVar18 = 0;
                do {
                  *(undefined4 *)(local_108 + uVar29 * 4 + (ulong)uVar18 * 4) = 0;
                  uVar18 = uVar18 + uVar12;
                } while (uVar18 < uVar28);
                uVar18 = 0;
                do {
                  *(undefined4 *)(local_108 + 4 + uVar29 * 4 + (ulong)uVar18 * 4) = 0;
                  uVar18 = uVar18 + uVar12;
                } while (uVar18 < uVar28);
                uVar29 = uVar29 + 2;
              } while (uVar29 != uVar26);
            }
          }
          else {
            uVar18 = uVar12 - uVar18 & 7;
            uVar29 = uVar24;
            if (uVar18 != 0) {
              lVar27 = 0;
              do {
                lVar27 = lVar27 + -1;
              } while (-lVar27 != (ulong)uVar18);
              uVar29 = uVar24 - lVar27;
            }
            if (uVar24 - uVar26 < 0xfffffffffffffff9) {
              lVar27 = uVar26 - uVar29;
              do {
                lVar27 = lVar27 + -8;
              } while (lVar27 != 0);
            }
          }
        }
      }
      else {
        do {
          cVar6 = *(char *)((long)local_f8 + 5);
          if (cVar6 == ' ') {
            if (uVar28 != 0) {
              uVar29 = 0;
              do {
                *(undefined4 *)(local_108 + uVar24 * 4 + uVar29 * 4) = 0;
                uVar18 = (int)uVar29 + uVar12;
                uVar29 = (ulong)uVar18;
              } while (uVar18 < uVar28);
            }
          }
          else if (cVar6 == '\x18') {
            lVar27 = (ulong)(uint)((int)uVar24 * 3) + local_108;
            uVar29 = 0;
            do {
              iVar25 = (int)uVar29;
              *(undefined1 *)(lVar27 + uVar29) = 0;
              *(undefined1 *)(lVar27 + (ulong)(iVar25 + 1)) = 0;
              *(undefined1 *)(lVar27 + (ulong)(iVar25 + 2)) = 0;
              uVar18 = iVar25 + uVar12 * 3;
              uVar29 = (ulong)uVar18;
            } while (uVar18 < uVar17);
          }
          else if ((cVar6 == '\x10') && (uVar28 != 0)) {
            uVar29 = 0;
            do {
              *(undefined2 *)(local_108 + uVar24 * 2 + uVar29 * 2) = 0;
              uVar18 = (int)uVar29 + uVar12;
              uVar29 = (ulong)uVar18;
            } while (uVar18 < uVar28);
          }
          uVar24 = uVar24 + 1;
        } while ((uint)uVar24 != uVar12);
      }
    }
  }
  goto LAB_100127583;
}

