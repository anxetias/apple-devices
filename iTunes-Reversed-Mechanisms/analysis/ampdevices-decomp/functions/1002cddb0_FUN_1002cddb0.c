// name: FUN_1002cddb0
// address: 1002cddb0

int FUN_1002cddb0(long param_1,double *param_2)

{
  long *plVar1;
  double *pdVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  double *pdVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  uint local_8c;
  int local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x300) = 0;
  iVar7 = _AudioComponentInstanceNew(*(undefined8 *)(param_1 + 0x2f8),plVar1);
  if (iVar7 == -0x80) goto LAB_1002ce5fb;
  if (iVar7 == 0) {
    if (*plVar1 == 0) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        uStack_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xda6;
        uStack_58 = 0x7b;
        uStack_56 = 1;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      iVar7 = -0x6c;
      goto LAB_1002ce5fb;
    }
    local_68._0_4_ = 0;
    _AudioComponentGetVersion(*(undefined8 *)(param_1 + 0x2f8),&local_68);
    *(undefined4 *)(param_1 + 0x308) = (undefined4)local_68;
    dVar3 = *param_2;
    if ((*(uint *)(param_1 + 0x18) != 0) &&
       (dVar19 = (double)*(uint *)(param_1 + 0x18), dVar3 < dVar19)) {
      dVar3 = dVar19;
    }
    pdVar2 = (double *)(param_1 + 0x310);
    FUN_10015d841((float)dVar3,*(undefined4 *)(param_1 + 0x14),1);
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar10 = *(uint *)(param_1 + 0x18);
    if (((*(byte *)(param_1 + 0x10) & 1) != 0) &&
       (iVar7 = _AudioCodecSetProperty(*plVar1,0x61636266,4), iVar7 != -0x80)) {
      if (iVar7 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_88 = 0x8220202;
          local_84 = "Assertion failure";
          local_7c = 0x400;
          local_7a = iVar7;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        }
        if (iVar7 != 0) goto LAB_1002cdef0;
      }
      *(undefined4 *)(param_1 + 0x20) = 2;
    }
LAB_1002cdef0:
    iVar7 = *(int *)(param_1 + 0x24);
    if (iVar7 != 0) {
      iVar8 = _AudioCodecSetProperty(*plVar1,0x73726371,4);
      iVar9 = 0;
      if (iVar8 != -0x80) {
        if (iVar8 != 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            local_7a = iVar8;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
          iVar9 = 0;
          if (iVar8 != 0) goto LAB_1002cdf4f;
        }
        iVar9 = iVar7;
      }
LAB_1002cdf4f:
      *(int *)(param_1 + 0x24) = iVar9;
    }
    iVar8 = _AudioCodecSetProperty(*plVar1,0x62726174,4);
    iVar7 = -48000;
    iVar9 = local_7a;
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        iVar7 = _AudioCodecSetProperty(*plVar1,0x7067636d,4);
        if ((iVar7 != -0x80) && (iVar7 != 0)) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            local_7a = iVar7;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
        }
        local_50 = 0;
        uStack_48 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_5a = 0;
        uStack_58 = 0;
        uStack_56 = 0;
        uStack_52 = 0;
        dVar3 = (double)uVar10;
        local_68 = dVar3;
        iVar8 = _AudioCodecSetProperty(*plVar1,0x636f7372,8);
        iVar7 = -0xbb82;
        iVar9 = local_7a;
        if (iVar8 != -0x80) {
          if (iVar8 != 0) {
            uVar11 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            iVar9 = local_7a;
            goto joined_r0x0001002ce172;
          }
          iVar7 = _AudioCodecGetPropertyInfo(*plVar1,0x69737261,&local_8c,&local_88);
          if (iVar7 == 0) {
            pvVar12 = operator_new__((ulong)(local_8c & 0xfffffff0),
                                     (nothrow_t *)PTR_nothrow_10082c970);
            if (pvVar12 != (void *)0x0) {
              iVar7 = _AudioCodecGetProperty(*plVar1,0x69737261,&local_8c,pvVar12);
              if ((iVar7 == 0) && (0xf < local_8c)) {
                dVar19 = *pdVar2;
                uVar14 = 0;
                do {
                  dVar21 = *(double *)((long)pvVar12 + uVar14);
                  uVar17 = SUB84(dVar21,0);
                  uVar18 = (undefined4)((ulong)dVar21 >> 0x20);
                  if (dVar19 <= dVar21) {
                    *pdVar2 = dVar21;
                    goto LAB_1002ce32f;
                  }
                  uVar14 = uVar14 + 0x10;
                } while ((local_8c >> 4) << 4 != uVar14);
                uVar17 = SUB84(dVar19,0);
                uVar18 = (undefined4)((ulong)dVar19 >> 0x20);
LAB_1002ce32f:
                uVar14 = (ulong)((local_8c >> 4) - 1);
                lVar13 = uVar14 * 0x10;
                dVar19 = *(double *)((long)pvVar12 + lVar13 + 8);
                if (dVar19 <= (double)CONCAT44(uVar18,uVar17) &&
                    (double)CONCAT44(uVar18,uVar17) != dVar19) {
                  dVar21 = 0.0;
                  if (uVar14 != 0) {
                    pdVar15 = (double *)((long)pvVar12 + lVar13 + 8);
                    uVar16 = uVar14;
                    do {
                      uVar16 = uVar16 - 1;
                      if (uVar10 != 0) {
                        dVar20 = *pdVar15;
                        if ((dVar20 == dVar3) && (!NAN(dVar20) && !NAN(dVar3))) {
                          dVar21 = dVar20;
                          if ((dVar20 != 0.0) || (NAN(dVar20))) goto LAB_1002ce3dd;
                          goto LAB_1002ce398;
                        }
                      }
                      pdVar15 = pdVar15 + -2;
                    } while ((int)uVar16 != 0);
                    dVar20 = 0.0;
LAB_1002ce398:
                    pdVar15 = (double *)((long)pvVar12 + lVar13 + 8);
                    do {
                      uVar14 = uVar14 - 1;
                      dVar21 = *pdVar15;
                      if ((dVar21 + dVar21 == (double)CONCAT44(uVar18,uVar17)) &&
                         (!NAN(dVar21 + dVar21) && !NAN((double)CONCAT44(uVar18,uVar17)))) break;
                      pdVar15 = pdVar15 + -2;
                      dVar21 = dVar20;
                    } while ((int)uVar14 != 0);
                  }
LAB_1002ce3dd:
                  *pdVar2 = (double)(~-(ulong)(dVar21 == 0.0) & (ulong)dVar21 |
                                    (ulong)dVar19 & -(ulong)(dVar21 == 0.0));
                }
              }
              operator_delete__(pvVar12);
            }
          }
          iVar8 = _AudioCodecSetProperty(*plVar1,0x63697372,8,pdVar2);
          iVar7 = -0xbb81;
          iVar9 = local_7a;
          if (iVar8 != -0x80) {
            if (iVar8 != 0) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              iVar9 = local_7a;
              goto joined_r0x0001002ce172;
            }
            uStack_58 = 0;
            uStack_56 = 0;
            uStack_52 = 0;
            local_50 = 0;
            local_68._0_4_ = 0;
            local_68._4_4_ = 0;
            uStack_60 = 0;
            uStack_5c = 0;
            uStack_5a = 0;
            uStack_48 = 0;
            local_8c = 0x28;
            iVar7 = _AudioCodecGetProperty(*plVar1,0x6f666d74);
            if (iVar7 == 0) {
              local_50 = CONCAT44(uVar4,(undefined4)local_50);
              local_68 = dVar3;
              iVar8 = _AudioCodecInitialize(*plVar1,pdVar2,&local_68,0,0);
              if ((uVar10 == 0 && iVar8 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) != 0)) {
                *pdVar2 = 44100.0;
                local_68._0_4_ = 0;
                local_68._4_4_ = 0x40e58880;
                iVar8 = _AudioCodecInitialize(*plVar1,pdVar2,&local_68,0,0);
              }
              iVar7 = -0xce;
              iVar9 = local_7a;
              if (iVar8 != -0x80) {
                if (iVar8 == 0) goto LAB_1002ce668;
                uVar11 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                iVar9 = local_7a;
                goto joined_r0x0001002ce172;
              }
            }
            else {
              if (iVar7 == -0x80) {
                iVar7 = -0x80;
                goto LAB_1002ce5fb;
              }
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_88 = 0x8220202;
                local_84 = "Assertion failure";
                local_7c = 0x400;
                local_7a = iVar7;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12
                                   );
              }
              iVar9 = local_7a;
              if (iVar7 == 0) {
LAB_1002ce668:
                param_2[4] = *(double *)(param_1 + 0x330);
                uVar4 = *(undefined4 *)pdVar2;
                uVar17 = *(undefined4 *)(param_1 + 0x314);
                uVar18 = *(undefined4 *)(param_1 + 0x318);
                uVar5 = *(undefined4 *)(param_1 + 0x31c);
                dVar3 = *(double *)(param_1 + 0x328);
                param_2[2] = *(double *)(param_1 + 800);
                param_2[3] = dVar3;
                *(undefined4 *)param_2 = uVar4;
                *(undefined4 *)((long)param_2 + 4) = uVar17;
                *(undefined4 *)(param_2 + 1) = uVar18;
                *(undefined4 *)((long)param_2 + 0xc) = uVar5;
                local_88 = 0x28;
                iVar9 = _AudioCodecGetProperty
                                  (*(undefined8 *)(param_1 + 0x300),0x6f666d74,&local_88,
                                   param_1 + 0x338);
                iVar7 = -0xce;
                if (iVar9 == -0x80) goto LAB_1002ce5fb;
                if (iVar9 == 0) {
                  if (local_88 != 0x28) {
                    uVar11 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 != '\0') {
                      local_68._0_4_ = 0x8220202;
                      local_68._4_4_ = 0x7a0a90;
                      uStack_60 = 1;
                      uStack_5c = 0x822;
                      uStack_5a = 0xc0f9;
                      uStack_58 = 0x7b;
                      uStack_56 = 1;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                          &local_68,0x16);
                    }
                    FUN_1001782e9(0,0);
                    goto LAB_1002ce5fb;
                  }
                  local_88 = 4;
                  iVar7 = _AudioCodecGetProperty
                                    (*(undefined8 *)(param_1 + 0x300),0x70616b66,&local_88,
                                     param_1 + 0x30);
                  if (iVar7 == -0x80) goto LAB_1002ce5fb;
                  if (iVar7 == 0) {
                    local_88 = 4;
                    iVar7 = _AudioCodecGetProperty
                                      (*(undefined8 *)(param_1 + 0x300),0x70616b62,&local_88,
                                       param_1 + 0x34);
                    if (iVar7 == -0x80) goto LAB_1002ce5fb;
                    if (iVar7 == 0) {
                      uVar10 = (uint)(long)*(double *)(param_1 + 0x338);
                      *(uint *)(param_1 + 0x2c) = uVar10;
                      if ((*(int *)(param_1 + 0x340) == 0x61616370) ||
                         (iVar7 = 0, *(int *)(param_1 + 0x340) == 0x61616368)) {
                        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) >> 1;
                        *(uint *)(param_1 + 0x2c) = uVar10 >> 1;
                        iVar7 = 0;
                      }
                      goto LAB_1002ce5fb;
                    }
                    uVar11 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 == '\0') goto LAB_1002ce5fb;
                    uStack_5a = (undefined2)iVar7;
                    uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
                  }
                  else {
                    uVar11 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 == '\0') goto LAB_1002ce5fb;
                    uStack_5a = (undefined2)iVar7;
                    uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
                  }
                }
                else {
                  uVar11 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 == '\0') goto LAB_1002ce5fb;
                  uStack_5a = (undefined2)iVar9;
                  uStack_58 = (undefined2)((uint)iVar9 >> 0x10);
                }
                goto LAB_1002ce653;
              }
            }
          }
        }
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar9 = local_7a;
joined_r0x0001002ce172:
        local_7a = iVar8;
        if (cVar6 != '\0') {
          local_7c = 0x400;
          local_84 = "Assertion failure";
          local_88 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          iVar9 = local_7a;
        }
      }
    }
    local_7a = iVar9;
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 == '\0') goto LAB_1002ce5fb;
    uStack_5a = (undefined2)iVar7;
    uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
  }
  else {
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 == '\0') goto LAB_1002ce5fb;
    uStack_5a = (undefined2)iVar7;
    uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
  }
LAB_1002ce653:
  uStack_60 = 1;
  local_68._4_4_ = 0x7a0a90;
  uStack_5c = 0x400;
  local_68._0_4_ = 0x8220202;
  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x12);
LAB_1002ce5fb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

