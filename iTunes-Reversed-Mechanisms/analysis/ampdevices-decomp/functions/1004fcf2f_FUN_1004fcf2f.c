// name: FUN_1004fcf2f
// address: 1004fcf2f

undefined8 FUN_1004fcf2f(long param_1,int param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  long lVar19;
  void *pvVar20;
  void *pvVar21;
  undefined8 uVar22;
  long lVar23;
  void *pvVar24;
  void *pvVar25;
  undefined1 auVar26 [16];
  undefined1 local_4dd8 [5728];
  undefined8 local_3778;
  undefined8 uStack_3770;
  undefined8 local_3768;
  undefined8 uStack_3760;
  undefined8 local_3758;
  undefined8 uStack_3750;
  undefined8 local_3748;
  undefined8 uStack_3740;
  undefined8 local_3738;
  undefined8 uStack_3730;
  undefined8 local_3728;
  undefined8 uStack_3720;
  undefined8 local_3718;
  undefined8 **local_3710;
  undefined8 *local_3708;
  undefined8 uStack_3700;
  undefined8 **local_36f8;
  undefined8 *local_36f0;
  undefined8 uStack_36e8;
  void *local_36e0;
  long local_36d8;
  ulong local_36d0;
  void *local_36c8;
  long *local_36c0;
  undefined8 local_36b8;
  undefined8 uStack_36b0;
  undefined4 local_36a8;
  undefined8 local_36a0;
  undefined8 local_3698;
  ulong local_3690;
  void *local_3688;
  ulong local_3680;
  long local_3678;
  int local_366c;
  void *local_3668;
  long *local_3660;
  long local_3658;
  int local_364c [3436];
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1004fcf47;
  auVar26 = FUN_100108310();
  lVar5 = -auVar26._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fcf67;
  cVar13 = FUN_1004e7efc();
  if (cVar13 != '\0') {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fcf73;
    cVar13 = FUN_1004317ff(param_1);
    if (cVar13 != '\0') {
      uVar22 = 1;
      if ((*(char *)(param_1 + 0x14cda) != '\0') || (*(char *)(param_1 + 0x6abf) != '\0'))
      goto LAB_1004fcfb8;
      if (param_2 == 0x706c6564) {
        uVar1 = *(undefined8 *)(auVar26._8_8_ + 0x10);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fcff4;
        local_3658 = param_1;
        plVar15 = (long *)FUN_10050898a(param_1,uVar1);
      }
      else {
        if (param_2 != 0x706c6964) goto LAB_1004fcfb8;
        uVar1 = *(undefined8 *)(auVar26._8_8_ + 0x10);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fcfb4;
        local_3658 = param_1;
        plVar15 = (long *)FUN_10050833f(param_1,uVar1);
      }
      if (plVar15 == (long *)0x0) goto LAB_1004fcfb8;
      local_36a0 = 0;
      local_3660 = (long *)0x0;
      local_3678 = 0;
      local_3710 = &local_3708;
      local_3708 = (undefined8 *)0x0;
      uStack_3700 = 0;
      local_36f8 = &local_36f0;
      local_36f0 = (undefined8 *)0x0;
      uStack_36e8 = 0;
      pvVar25 = (void *)*plVar15;
      pvVar21 = (void *)plVar15[1];
      if (pvVar25 != pvVar21) {
        local_3660 = (long *)0x0;
        local_36c0 = plVar15;
        do {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd077;
          local_3668 = pvVar21;
          _memcpy(local_4dd8,pvVar25,0x1660);
          uVar2 = *(ulong *)((long)pvVar25 + 0x1660);
          local_3698 = *(undefined8 *)((long)pvVar25 + 0x1668);
          local_3718 = *(undefined8 *)((long)pvVar25 + 0x16d0);
          local_3728 = *(undefined8 *)((long)pvVar25 + 0x16c0);
          uStack_3720 = *(undefined8 *)((long)pvVar25 + 0x16c8);
          local_3738 = *(undefined8 *)((long)pvVar25 + 0x16b0);
          uStack_3730 = *(undefined8 *)((long)pvVar25 + 0x16b8);
          local_3748 = *(undefined8 *)((long)pvVar25 + 0x16a0);
          uStack_3740 = *(undefined8 *)((long)pvVar25 + 0x16a8);
          local_3758 = *(undefined8 *)((long)pvVar25 + 0x1690);
          uStack_3750 = *(undefined8 *)((long)pvVar25 + 0x1698);
          local_3768 = *(undefined8 *)((long)pvVar25 + 0x1680);
          uStack_3760 = *(undefined8 *)((long)pvVar25 + 0x1688);
          local_3778 = *(undefined8 *)((long)pvVar25 + 0x1670);
          uStack_3770 = *(undefined8 *)((long)pvVar25 + 0x1678);
          uVar3 = *(ulong *)((long)pvVar25 + 0x16d8);
          local_36b8 = *(undefined8 *)((long)pvVar25 + 0x16e0);
          uStack_36b0 = *(undefined8 *)((long)pvVar25 + 0x16e8);
          local_36a8 = *(undefined4 *)((long)pvVar25 + 0x16f0);
          iVar14 = *(int *)((long)pvVar25 + 0x16f4);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd136;
          _memcpy(local_364c,(void *)((long)pvVar25 + 0x16f8),0x35b0);
          local_9c = *(undefined4 *)((long)pvVar25 + 0x4ca8);
          uStack_98 = *(undefined4 *)((long)pvVar25 + 0x4cac);
          uStack_94 = *(undefined4 *)((long)pvVar25 + 0x4cb0);
          uStack_90 = *(undefined4 *)((long)pvVar25 + 0x4cb4);
          local_8c = *(undefined4 *)((long)pvVar25 + 0x4cb8);
          uStack_88 = *(undefined4 *)((long)pvVar25 + 0x4cbc);
          uStack_84 = *(undefined4 *)((long)pvVar25 + 0x4cc0);
          uStack_80 = *(undefined4 *)((long)pvVar25 + 0x4cc4);
          local_7c = *(undefined4 *)((long)pvVar25 + 0x4cc8);
          uStack_78 = *(undefined4 *)((long)pvVar25 + 0x4ccc);
          uStack_74 = *(undefined4 *)((long)pvVar25 + 0x4cd0);
          uStack_70 = *(undefined4 *)((long)pvVar25 + 0x4cd4);
          local_6c = *(undefined4 *)((long)pvVar25 + 0x4cd8);
          uStack_68 = *(undefined4 *)((long)pvVar25 + 0x4cdc);
          uStack_64 = *(undefined4 *)((long)pvVar25 + 0x4ce0);
          uStack_60 = *(undefined4 *)((long)pvVar25 + 0x4ce4);
          local_5c = *(undefined4 *)((long)pvVar25 + 0x4ce8);
          pvVar21 = local_3668;
          local_36e0 = pvVar25;
          local_3690 = uVar2;
          local_366c = iVar14;
          puVar16 = local_3708;
          if (iVar14 < 0 && (uVar3 != 0 && (uVar2 & 8) != 0)) {
            for (; puVar17 = local_36f0, local_3680 = uVar3, puVar16 != (undefined8 *)0x0;
                puVar16 = (undefined8 *)*puVar16) {
              if ((ulong)puVar16[4] <= uVar3) {
                if (uVar3 <= (ulong)puVar16[4]) goto LAB_1004fd76f;
                puVar16 = puVar16 + 1;
              }
            }
            for (; puVar17 != (undefined8 *)0x0; puVar17 = (undefined8 *)*puVar17) {
              if ((ulong)puVar17[4] <= uVar3) {
                if (uVar3 <= (ulong)puVar17[4]) goto LAB_1004fd2c2;
                puVar17 = puVar17 + 1;
              }
            }
            if (local_3678 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd23b;
              iVar14 = FUN_1002d834e(local_3658,1,1,&local_36a0,&local_3678);
              if (iVar14 != 0) {
                if (iVar14 != -0x80) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd7eb;
                  uVar22 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd7fb;
                  cVar13 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar13 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar14);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd841;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_58,
                                        0x12);
                  }
                }
                break;
              }
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd259;
            iVar14 = FUN_10004c700(local_3678,local_3680);
            if (iVar14 == -0xa414) {
LAB_1004fd2ac:
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd2c2;
              FUN_1002b7e7c(&local_36f8,&local_3680);
LAB_1004fd2c2:
              plVar18 = local_3660;
              if (local_3660 == (long *)0x0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd2df;
                plVar18 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
                if (plVar18 == (long *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd848;
                  uVar22 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd858;
                  cVar13 = _os_log_type_enabled(uVar22,0x10);
                  if (cVar13 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "unauthorizedTrackList != nullptr";
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fda00;
                    __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd869;
                  FUN_1001782e9(0,0);
                  local_3660 = (long *)0x0;
                  break;
                }
                *plVar18 = 0;
                plVar18[1] = 0;
                plVar18[2] = 0;
              }
              pvVar25 = (void *)plVar18[1];
              local_3660 = plVar18;
              if (pvVar25 < (void *)plVar18[2]) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd325;
                _memcpy(pvVar25,local_4dd8,0x1660);
                *(ulong *)((long)pvVar25 + 0x1660) = local_3690;
                *(undefined8 *)((long)pvVar25 + 0x1668) = local_3698;
                *(undefined8 *)((long)pvVar25 + 0x1670) = local_3778;
                *(undefined8 *)((long)pvVar25 + 0x1678) = uStack_3770;
                *(undefined8 *)((long)pvVar25 + 0x1680) = local_3768;
                *(undefined8 *)((long)pvVar25 + 0x1688) = uStack_3760;
                *(undefined8 *)((long)pvVar25 + 0x1690) = local_3758;
                *(undefined8 *)((long)pvVar25 + 0x1698) = uStack_3750;
                *(undefined8 *)((long)pvVar25 + 0x16a0) = local_3748;
                *(undefined8 *)((long)pvVar25 + 0x16a8) = uStack_3740;
                *(undefined8 *)((long)pvVar25 + 0x16b0) = local_3738;
                *(undefined8 *)((long)pvVar25 + 0x16b8) = uStack_3730;
                *(undefined8 *)((long)pvVar25 + 0x16c0) = local_3728;
                *(undefined8 *)((long)pvVar25 + 0x16c8) = uStack_3720;
                *(undefined8 *)((long)pvVar25 + 0x16d0) = local_3718;
                *(ulong *)((long)pvVar25 + 0x16d8) = uVar3;
                *(undefined8 *)((long)pvVar25 + 0x16e0) = local_36b8;
                *(undefined8 *)((long)pvVar25 + 0x16e8) = uStack_36b0;
                *(undefined4 *)((long)pvVar25 + 0x16f0) = local_36a8;
                *(int *)((long)pvVar25 + 0x16f4) = local_366c;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd3ff;
                _memcpy((void *)((long)pvVar25 + 0x16f8),local_364c,0x35b0);
                *(ulong *)((long)pvVar25 + 0x4ca8) = CONCAT44(uStack_98,local_9c);
                *(ulong *)((long)pvVar25 + 0x4cb0) = CONCAT44(uStack_90,uStack_94);
                *(ulong *)((long)pvVar25 + 0x4cb8) = CONCAT44(uStack_88,local_8c);
                *(ulong *)((long)pvVar25 + 0x4cc0) = CONCAT44(uStack_80,uStack_84);
                *(ulong *)((long)pvVar25 + 0x4cc8) = CONCAT44(uStack_78,local_7c);
                *(ulong *)((long)pvVar25 + 0x4cd0) = CONCAT44(uStack_70,uStack_74);
                *(ulong *)((long)pvVar25 + 0x4cd8) = CONCAT44(uStack_68,local_6c);
                *(ulong *)((long)pvVar25 + 0x4ce0) = CONCAT44(uStack_60,uStack_64);
                *(undefined4 *)((long)pvVar25 + 0x4ce8) = local_5c;
                lVar23 = (long)pvVar25 + 0x4cec;
              }
              else {
                pvVar21 = (void *)*plVar18;
                lVar23 = (long)pvVar25 - (long)pvVar21;
                pvVar24 = (void *)(lVar23 >> 2);
                uVar2 = (long)pvVar24 * 0x146262b2921f4df3 + 1;
                if (0x353fb3746e08a < uVar2) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fda0f;
                  FUN_1005090ca();
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                lVar19 = plVar18[2] - (long)pvVar21 >> 2;
                uVar6 = lVar19 * 0x28c4c565243e9be6;
                local_36d0 = uVar2;
                if (uVar2 < uVar6) {
                  local_36d0 = uVar6;
                }
                if (0x1a9fd9ba37044 < (ulong)(lVar19 * 0x146262b2921f4df3)) {
                  local_36d0 = 0x353fb3746e08a;
                }
                local_36d8 = lVar23;
                local_3668 = pvVar24;
                if (local_36d0 == 0) {
                  pvVar20 = (void *)0x0;
                }
                else {
                  if (0x353fb3746e08a < local_36d0) {
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fda16;
                    FUN_1001082d0();
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd4fc;
                  pvVar20 = operator_new(local_36d0 * 0x4cec);
                }
                lVar23 = (long)pvVar24 * 4;
                local_36c8 = (void *)((long)pvVar20 + lVar23);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd526;
                _memcpy(local_36c8,local_4dd8,0x1660);
                *(ulong *)((long)pvVar20 + lVar23 + 0x1660) = local_3690;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1668) = local_3698;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1670) = local_3778;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1678) = uStack_3770;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1680) = local_3768;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1688) = uStack_3760;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1690) = local_3758;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x1698) = uStack_3750;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16a0) = local_3748;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16a8) = uStack_3740;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16b0) = local_3738;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16b8) = uStack_3730;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16c0) = local_3728;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16c8) = uStack_3720;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16d0) = local_3718;
                *(ulong *)((long)pvVar20 + lVar23 + 0x16d8) = uVar3;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16e0) = local_36b8;
                *(undefined8 *)((long)pvVar20 + lVar23 + 0x16e8) = uStack_36b0;
                *(undefined4 *)((long)pvVar20 + lVar23 + 0x16f0) = local_36a8;
                *(int *)((long)pvVar20 + lVar23 + 0x16f4) = local_366c;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd5e1;
                local_3688 = pvVar20;
                _memcpy((void *)((long)pvVar20 + lVar23 + 0x16f8),local_364c,0x35b0);
                pvVar24 = local_3688;
                *(ulong *)((long)pvVar20 + lVar23 + 0x4ca8) = CONCAT44(uStack_98,local_9c);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cb0) = CONCAT44(uStack_90,uStack_94);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cb8) = CONCAT44(uStack_88,local_8c);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cc0) = CONCAT44(uStack_80,uStack_84);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cc8) = CONCAT44(uStack_78,local_7c);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cd0) = CONCAT44(uStack_70,uStack_74);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4cd8) = CONCAT44(uStack_68,local_6c);
                *(ulong *)((long)pvVar20 + lVar23 + 0x4ce0) = CONCAT44(uStack_60,uStack_64);
                *(undefined4 *)((long)pvVar20 + lVar23 + 0x4ce8) = local_5c;
                if (pvVar21 != pvVar25) {
                  lVar23 = lVar23 + (long)local_3668 * -4;
                  lVar19 = 0;
                  local_3668 = pvVar25;
                  do {
                    pvVar25 = (void *)((long)pvVar21 + lVar19);
                    pvVar20 = (void *)((long)pvVar24 + lVar19 + lVar23);
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd672;
                    _memcpy(pvVar20,pvVar25,0x1660);
                    puVar16 = (undefined8 *)((long)pvVar21 + lVar19 + 0x1660);
                    uVar22 = puVar16[1];
                    puVar17 = (undefined8 *)((long)pvVar24 + lVar19 + lVar23 + 0x1660);
                    *puVar17 = *puVar16;
                    puVar17[1] = uVar22;
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd69d;
                    _memcpy((void *)((long)pvVar20 + 0x1670),(void *)((long)pvVar25 + 0x1670),0x3638
                           );
                    puVar16 = (undefined8 *)((long)pvVar21 + lVar19 + 0x4ca8);
                    uVar22 = puVar16[1];
                    puVar17 = (undefined8 *)((long)pvVar21 + lVar19 + 0x4cb8);
                    uVar1 = *puVar17;
                    uVar7 = puVar17[1];
                    puVar17 = (undefined8 *)((long)pvVar21 + lVar19 + 0x4cc8);
                    uVar8 = *puVar17;
                    uVar9 = puVar17[1];
                    puVar17 = (undefined8 *)((long)pvVar21 + lVar19 + 0x4cd8);
                    uVar10 = *puVar17;
                    uVar11 = puVar17[1];
                    puVar17 = (undefined8 *)((long)pvVar24 + lVar19 + lVar23 + 0x4ca8);
                    *puVar17 = *puVar16;
                    puVar17[1] = uVar22;
                    puVar16 = (undefined8 *)((long)pvVar24 + lVar19 + lVar23 + 0x4cb8);
                    *puVar16 = uVar1;
                    puVar16[1] = uVar7;
                    puVar16 = (undefined8 *)((long)pvVar24 + lVar19 + lVar23 + 0x4cc8);
                    *puVar16 = uVar8;
                    puVar16[1] = uVar9;
                    puVar16 = (undefined8 *)((long)pvVar24 + lVar19 + lVar23 + 0x4cd8);
                    *puVar16 = uVar10;
                    puVar16[1] = uVar11;
                    *(undefined4 *)((long)pvVar24 + lVar19 + lVar23 + 0x4ce8) =
                         *(undefined4 *)((long)pvVar21 + lVar19 + 0x4ce8);
                    lVar19 = lVar19 + 0x4cec;
                  } while ((void *)((long)pvVar25 + 0x4cec) != local_3668);
                  pvVar21 = (void *)*local_3660;
                }
                plVar18 = local_3660;
                plVar15 = local_36c0;
                lVar23 = (long)local_36c8 + 0x4cec;
                *local_3660 = (long)local_36c8 - local_36d8;
                local_3660[1] = lVar23;
                local_3660[2] = (long)((long)local_3688 + local_36d0 * 0x4cec);
                if (pvVar21 != (void *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd76b;
                  operator_delete(pvVar21);
                }
              }
              plVar18[1] = lVar23;
            }
            else {
              if ((iVar14 != -0xa412) && (iVar14 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd27e;
                uVar22 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd28e;
                cVar13 = _os_log_type_enabled(uVar22,0x10);
                if (cVar13 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = 
                  "status == noErr || status == kDRMInvalidUserError || status == kDRMNothingToDo";
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd7d7;
                  __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd29f;
                FUN_1001782e9(0,0);
                if (iVar14 == -0xa414) goto LAB_1004fd2ac;
              }
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd469;
              FUN_1002b7e7c(&local_3710,&local_3680);
            }
LAB_1004fd76f:
            pvVar21 = (void *)plVar15[1];
          }
          pvVar25 = (void *)((long)local_36e0 + 0x4cec);
        } while (pvVar25 != pvVar21);
      }
      lVar23 = local_3658;
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd8a1;
      FUN_1002d8fc9(local_3658,local_36a0,local_3678,0,0,0);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd8b1;
      FUN_1002a41f4(&local_36f8,local_36f0);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd8c1;
      FUN_1002a41f4(&local_3710,local_3708);
      local_364c[0] = 0;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd8d6;
      lVar23 = FUN_1005075d7(lVar23);
      if (local_3660 == (long *)0x0 && lVar23 == 0) {
        if (local_364c[0] == 0) goto LAB_1004fd926;
        uVar22 = 1;
        bVar12 = false;
      }
      else {
        if (lVar23 == 0) {
LAB_1004fd926:
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd934;
          FUN_100430bbe(local_3658,0);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd94a;
          FUN_1004ef324(local_3658,9,1);
          uVar22 = 1;
          bVar12 = false;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd90f;
          cVar13 = FUN_100546597(local_3658,plVar15,lVar23);
          if (cVar13 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd926;
            FUN_100507a6a(local_3658,lVar23);
            goto LAB_1004fd926;
          }
          bVar12 = true;
          uVar22 = 0;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd957;
        FUN_100595344(lVar23);
        plVar18 = local_3660;
        if (local_3660 != (long *)0x0) {
          pvVar25 = (void *)*local_3660;
          if (pvVar25 != (void *)0x0) {
            local_3660[1] = (long)pvVar25;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd974;
            operator_delete(pvVar25);
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd97c;
          operator_delete(plVar18);
        }
      }
      pvVar25 = (void *)*plVar15;
      if (pvVar25 != (void *)0x0) {
        plVar15[1] = (long)pvVar25;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd98e;
        operator_delete(pvVar25);
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd996;
      operator_delete(plVar15);
      if (bVar12) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fd9ab;
        FUN_1002d79dd(local_3658);
      }
      goto LAB_1004fcfb8;
    }
  }
  uVar22 = 0;
LAB_1004fcfb8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1004fda0a;
  ___stack_chk_fail();
}

