// name: FUN_100236a9c
// address: 100236a9c

int FUN_100236a9c(long param_1,int *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  int *piVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  int *piVar21;
  int *piVar22;
  code *pcVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  code *local_d8;
  code *local_d0;
  code *local_c8;
  code *local_c0;
  long *local_b8;
  int *local_b0;
  long *local_a8;
  code *local_a0;
  int *local_98;
  long local_90;
  int local_84;
  int *local_80;
  long local_78;
  byte local_69;
  undefined8 local_68;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 local_52;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_80 = param_2;
  local_78 = param_1;
  if (((*param_2 == 0) || (*(double *)(param_2 + 8) <= 0.0 && *(double *)(param_2 + 8) != 0.0)) ||
     (((*(byte *)(param_2 + 7) & 4) != 0 && (*(long *)(param_2 + 2) == 0)))) {
    uVar14 = FUN_1001cc310();
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    cVar11 = _os_log_type_enabled(uVar14,0x10);
    if (cVar11 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7ab58c;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0x2655;
      uStack_58 = 0x7b;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar14);
    cVar11 = FUN_1001782e9(0,0);
    lVar1 = local_78;
    if (cVar11 == '\0') {
      uVar14 = FUN_100235e52();
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      cVar11 = _os_log_type_enabled(uVar14,0x10);
      if (cVar11 != '\0') {
        iVar13 = *local_80;
        uVar18 = FUN_1001b83ae(lVar1 + 0x28);
        local_68._0_4_ = 0x4000202;
        uStack_60 = 0x822;
        uStack_5e = (undefined2)uVar18;
        uStack_5c = (undefined2)((ulong)uVar18 >> 0x10);
        uStack_5a = (undefined2)((ulong)uVar18 >> 0x20);
        uStack_58 = (undefined2)((ulong)uVar18 >> 0x30);
        local_68._4_4_ = iVar13;
        __os_log_impl(0x100000000,uVar14,0x10,
                      "**ERROR**: Failed to Validate() ClientCommandProcessor::Command supplied to EnqueueCommand()! ClientCommandType:%d ccp:%{public}s"
                      ,&local_68,0x12);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar14);
      iVar13 = 0;
      goto LAB_10023768b;
    }
  }
  lVar1 = local_78 + 0x40;
  FUN_1001e9de0();
  local_84 = 0x234f;
  if ((*(int *)(local_78 + 0xfc) != 0) && (*(int *)(local_78 + 0xfc) != 5)) {
    local_69 = 1;
    if ((*(int *)(local_78 + 0xa0) != 0) &&
       ((((*(byte *)(local_78 + 0xbc) & 8) != 0 && ((local_80[7] & 0x20U) != 0)) &&
        ((uint)local_80[6] < *(uint *)(local_78 + 0xb8))))) {
      FUN_10023686e(local_78);
    }
    lVar29 = local_78;
    if ((*(byte *)(local_80 + 7) & 2) != 0) {
      local_d8 = (code *)((ulong)local_d8 & 0xffffffffffffff00);
      lVar31 = *(long *)(local_78 + 0x88);
      lVar15 = *(long *)(local_78 + 0x90);
      if ((lVar15 != lVar31 & local_69) == 1) {
        local_90 = local_78 + 0x88;
        piVar17 = local_80 + 2;
        lVar28 = 0;
        uVar27 = 0;
        bVar12 = local_69;
LAB_100236c02:
        if (*(int *)(lVar31 + lVar28) != *local_80) goto LAB_100236c78;
        plVar30 = *(long **)(lVar31 + 8 + lVar28);
        if (((plVar30 == (long *)0x0) ||
            (dVar4 = *(double *)(lVar31 + 0x20 + lVar28), dVar4 != DAT_100701af0)) ||
           (NAN(dVar4) || NAN(DAT_100701af0))) {
          local_69 = 1;
          local_d8 = (code *)CONCAT71(local_d8._1_7_,1);
        }
        else {
          iVar13 = (**(code **)(*plVar30 + 0x10))(plVar30,piVar17,&local_69,&local_d8);
          if (iVar13 != 0) {
            uVar14 = FUN_100235e52();
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            cVar11 = _os_log_type_enabled(uVar14,0x10);
            lVar29 = local_78;
            if (cVar11 != '\0') {
              uVar18 = FUN_100237792(local_78,*local_80);
              uVar20 = FUN_1001b83ae(lVar29 + 0x28);
              local_68._0_4_ = 0x8220302;
              local_68._4_4_ = (int)uVar18;
              uStack_60 = (undefined2)((ulong)uVar18 >> 0x20);
              uStack_5e = (undefined2)((ulong)uVar18 >> 0x30);
              uStack_5c = 0x822;
              uStack_5a = (undefined2)uVar20;
              uStack_58 = (undefined2)((ulong)uVar20 >> 0x10);
              uStack_56 = (undefined4)((ulong)uVar20 >> 0x20);
              local_52 = 0x400;
              local_50 = (code *)((ulong)local_50._4_4_ << 0x20);
              __os_log_impl(0x100000000,uVar14,0x10,
                            "**ERROR**: %{public}s:BatchData() failed! ccp:%{public}s status:%d",
                            &local_68,0x1c);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar14);
            local_69 = 0;
            lVar29 = local_78;
            goto LAB_100236e1c;
          }
          lVar31 = *(long *)(local_78 + 0x88);
          lVar15 = *(long *)(local_78 + 0x90);
          lVar29 = local_78;
          bVar12 = local_69;
          if (((ulong)local_d8 & 1) == 0) goto LAB_100236c78;
        }
        lVar19 = lVar15 - lVar31;
        for (; uVar27 < (ulong)((lVar19 >> 4) * -0x5555555555555555); uVar27 = uVar27 + 1) {
          if (*(int *)(lVar31 + lVar28) == *local_80) {
            uVar14 = FUN_100238c4e(lVar31 + lVar28 + 0x30,lVar15,lVar31 + lVar28);
            FUN_100238bea(local_90,uVar14);
            lVar31 = *(long *)(lVar29 + 0x88);
            lVar15 = *(long *)(lVar29 + 0x90);
          }
          lVar19 = lVar15 - lVar31;
          lVar28 = lVar28 + 0x30;
        }
      }
    }
LAB_100236e1c:
    local_84 = 0;
    if ((local_69 & 1) != 0) {
      local_90 = *(long *)(lVar29 + 0x88);
      piVar17 = *(int **)(lVar29 + 0x90);
      lVar15 = (long)piVar17 - local_90 >> 4;
      lVar28 = lVar15 * -0x5555555555555555;
      local_98 = local_80 + 6;
      lVar29 = (long)piVar17 - local_90;
      lVar31 = lVar28;
      uVar27 = lVar15 * 0x5555555555555556;
      uVar25 = lVar28 + 1;
      do {
        uVar26 = uVar25;
        uVar32 = uVar27;
        lVar19 = lVar31;
        lVar15 = lVar29;
        if (lVar19 == 0) break;
        lVar29 = lVar15 + -0x30;
        lVar31 = lVar19 + -1;
        uVar27 = uVar32 - 2;
        uVar25 = uVar26 - 1;
      } while ((uint)local_80[6] < *(uint *)(local_90 + -0x18 + lVar15));
      piVar24 = (int *)(local_90 + lVar15);
      if (piVar17 < *(int **)(local_78 + 0x98)) {
        if (piVar24 == piVar17) {
          *piVar17 = *local_80;
          lVar29 = *(long *)(local_80 + 4);
          uVar14 = *(undefined8 *)(local_80 + 4);
          *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(local_80 + 2);
          *(undefined8 *)(piVar17 + 4) = uVar14;
          if (lVar29 != 0) {
            LOCK();
            plVar30 = (long *)(lVar29 + 8);
            *plVar30 = *plVar30 + 1;
            UNLOCK();
          }
          *(char *)(piVar17 + 10) = (char)local_80[10];
          iVar13 = local_80[7];
          iVar6 = local_80[8];
          iVar7 = local_80[9];
          piVar17[6] = *local_98;
          piVar17[7] = iVar13;
          piVar17[8] = iVar6;
          piVar17[9] = iVar7;
          *(int **)(local_78 + 0x90) = piVar17 + 0xc;
          lVar31 = local_78;
        }
        else {
          lVar29 = -lVar15 - local_90;
          piVar22 = (int *)((long)piVar24 + (long)piVar17 + lVar29 + -0x30);
          piVar21 = piVar17;
          if (piVar22 < piVar17) {
            *piVar17 = *piVar22;
            lVar31 = *(long *)((long)piVar24 + (long)piVar17 + lVar29 + -0x20);
            uVar14 = *(undefined8 *)((long)piVar24 + (long)piVar17 + lVar29 + -0x20);
            *(undefined8 *)(piVar17 + 2) =
                 *(undefined8 *)((long)piVar24 + (long)piVar17 + lVar29 + -0x28);
            *(undefined8 *)(piVar17 + 4) = uVar14;
            if (lVar31 != 0) {
              LOCK();
              plVar30 = (long *)(lVar31 + 8);
              *plVar30 = *plVar30 + 1;
              UNLOCK();
            }
            piVar21 = piVar17 + 0xc;
            *(undefined1 *)(piVar17 + 10) =
                 *(undefined1 *)((long)piVar24 + (long)piVar17 + lVar29 + -8);
            iVar13 = *(int *)((long)piVar24 + (long)piVar17 + lVar29 + -0x14);
            iVar6 = *(int *)((long)piVar24 + (long)piVar17 + lVar29 + -0x10);
            iVar7 = *(int *)((long)piVar24 + (long)piVar17 + lVar29 + -0xc);
            piVar17[6] = *(int *)((long)piVar24 + (long)piVar17 + lVar29 + -0x18);
            piVar17[7] = iVar13;
            piVar17[8] = iVar6;
            piVar17[9] = iVar7;
          }
          *(int **)(local_78 + 0x90) = piVar21;
          if ((int *)(local_90 + lVar15 + 0x30) != piVar17) {
            lVar31 = (local_90 - (long)piVar17) + lVar15 + 0x30;
            local_98 = piVar17 + -10;
            lVar29 = 0;
            local_b0 = piVar24;
            do {
              *(undefined4 *)((long)piVar17 + lVar29 + -0x30) =
                   *(undefined4 *)((long)piVar17 + lVar29 + -0x60);
              FUN_100238d72((long)local_98 + lVar29,*(undefined8 *)((long)piVar17 + lVar29 + -0x58),
                            *(undefined8 *)((long)piVar17 + lVar29 + -0x50));
              puVar2 = (undefined4 *)((long)piVar17 + lVar29 + -0x48);
              uVar8 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              puVar3 = (undefined4 *)((long)piVar17 + lVar29 + -0x18);
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              *(undefined1 *)((long)piVar17 + lVar29 + -8) =
                   *(undefined1 *)((long)piVar17 + lVar29 + -0x38);
              lVar29 = lVar29 + -0x30;
              lVar31 = lVar31 + 0x30;
            } while (lVar31 != 0);
            piVar21 = *(int **)(local_78 + 0x90);
            piVar24 = local_b0;
          }
          piVar17 = local_80;
          lVar29 = 0x30;
          if (piVar21 <= local_80) {
            lVar29 = 0;
          }
          if (local_80 < piVar24) {
            lVar29 = 0;
          }
          lVar15 = local_90 + 8 + lVar15;
          *(undefined4 *)(lVar15 + -8) = *(undefined4 *)((long)local_80 + lVar29);
          FUN_100238d72(lVar15,*(undefined8 *)((long)local_80 + lVar29 + 8),
                        *(undefined8 *)((long)local_80 + lVar29 + 0x10));
          puVar2 = (undefined4 *)((long)piVar17 + lVar29 + 0x18);
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          *(undefined4 *)(lVar15 + 0x10) = *puVar2;
          *(undefined4 *)(lVar15 + 0x14) = uVar8;
          *(undefined4 *)(lVar15 + 0x18) = uVar9;
          *(undefined4 *)(lVar15 + 0x1c) = uVar10;
          *(undefined1 *)(lVar15 + 0x20) = *(undefined1 *)((long)piVar17 + lVar29 + 0x28);
          lVar31 = local_78;
        }
      }
      else {
        uVar27 = lVar28 + 1;
        if (0x555555555555555 < uVar27) {
          local_b0 = piVar24;
          FUN_1002389ea();
                    /* WARNING: Does not return */
          pcVar16 = (code *)invalidInstructionException();
          (*pcVar16)();
        }
        lVar29 = (long)*(int **)(local_78 + 0x98) - local_90 >> 4;
        uVar25 = lVar29 * 0x5555555555555556;
        if (uVar27 < uVar25) {
          uVar27 = uVar25;
        }
        local_b8 = (long *)(local_78 + 0x98);
        uVar25 = 0x555555555555555;
        if ((ulong)(lVar29 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
          uVar25 = uVar27;
        }
        local_a8 = local_b8;
        if (uVar25 == 0) {
          auVar33 = ZEXT816(0);
          local_b0 = piVar24;
        }
        else {
          local_b0 = piVar24;
          auVar33 = FUN_1002389fa();
        }
        plVar30 = local_a8;
        local_d8 = auVar33._0_8_;
        pcVar16 = local_d8 + lVar15;
        pcVar23 = local_d8 + auVar33._8_8_ * 0x30;
        local_d0 = pcVar16;
        local_c8 = pcVar16;
        local_c0 = pcVar23;
        local_a0 = pcVar16;
        if (auVar33._8_8_ == lVar19) {
          if (lVar19 < 1) {
            if (lVar19 == 0) {
              uVar32 = 1;
            }
            local_48 = local_a8;
            auVar34 = FUN_1002389fa(uVar32);
            local_d8 = auVar34._0_8_;
            pcVar16 = local_d8 + (uVar32 >> 2) * 0x30;
            local_c0 = local_d8 + auVar34._8_8_ * 0x30;
            local_68._0_4_ = auVar33._0_4_;
            local_68._4_4_ = auVar33._4_4_;
            uStack_60 = SUB82(local_a0,0);
            uStack_5e = (undefined2)((ulong)local_a0 >> 0x10);
            uStack_5c = (undefined2)((ulong)local_a0 >> 0x20);
            uStack_5a = (undefined2)((ulong)local_a0 >> 0x30);
            uStack_56 = (undefined4)((ulong)local_a0 >> 0x10);
            local_d0 = pcVar16;
            local_c8 = pcVar16;
            uStack_58 = uStack_60;
            local_52 = uStack_5a;
            local_50 = pcVar23;
            FUN_100238b48();
            local_a0 = pcVar16;
          }
          else {
            pcVar23 = local_d8 + lVar15 + (uVar26 & 0x1ffffffffffffffe) * -0x18;
            pcVar16 = (code *)FUN_100238c4e(pcVar16,pcVar16,pcVar23);
            plVar30 = local_a8;
            local_a0 = pcVar23;
          }
        }
        lVar31 = local_78;
        piVar17 = local_b0;
        *(int *)pcVar16 = *local_80;
        lVar29 = *(long *)(local_80 + 4);
        uVar14 = *(undefined8 *)(local_80 + 4);
        *(undefined8 *)(pcVar16 + 8) = *(undefined8 *)(local_80 + 2);
        *(undefined8 *)(pcVar16 + 0x10) = uVar14;
        if (lVar29 != 0) {
          LOCK();
          plVar5 = (long *)(lVar29 + 8);
          *plVar5 = *plVar5 + 1;
          UNLOCK();
        }
        pcVar16[0x28] = *(code *)(local_98 + 4);
        iVar13 = local_98[1];
        iVar6 = local_98[2];
        iVar7 = local_98[3];
        *(int *)(pcVar16 + 0x18) = *local_98;
        *(int *)(pcVar16 + 0x1c) = iVar13;
        *(int *)(pcVar16 + 0x20) = iVar6;
        *(int *)(pcVar16 + 0x24) = iVar7;
        FUN_100238a31(plVar30,local_b0,*(undefined8 *)(local_78 + 0x90),pcVar16 + 0x30);
        lVar29 = *(long *)(lVar31 + 0x90) - local_90;
        *(int **)(lVar31 + 0x90) = piVar17;
        lVar28 = (long)local_a0 - ((local_90 - *(long *)(lVar31 + 0x88)) + lVar15);
        FUN_100238a31(plVar30,*(long *)(lVar31 + 0x88),piVar17,lVar28);
        local_d8 = *(code **)(lVar31 + 0x88);
        *(long *)(lVar31 + 0x88) = lVar28;
        *(code **)(lVar31 + 0x90) = pcVar16 + (lVar29 - lVar15) + 0x30;
        lVar29 = *(long *)(lVar31 + 0x98);
        *(code **)(lVar31 + 0x98) = local_c0;
        local_d0 = local_d8;
        local_c8 = local_d8;
        local_c0 = (code *)lVar29;
        FUN_100238b48();
      }
      if (*(int *)(lVar31 + 0xfc) == 1) {
        piVar17 = operator_new(0x60,(nothrow_t *)PTR_nothrow_10082c970);
        if (piVar17 == (int *)0x0) {
          uVar14 = FUN_1001cc310();
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          cVar11 = _os_log_type_enabled(uVar14,0x10);
          if (cVar11 != '\0') {
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = 0x7a168c;
            uStack_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0x268f;
            uStack_58 = 0x7b;
            uStack_56 = 1;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar14);
          cVar11 = FUN_1001782e9(0,0);
          lVar29 = local_78;
          lVar31 = local_78;
          if (cVar11 != '\0') goto LAB_1002372af;
          uVar14 = FUN_100235e52();
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          cVar11 = _os_log_type_enabled(uVar14,0x10);
          if (cVar11 != '\0') {
            uVar18 = FUN_100237792(lVar29,*local_80);
            uVar20 = FUN_1001b83ae(lVar29 + 0x28);
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = (int)uVar18;
            uStack_60 = (undefined2)((ulong)uVar18 >> 0x20);
            uStack_5e = (undefined2)((ulong)uVar18 >> 0x30);
            uStack_5c = 0x822;
            uStack_5a = (undefined2)uVar20;
            uStack_58 = (undefined2)((ulong)uVar20 >> 0x10);
            uStack_56 = (undefined4)((ulong)uVar20 >> 0x20);
            __os_log_impl(0x100000000,uVar14,0x10,
                          "**ERROR**: Failed to add Command((%{public}s) to queue - no memory! ccp:%{public}s"
                          ,&local_68,0x16);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar14);
          local_84 = -0x6c;
          lVar29 = local_78;
        }
        else {
          piVar17[0xc] = 0;
          piVar17[0xd] = 0;
          piVar17[0] = 0;
          piVar17[1] = 0;
          piVar17[0x10] = 0;
          piVar17[0x11] = 0;
          piVar17[0x12] = 0;
          piVar17[0x13] = 0;
          piVar17[0x14] = 0;
          piVar17[0x15] = 0;
LAB_1002372af:
          *(undefined4 *)(lVar31 + 0xfc) = 2;
          local_80 = piVar17;
          if (*(long *)(lVar31 + 0x10) == 0) {
LAB_100237700:
                    /* WARNING: Subroutine does not return */
            FUN_10013bd04();
          }
          pcVar16 = *(code **)(lVar31 + 8);
          lVar29 = std::__shared_weak_count::lock();
          if (lVar29 == 0) goto LAB_100237700;
          local_d8 = FUN_100237832;
          local_d0 = (code *)0x0;
          local_c8 = pcVar16;
          local_c0 = (code *)lVar29;
          local_48 = operator_new(0x28);
          piVar17 = local_80;
          plVar30 = (long *)(local_80 + 4);
          *local_48 = (long)&PTR_FUN_10083e6f8;
          local_48[1] = (long)FUN_100237832;
          local_48[2] = 0;
          local_48[3] = (long)pcVar16;
          local_48[4] = lVar29;
          FUN_100238ef2(&local_68,plVar30);
          lVar29 = local_78;
          if (local_48 == &local_68) {
            lVar31 = 0x20;
LAB_100237388:
            (**(code **)(*local_48 + lVar31))();
          }
          else {
            lVar31 = 0x28;
            if (local_48 != (long *)0x0) goto LAB_100237388;
          }
          iVar13 = FUN_1001ecf95(*(undefined8 *)(lVar29 + 0xd0),piVar17);
          if (iVar13 == 0) {
            local_84 = 0;
            goto LAB_10023767c;
          }
          local_84 = iVar13;
          uVar14 = FUN_100235e52();
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          cVar11 = _os_log_type_enabled(uVar14,0x10);
          if (cVar11 != '\0') {
            uVar18 = FUN_1001b83ae(local_78 + 0x28);
            local_68._0_4_ = 0x8220202;
            local_68._4_4_ = (int)uVar18;
            uStack_60 = (undefined2)((ulong)uVar18 >> 0x20);
            uStack_5e = (undefined2)((ulong)uVar18 >> 0x30);
            uStack_5c = 0x400;
            uStack_5a = (undefined2)iVar13;
            uStack_58 = (undefined2)((uint)iVar13 >> 0x10);
            __os_log_impl(0x100000000,uVar14,0x10,
                          "**ERROR**: JRInstallWorkTask() failed! ccp:%{public}s status:%d",
                          &local_68,0x12);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar14);
          lVar29 = local_78;
          *(undefined4 *)(local_78 + 0xfc) = 1;
          if (piVar17 == (int *)0x0) goto LAB_100237608;
          plVar5 = *(long **)(piVar17 + 0xc);
          if (plVar5 == plVar30) {
            lVar31 = 0x20;
LAB_1002375fa:
            (**(code **)(*plVar5 + lVar31))();
          }
          else {
            lVar31 = 0x28;
            if (plVar5 != (long *)0x0) goto LAB_1002375fa;
          }
          operator_delete(piVar17);
        }
LAB_100237608:
        uVar14 = FUN_100235e52();
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        cVar11 = _os_log_type_enabled(uVar14,0x10);
        if (cVar11 != '\0') {
          uVar18 = FUN_1001b83ae(lVar29 + 0x28);
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = (int)uVar18;
          uStack_60 = (undefined2)((ulong)uVar18 >> 0x20);
          uStack_5e = (undefined2)((ulong)uVar18 >> 0x30);
          uStack_5c = 0x400;
          uStack_5a = (undefined2)local_84;
          uStack_58 = (undefined2)((uint)local_84 >> 0x10);
          __os_log_impl(0x100000000,uVar14,0x10,
                        "**ERROR**: AddToCommandQueue() failed! ccp:%{public}s status:%d",&local_68,
                        0x12);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar14);
      }
    }
  }
LAB_10023767c:
  FUN_1001e9eb9(lVar1);
  iVar13 = local_84;
LAB_10023768b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar13;
LAB_100236c78:
  uVar27 = uVar27 + 1;
  if (((ulong)((lVar15 - lVar31 >> 4) * -0x5555555555555555) <= uVar27) ||
     (lVar28 = lVar28 + 0x30, (bVar12 & 1) == 0)) goto LAB_100236e1c;
  goto LAB_100236c02;
}

