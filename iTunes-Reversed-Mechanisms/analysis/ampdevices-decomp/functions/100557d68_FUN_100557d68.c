// name: FUN_100557d68
// address: 100557d68

/* WARNING: Type propagation algorithm not settling */

ulong FUN_100557d68(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  long *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined4 uVar19;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  uint local_5c [2];
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  uVar19 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar10 = (int *)*param_2;
  uVar18 = 0xfffffffc;
  if (param_1 < 0x67726269) {
    if (param_1 < 0x67636864) {
      if (param_1 < 0x636c7220) {
        if (param_1 < 0x63616e20) {
          if (param_1 != 0x61737470) {
            if (param_1 == 0x626f6666) {
              piVar14 = piVar10;
              if (piVar10 == (int *)0x0) {
                piVar14 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
                if (piVar14 == (int *)0x0) {
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_5c[1] = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "mp4 != nullptr";
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        local_5c + 1,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_100559745;
                }
                FUN_1005479d4(piVar14,param_3);
                uVar8 = FUN_100548d34(0,piVar14,*(undefined4 *)(param_2 + 3),param_2[4],0,1);
                uVar18 = (ulong)uVar8;
                if (uVar8 != 0xffffff80) {
                  if (uVar8 == 0) {
                    FUN_100549f1e(piVar14,0,*(undefined4 *)(param_2 + 3),param_2[4],0,0,0);
                    *(undefined1 *)(piVar14 + 0x192a) = 1;
                    goto LAB_100558255;
                  }
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_5c[1] = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x400;
                    local_4a = (char *)CONCAT44(local_4a._4_4_,uVar8);
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                        local_5c + 1,0x12);
                  }
                }
              }
              else {
LAB_100558255:
                if (*piVar14 != 0x6d703464) {
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_5c[1] = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        local_5c + 1,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_1005592fe;
                }
                uVar8 = FUN_10055423c(piVar14,*(undefined4 *)(param_2 + 5),(long)param_2 + 0x2c,
                                      param_2 + 6,param_2 + 7);
                uVar18 = (ulong)uVar8;
                if (piVar10 == (int *)0x0) {
                  FUN_100547ee0(piVar14);
                  operator_delete(piVar14);
                }
              }
            }
            goto LAB_100559304;
          }
          if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
            *(undefined1 *)((long)piVar10 + 0x64b6) = 1;
            goto LAB_10055a253;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x63616e20) {
            if (param_1 == 0x63636163) {
              local_5c[0] = 0;
              if ((param_3 == (int *)0x0) || (*param_3 != 0x6d703464)) {
                uVar13 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_5c[1] = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                      local_5c + 1,0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1005592fe;
              }
              plVar11 = (long *)FUN_1001c6429(0x10);
              if (plVar11 == (long *)0x0) {
                uVar13 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_5c[1] = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "playCache != nullptr";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                      local_5c + 1,0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_100559745;
              }
              FUN_10057db47(*(undefined8 *)(param_3 + 2),*(undefined8 *)(param_3 + 4),0x66627566,
                            local_5c);
              if (local_5c[0] == 0) {
                local_5c[0] = 0x8000;
              }
              uVar8 = FUN_1001d7af8(plVar11,2,local_5c[0] >> 1);
              uVar18 = (ulong)uVar8;
              if (uVar8 != 0xffffff80) {
                if (uVar8 == 0) {
                  param_2[3] = plVar11;
                  goto LAB_10055a253;
                }
                uVar13 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_5c[1] = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,uVar8);
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_5c + 1
                                      ,0x12);
                }
              }
              if (*plVar11 != 0) {
                FUN_1001d7cd8();
              }
              FUN_1001c64c1(plVar11);
            }
            else if (param_1 == 0x63646670) {
              if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
                uVar18 = FUN_1005554de(piVar10,param_2 + 3);
                return uVar18;
              }
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1005592fe;
            }
            goto LAB_100559304;
          }
LAB_1005585ce:
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            uVar8 = *(uint *)((long)param_2 + 0x2c);
            cVar6 = FUN_1001cd44e("no-airtunes-music-videos",0,0);
            if (cVar6 != '\0') {
              uVar8 = 0;
            }
            iVar1 = *(int *)(param_2 + 3);
            if (iVar1 < 0x4d46494c) {
              if (iVar1 == 0x46494c45) {
LAB_100559338:
                if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                  uVar18 = FUN_10054e5a6(*(undefined4 *)param_2[4],((undefined4 *)param_2[4])[9],
                                         *(undefined4 *)(param_2 + 5),uVar8 & 0xff);
                  return uVar18;
                }
                goto LAB_10055a9e0;
              }
              if (iVar1 != 0x48545450) goto LAB_100559304;
            }
            else if (iVar1 != 0x53485244) {
              if (iVar1 != 0x4d46494c) goto LAB_100559304;
              goto LAB_100559338;
            }
            if (((iVar1 == 0x53485244) || (iVar1 == 0x48545450)) && (param_2[4] != 0)) {
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                uVar18 = FUN_10054e5dc(param_2[4],*(undefined4 *)((long)param_2 + 0x34),0,
                                       uVar8 & 0xff);
                return uVar18;
              }
              goto LAB_10055a9e0;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "urlLocation != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
LAB_100559857:
            uVar18 = 0xffffffce;
            goto LAB_100559304;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 < 0x64636f64) {
        if (param_1 == 0x636c7220) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
LAB_100558a15:
            FUN_1001c64c1(param_3);
            goto LAB_10055a253;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x64636163) goto LAB_100559304;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            param_3 = (int *)param_2[3];
            if (param_3 == (int *)0x0) {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "playCache != nullptr";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_100559857;
            }
            FUN_1001d7cd8(*(undefined8 *)param_3);
            goto LAB_100558a15;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x64636f64) {
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
          uVar18 = FUN_100554602(piVar10,param_2[3],(long)param_2 + 0x24,param_2 + 5,param_2 + 6);
          return uVar18;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x65736d70) {
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
          uVar18 = FUN_1005573ac(piVar10,param_2 + 3);
          return uVar18;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_1 != 0x67617274) goto LAB_100559304;
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
          if (((*(ushort *)(param_2 + 5) & 0x1040) != 0) ||
             ((lVar15 = FUN_10054e55e(*(undefined8 *)(param_3 + 6),*(undefined4 *)(param_2 + 3),
                                      param_2[4]), lVar15 == 0 ||
              (lVar15 = *(long *)(lVar15 + 0x63e8), lVar15 == 0)))) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_10054f1d2(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 6,
                                    *(undefined4 *)(param_2 + 5),param_2 + 7,(long)param_2 + 0x3c);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          param_2[6] = lVar15;
          goto LAB_10055a253;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_1005592fe;
    }
    if (param_1 < 0x6765696c) {
      if (0x67636f6c < param_1) {
        if (param_1 == 0x67636f6d) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_10054fbae(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 5,
                                    param_2 + 0x27,param_2[0x25],
                                    CONCAT44(uVar7,*(undefined4 *)(param_2 + 0x26)),
                                    (long)param_2 + 0x134);
LAB_100558c8e:
              FUN_100547ee0(pvVar9);
              operator_delete(pvVar9);
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                return (ulong)uVar8;
              }
              goto LAB_10055a9e0;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x67646574) {
            if (param_1 == 0x67646872) {
              if ((piVar10 == (int *)0x0) || (*piVar10 != 0x6d703464)) {
                uVar13 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar13,0x10);
                if (cVar6 != '\0') {
                  local_5c[1] = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                      local_5c + 1,0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_1005592fe;
              }
              lVar15 = *(long *)(piVar10 + 0xe);
              uVar18 = 0;
              if (lVar15 != 0) {
                plVar11 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
                if (plVar11 != (long *)0x0) {
                  *plVar11 = lVar15;
                  lVar15 = *(long *)(piVar10 + 0x10);
                  plVar11[1] = lVar15;
                  if (lVar15 != 0) {
                    LOCK();
                    *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
                    UNLOCK();
                  }
                }
                param_2[6] = plVar11;
              }
            }
            goto LAB_100559304;
          }
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_100551b08(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],
                                    *(undefined4 *)(param_2 + 5),(long)param_2 + 0x2c,param_2[6]);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        goto LAB_1005592fe;
      }
      if (param_1 == 0x67636864) {
        uVar18 = 0xffffffe4;
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
          uVar18 = 0;
          if (*(long *)(piVar10 + 0x1904) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_1001757f8();
          }
          param_2[4] = uVar13;
        }
      }
      else if (param_1 == 0x67636869) {
        if ((piVar10 == (int *)0x0) || (*piVar10 != 0x6d703464)) {
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
          goto LAB_1005592fe;
        }
        uVar8 = *(uint *)(param_2 + 3);
        uVar18 = 0xffffffce;
        if ((uVar8 != 0) && (uVar8 <= (uint)piVar10[0x1900])) {
          puVar12 = (undefined4 *)param_2[4];
          uVar18 = 0;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = *(undefined4 *)(*(long *)(piVar10 + 0x1902) + (ulong)(uVar8 - 1) * 4);
            *(undefined2 *)(puVar12 + 1) = 0;
          }
        }
      }
    }
    else if (param_1 < 0x67696e66) {
      if (param_1 == 0x6765696c) {
        param_2[4] = &DAT_10086a0a0;
LAB_10055a253:
        uVar18 = 0;
      }
      else if (param_1 == 0x67667874) {
        uVar18 = FUN_100466cd7(" A4M A4M A4M P4M P4M P4M B4M B4M B4M R4M R4M R4M",param_2[3],
                               param_2 + 4,(long)param_2 + 0x24,0xf);
        return uVar18;
      }
    }
    else {
      if (param_1 != 0x67696e66) {
        if (param_1 == 0x676c7972) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_10054fabe(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2[6],
                                    *(undefined4 *)(param_2 + 5));
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x67706174) goto LAB_100559304;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              iVar1 = *(int *)(param_2 + 3);
              uVar8 = 0;
              if (iVar1 < 0x48545450) {
                if (iVar1 == 0x44574e4c) {
                  uVar8 = 0x1bd;
                }
                else if (iVar1 == 0x46494c45) goto LAB_100559768;
              }
              else if ((iVar1 == 0x48545450) || (iVar1 == 0x53485244)) {
                uVar8 = 0x110c;
              }
              else if (iVar1 == 0x4d46494c) {
LAB_100559768:
                uVar8 = 0x11bd;
              }
              *(uint *)((long)param_2 + 0x34) = uVar8 & *(uint *)(param_2 + 6);
              FUN_100547ee0(pvVar9);
              operator_delete(pvVar9);
              goto LAB_10055a253;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        goto LAB_1005592fe;
      }
      uVar18 = 0xffffffe4;
      if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
        uVar18 = FUN_100553f8e(piVar10,param_2 + 3);
        return uVar18;
      }
    }
  }
  else {
    if (param_1 < 0x73617274) {
      if (param_1 < 0x7063616e) {
        if (0x67756668 < param_1) {
          if (param_1 == 0x67756669) {
            if ((param_3 == (int *)0x0) || (*param_3 != 0x6d703464)) {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1005592fe;
            }
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_100550a48(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 5,
                                    param_2[0x25],*(undefined4 *)(param_2 + 0x26),
                                    (long)param_2 + 0x134);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            if (param_1 != 0x696e6974) {
              if (((param_1 == 0x6c64746d) && (uVar18 = 0xffffffe4, piVar10 != (int *)0x0)) &&
                 (*piVar10 == 0x6d703464)) {
                uVar5 = FUN_1005541ce(piVar10,(long)param_2 + 0x1c);
                goto LAB_100558949;
              }
              goto LAB_100559304;
            }
            puVar12 = (undefined4 *)FUN_1001c6429(0x20);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = 0x6d703464;
              *(undefined8 *)(puVar12 + 2) = param_2[4];
              *(undefined8 *)(puVar12 + 4) = param_2[5];
              param_2[7] = puVar12;
              goto LAB_10055a253;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "handlerData != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
          }
LAB_100559745:
          uVar18 = 0xffffff94;
          goto LAB_100559304;
        }
        if (param_1 == 0x67726269) {
          if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
            uVar5 = *(undefined1 *)((long)piVar10 + 0x64b5);
LAB_100558949:
            *(undefined1 *)(param_2 + 3) = uVar5;
            goto LAB_10055a253;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x6774696e) goto LAB_100559304;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_10054e6d8(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],
                                    *(undefined4 *)(param_2 + 6),param_2[7],param_2[8],param_2[10],
                                    CONCAT44(uVar19,*(undefined4 *)(param_2 + 5)),param_2 + 9);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        if (param_1 < 0x72636f6d) {
          if (param_1 == 0x7063616e) goto LAB_1005585ce;
          if (param_1 == 0x706c6179) {
            if ((param_3 == (int *)0x0) || (*param_3 != 0x6d703464)) {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1005592fe;
            }
            piVar10 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (piVar10 == (int *)0x0) {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_5c[1] = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "mp4 != nullptr";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_100559745;
            }
            FUN_1005479d4(piVar10,param_3);
            *param_2 = piVar10;
            uVar8 = *(uint *)(param_2 + 5);
            *(byte *)((long)piVar10 + 0x64b1) = (byte)(uVar8 >> 0xe) & 1;
            *(byte *)((long)piVar10 + 0x64b2) = (byte)(uVar8 >> 0xf) & 1;
            iVar1 = *(int *)(param_2 + 1);
            iVar2 = *(int *)((long)param_2 + 0xc);
            iVar3 = *(int *)(param_2 + 2);
            iVar4 = *(int *)((long)param_2 + 0x14);
            if (param_2[2] != 0) {
              LOCK();
              plVar11 = (long *)(param_2[2] + 0x10);
              *plVar11 = *plVar11 + 1;
              UNLOCK();
            }
            lVar15 = *(long *)(piVar10 + 0xc);
            piVar10[10] = iVar1;
            piVar10[0xb] = iVar2;
            piVar10[0xc] = iVar3;
            piVar10[0xd] = iVar4;
            if (lVar15 != 0) {
              std::__shared_weak_count::__release_weak();
            }
            if (*(char *)((long)piVar10 + 0x64b2) == '\x01') {
              *(undefined1 *)((long)piVar10 + 0x64b1) = 1;
            }
            uVar8 = FUN_1005525d4(piVar10,param_2 + 3);
            if (uVar8 != 0) {
              FUN_100547ee0(piVar10);
              goto LAB_10055a286;
            }
            uVar18 = 0;
            if (*(char *)((long)piVar10 + 0x64b1) == '\0') {
              FUN_10055ab1e(param_3 + 6,piVar10);
            }
          }
          goto LAB_100559304;
        }
        if (param_1 == 0x72636f6d) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_1005505a0(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 7,
                                    *(undefined4 *)(param_2 + 5),param_2[6]);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else if (param_1 == 0x72656266) {
          if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
            FUN_10055543e();
            goto LAB_100559857;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x72756669) goto LAB_100559304;
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_1005515e4(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 7,
                                    *(undefined4 *)(param_2 + 5),param_2[6]);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
      }
    }
    else if (param_1 < 0x736c7972) {
      if (param_1 < 0x73636f6d) {
        if (param_1 == 0x73617274) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_10054f4aa(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2[7],
                                    *(undefined4 *)(param_2 + 5),param_2[6],param_2 + 8,
                                    (long)param_2 + 0x44);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
        else {
          if (param_1 != 0x73636869) goto LAB_100559304;
          if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
            uVar8 = *(uint *)(param_2 + 5);
            if (uVar8 != 0) {
              if (*(long *)(piVar10 + 0x1904) == 0) {
                if ((uint)piVar10[0x1900] < uVar8) {
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_5c[1] = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = 
                    "messageInfo->u.setChapterIndexMessage.chapterIndex <= mp4->mChapterTable.numChapters"
                    ;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        local_5c + 1,0x16);
                  }
                  FUN_1001782e9(0,0);
                  goto LAB_100559857;
                }
                uVar7 = *(undefined4 *)(*(long *)(piVar10 + 0x1902) + (ulong)(uVar8 - 1) * 4);
              }
              else {
                uVar7 = FUN_100176de6(*(long *)(piVar10 + 0x1904),uVar8);
                uVar8 = *(uint *)(param_2 + 5);
              }
              uVar19 = (undefined4)param_2[6];
              uVar13 = param_2[3];
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
                puVar17 = param_2 + 7;
                param_2 = param_2 + 8;
LAB_10055a225:
                uVar18 = FUN_100553780(uVar19,piVar10,uVar7,puVar17,param_2,uVar13,uVar8);
                return uVar18;
              }
              goto LAB_10055a9e0;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "messageInfo->u.setChapterIndexMessage.chapterIndex > kChapterIndex_Invalid";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559857;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x73636f6d) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
          pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar9 != (void *)0x0) {
            FUN_1005479d4(pvVar9,param_3);
            uVar8 = FUN_10054feb6(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 7,
                                  param_2[0x27],*(undefined4 *)(param_2 + 0x28),
                                  CONCAT44(uVar7,*(undefined4 *)(param_2 + 5)),param_2[6]);
            goto LAB_100558c8e;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mp4 != nullptr";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
          goto LAB_100559745;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_1 == 0x73657874) {
          uVar18 = FUN_100466d97(" A4M A4M A4M P4M P4M P4M B4M B4M B4M R4M R4M R4M",param_2[3],
                                 param_2[4]);
          return uVar18;
        }
        if (param_1 != 0x73676374) goto LAB_100559304;
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
          uVar18 = FUN_100555860(piVar10,param_2 + 3);
          return uVar18;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else if (param_1 < 0x7374696e) {
      if (param_1 == 0x736c7972) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
          pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar9 != (void *)0x0) {
            FUN_1005479d4(pvVar9,param_3);
            uVar8 = FUN_10054f798(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2[7],
                                  *(undefined4 *)(param_2 + 5),param_2[6]);
            goto LAB_100558c8e;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "mp4 != nullptr";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
          goto LAB_100559745;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (param_1 != 0x73706f73) goto LAB_100559304;
        if ((piVar10 != (int *)0x0) && (*piVar10 == 0x6d703464)) {
          uVar7 = *(undefined4 *)(param_2 + 4);
          uVar19 = (undefined4)param_2[5];
          uVar13 = param_2[3];
          puVar17 = param_2 + 6;
          param_2 = param_2 + 7;
          uVar8 = 0;
          goto LAB_10055a225;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (param_1 != 0x7374696e) {
        if (param_1 == 0x73746f70) {
          if ((piVar10 == (int *)0x0) || (*piVar10 != 0x6d703464)) {
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "(mp4 != nullptr) && (mp4->mMagic == kMP4DecoderMagic)";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1005592fe;
          }
          uVar8 = FUN_1005551f4(piVar10,param_2 + 3);
          if ((*(char *)((long)piVar10 + 0x64b1) == '\0') &&
             (piVar14 = *(int **)(param_3 + 6), piVar14 != (int *)0x0)) {
            if (piVar14 == piVar10) {
              piVar16 = (int *)0x0;
            }
            else {
              do {
                piVar16 = piVar14;
                piVar14 = *(int **)(piVar16 + 2);
                if (piVar14 == (int *)0x0) goto LAB_10055a27b;
              } while (piVar14 != piVar10);
            }
            piVar14 = piVar16 + 2;
            if (piVar16 == (int *)0x0) {
              piVar14 = param_3 + 6;
            }
            *(undefined8 *)piVar14 = *(undefined8 *)(piVar10 + 2);
            piVar10[2] = 0;
            piVar10[3] = 0;
          }
LAB_10055a27b:
          FUN_100547ee0(piVar10);
LAB_10055a286:
          uVar18 = (ulong)uVar8;
          operator_delete(piVar10);
          *param_2 = 0;
        }
        else if (param_1 == 0x73756669) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
            pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar9 != (void *)0x0) {
              FUN_1005479d4(pvVar9,param_3);
              uVar8 = FUN_100550e60(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 7,
                                    param_2[0x27],*(undefined4 *)(param_2 + 0x28),
                                    CONCAT44(uVar7,*(undefined4 *)(param_2 + 5)),param_2[6]);
              goto LAB_100558c8e;
            }
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_5c[1] = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mp4 != nullptr";
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,
                                  0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_100559745;
          }
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_5c[1] = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16
                               );
          }
          FUN_1001782e9(0,0);
          goto LAB_1005592fe;
        }
        goto LAB_100559304;
      }
      if ((param_3 != (int *)0x0) && (*param_3 == 0x6d703464)) {
        pvVar9 = operator_new(0x64c8,(nothrow_t *)PTR_nothrow_10082c970);
        if (pvVar9 != (void *)0x0) {
          FUN_1005479d4(pvVar9,param_3);
          uVar8 = FUN_10054eaa4(pvVar9,*(undefined4 *)(param_2 + 3),param_2[4],param_2[7],param_2[8]
                                ,param_2[9],CONCAT44(uVar7,*(undefined4 *)(param_2 + 5)),param_2[6])
          ;
          goto LAB_100558c8e;
        }
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        if (cVar6 != '\0') {
          local_5c[1] = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mp4 != nullptr";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_100559745;
      }
      uVar13 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar13,0x10);
      if (cVar6 != '\0') {
        local_5c[1] = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "(handlerData != nullptr) && (handlerData->magic == kMP4DecoderMagic)";
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_5c + 1,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1005592fe:
    uVar18 = 0xffffffe4;
  }
LAB_100559304:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar18;
  }
LAB_10055a9e0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

