// name: FUN_100239ad2
// address: 100239ad2

undefined8 FUN_100239ad2(int *param_1,uint param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  char cVar16;
  undefined4 uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  char *pcVar24;
  ushort uVar25;
  long lVar26;
  uint *puVar27;
  ushort uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 local_58;
  uint uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined8 *)0x0) {
    uVar21 = FUN_1001cc310();
    cVar16 = _os_log_type_enabled(uVar21,0x10);
    if (cVar16 != '\0') {
      pcVar24 = "outThumbnailCreationRecord != nullptr";
LAB_100239c35:
      uStack_4c = 0x822;
      uStack_4e = 0;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar24,0);
      uStack_48 = (undefined2)((ulong)pcVar24 >> 0x10);
      uStack_46 = (undefined2)((ulong)pcVar24 >> 0x20);
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_4 = 0;
    if (param_1 == (int *)0x0) {
      uVar21 = FUN_1001cc310();
      cVar16 = _os_log_type_enabled(uVar21,0x10);
      if (cVar16 != '\0') {
        pcVar24 = "formatList != nullptr";
        goto LAB_100239c35;
      }
    }
    else {
      uVar29 = (ulong)param_2;
      if (param_2 < 0x15) {
        puVar18 = (undefined1 *)FUN_1001c6429(0x1208);
        if (puVar18 == (undefined1 *)0x0) {
          uVar21 = FUN_1001cc310();
          cVar16 = _os_log_type_enabled(uVar21,0x10);
          if (cVar16 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            uStack_4a = 0x2797;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar21 = 0xffffff94;
          goto LAB_100239c69;
        }
        if ((param_3 & 2) == 0) {
          dVar5 = DAT_100719780;
          dVar6 = DAT_100719778;
          if (param_2 != 0) {
            lVar26 = 0;
            do {
              if (*(char *)((long)param_1 + lVar26 + 0x1f) != '\0') {
                uVar23 = 0x300;
                uVar25 = 0x240;
                goto LAB_100239d79;
              }
              lVar26 = lVar26 + 0x68;
            } while (uVar29 * 0x68 - lVar26 != 0);
            uVar23 = 0x280;
            uVar25 = 0x1e0;
LAB_100239d79:
            puVar27 = (uint *)(param_1 + 4);
            uVar19 = uVar29;
            do {
              uVar28 = *(ushort *)((long)puVar27 + -2);
              uVar15 = *puVar27;
              if (uVar28 <= uVar25 && (ushort)*puVar27 <= (ushort)uVar23) {
                uVar28 = uVar25;
                uVar15 = uVar23;
              }
              uVar23 = uVar15;
              puVar27 = puVar27 + 0x1a;
              uVar19 = uVar19 - 1;
              uVar25 = uVar28;
            } while (uVar19 != 0);
            dVar5 = (double)(uVar23 & 0xffff);
            dVar6 = (double)uVar28;
          }
          uVar31 = SUB84(dVar6,0);
          uVar17 = SUB84(dVar5,0);
          *(undefined8 *)(puVar18 + 0x18) = 0;
          *(undefined8 *)(puVar18 + 0x20) = 0;
          *(double *)(puVar18 + 0x28) = dVar5;
          *(double *)(puVar18 + 0x30) = dVar6;
LAB_100239dc8:
          FUN_1001a7604(uVar17,uVar31,(int)DAT_100700458,&local_58,0,1,1,0);
          FUN_100217418(puVar18 + 8,&local_58);
          plVar14 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,CONCAT22(uStack_4e,uStack_50)));
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar1 = plVar14 + 1;
            lVar26 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar26 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (*(long *)(puVar18 + 8) != 0) {
            *(uint *)(puVar18 + 0x84) = param_2;
            if (param_2 != 0) {
              puVar30 = (undefined8 *)(puVar18 + 0xd8);
              lVar26 = 0;
              do {
                puVar30[-10] = puVar18;
                uVar21 = *(undefined8 *)((long)param_1 + lVar26);
                uVar22 = ((undefined8 *)((long)param_1 + lVar26))[1];
                puVar2 = (undefined4 *)((long)param_1 + lVar26 + 0x10);
                uVar17 = puVar2[1];
                uVar31 = puVar2[2];
                uVar7 = puVar2[3];
                puVar3 = (undefined4 *)((long)param_1 + lVar26 + 0x20);
                uVar8 = *puVar3;
                uVar9 = puVar3[1];
                uVar10 = puVar3[2];
                uVar11 = puVar3[3];
                puVar4 = (undefined8 *)((long)param_1 + lVar26 + 0x30);
                uVar12 = *puVar4;
                uVar13 = puVar4[1];
                *(undefined4 *)(puVar30 + 2) = *puVar2;
                *(undefined4 *)((long)puVar30 + 0x14) = uVar17;
                *(undefined4 *)(puVar30 + 3) = uVar31;
                *(undefined4 *)((long)puVar30 + 0x1c) = uVar7;
                *puVar30 = uVar21;
                puVar30[1] = uVar22;
                *(undefined4 *)(puVar30 + 4) = uVar8;
                *(undefined4 *)((long)puVar30 + 0x24) = uVar9;
                *(undefined4 *)(puVar30 + 5) = uVar10;
                *(undefined4 *)((long)puVar30 + 0x2c) = uVar11;
                puVar30[6] = uVar12;
                puVar30[7] = uVar13;
                puVar4 = (undefined8 *)((long)param_1 + lVar26 + 0x40);
                uVar21 = puVar4[1];
                puVar30[8] = *puVar4;
                puVar30[9] = uVar21;
                puVar4 = (undefined8 *)((long)param_1 + lVar26 + 0x50);
                uVar21 = puVar4[1];
                puVar30[10] = *puVar4;
                puVar30[0xb] = uVar21;
                puVar30[0xc] = *(undefined8 *)((long)param_1 + lVar26 + 0x60);
                if (*(char *)((long)puVar30 + 0x1e) == '\0') {
                  if (*(char *)((long)puVar30 + 0x1f) == '\0') {
                    auVar32 = pmovsxwd(ZEXT416(*(uint *)((long)puVar30 + 0x32)),
                                       ZEXT416(*(uint *)((long)puVar30 + 0x32)));
                    dVar5 = (double)*(ushort *)(puVar30 + 1) -
                            (double)(int)*(short *)((long)puVar30 + 0x36);
                    auVar33._8_4_ = SUB84((double)auVar32._0_4_,0);
                    auVar33._0_8_ = (double)auVar32._4_4_;
                    auVar33._12_4_ = (int)((ulong)(double)auVar32._0_4_ >> 0x20);
                    *(undefined1 (*) [16])(puVar30 + 0xd) = auVar33;
                    puVar30[0xf] = (double)*(ushort *)((long)puVar30 + 10) -
                                   (double)(int)*(short *)(puVar30 + 7);
                  }
                  else {
                    puVar30[0xd] = 0;
                    puVar30[0xe] = 0;
                    puVar30[0xf] = 0x4085f80000000000;
                    dVar5 = DAT_100719788;
                  }
                }
                else {
                  puVar30[0xd] = 0;
                  puVar30[0xe] = 0;
                  puVar30[0xf] = 0x4086000000000000;
                  dVar5 = DAT_100719778;
                }
                puVar30[0x10] = dVar5;
                uVar23 = *(uint *)(puVar30 + 1);
                uVar17 = FUN_100239983(puVar30,0,puVar30 + -8);
                *(undefined4 *)(puVar30 + -6) = uVar17;
                lVar20 = FUN_1001c63e1(uVar17);
                puVar30[-7] = lVar20;
                if (lVar20 == 0) {
                  uVar21 = FUN_1001cc310();
                  cVar16 = _os_log_type_enabled(uVar21,0x10);
                  if (cVar16 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    uStack_4e = 0;
                    uStack_4c = 0x822;
                    uStack_4a = 0x28a6;
                    uStack_48 = 0x7b;
                    uStack_46 = 1;
                    uStack_44 = 0;
                    __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar22 = FUN_1001cc310();
                  cVar16 = _os_log_type_enabled(uVar22,0x10);
                  uVar21 = 0xffffff94;
                  if (cVar16 == '\0') goto LAB_10023a18d;
                  uStack_4a = 0xff94;
                  goto LAB_10023a21b;
                }
                puVar30[-9] = (ulong)uVar23 << 0x20;
                lVar26 = lVar26 + 0x68;
                puVar30 = puVar30 + 0x1c;
              } while (uVar29 * 0x68 != lVar26);
            }
            *param_4 = puVar18;
            uVar21 = 0;
            goto LAB_100239c69;
          }
          uVar21 = FUN_1001cc310();
          cVar16 = _os_log_type_enabled(uVar21,0x10);
          if (cVar16 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            uStack_4a = 0x27ba;
            uStack_48 = 0x7b;
            uStack_46 = 1;
            uStack_44 = 0;
            __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          uVar21 = 0x237c;
        }
        else {
          if (param_2 == 1) {
            if (((param_1[1] == 0x706e6720) || (param_1[1] == 0x6a706567)) &&
               ((*param_1 == 0x6a706567 || (*param_1 == 0x706e6720)))) {
              if ((*(ushort *)(param_1 + 4) != 0) && (*(ushort *)((long)param_1 + 0xe) != 0)) {
                dVar5 = (double)*(ushort *)(param_1 + 4);
                uVar17 = SUB84(dVar5,0);
                dVar6 = (double)*(ushort *)((long)param_1 + 0xe);
                uVar31 = SUB84(dVar6,0);
                *(undefined8 *)(puVar18 + 0x18) = 0;
                *(undefined8 *)(puVar18 + 0x20) = 0;
                *(double *)(puVar18 + 0x28) = dVar5;
                *(double *)(puVar18 + 0x30) = dVar6;
                *puVar18 = 1;
                goto LAB_100239dc8;
              }
              if (DAT_1008a2e18 != -1) {
                _dispatch_once(&DAT_1008a2e18,&PTR___NSConcreteGlobalBlock_10083e9d8);
              }
              uVar21 = DAT_1008a2e10;
              cVar16 = _os_log_type_enabled(DAT_1008a2e10,0x10);
              if (cVar16 != '\0') {
                uStack_4e = *(undefined2 *)((long)param_1 + 0xe);
                local_58 = 0x4000200;
                uStack_54 = (uint)*(ushort *)(param_1 + 4);
                uStack_4c = 0;
                pcVar24 = 
                "ValidateFormatListAndGetRectForDynamicMasterWorldAspectRatio() failed; originalWidth %u, originalHeight %u"
                ;
                uVar22 = 0xe;
                goto LAB_10023a169;
              }
            }
            else {
              if (DAT_1008a2e18 != -1) {
                _dispatch_once(&DAT_1008a2e18,&PTR___NSConcreteGlobalBlock_10083e9d8);
              }
              uVar21 = DAT_1008a2e10;
              cVar16 = _os_log_type_enabled(DAT_1008a2e10,0x10);
              if (cVar16 != '\0') {
                local_58 = 0x4000300;
                uStack_54 = 0;
                uStack_4e = (undefined2)param_1[1];
                uStack_4c = (undefined2)((uint)param_1[1] >> 0x10);
                uStack_4a = 0x400;
                uStack_48 = (undefined2)*param_1;
                uStack_46 = (undefined2)((uint)*param_1 >> 0x10);
                pcVar24 = 
                "ValidateFormatListAndGetRectForDynamicMasterWorldAspectRatio() failed; formatIndex %u, outputFormat %#x, baseFormat %#x"
                ;
                uVar22 = 0x14;
LAB_10023a169:
                uStack_50 = 0x400;
                __os_log_impl(0x100000000,uVar21,0x10,pcVar24,&local_58,uVar22);
              }
            }
          }
          else {
            uVar21 = FUN_1001cc310();
            cVar16 = _os_log_type_enabled(uVar21,0x10);
            if (cVar16 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x822;
              uStack_4a = 0x2896;
              uStack_48 = 0x7b;
              uStack_46 = 1;
              uStack_44 = 0;
              __os_log_error_impl(0x100000000,uVar21,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          uVar22 = FUN_1001cc310();
          cVar16 = _os_log_type_enabled(uVar22,0x10);
          uVar21 = 0xffffffce;
          if (cVar16 != '\0') {
            uStack_4a = 0xffce;
LAB_10023a21b:
            uStack_48 = 0xffff;
            uStack_4c = 0x400;
            uStack_4e = 0;
            uStack_50 = 1;
            uStack_54 = 0x7a0a90;
            local_58 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar22,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
LAB_10023a18d:
        FUN_10023955c(puVar18);
        goto LAB_100239c69;
      }
      uVar21 = FUN_1001cc310();
      cVar16 = _os_log_type_enabled(uVar21,0x10);
      if (cVar16 != '\0') {
        pcVar24 = "numFormats <= 20";
        goto LAB_100239c35;
      }
    }
  }
  FUN_1001782e9(0,0);
  uVar21 = 0xffffffce;
LAB_100239c69:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

