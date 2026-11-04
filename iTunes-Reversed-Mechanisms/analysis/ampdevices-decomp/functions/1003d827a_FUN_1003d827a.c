// name: FUN_1003d827a
// address: 1003d827a

void FUN_1003d827a(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  undefined4 uVar19;
  ulong uVar20;
  int local_d10 [2];
  ulong local_d08;
  undefined8 local_d00;
  undefined8 local_cf8;
  undefined8 local_cf0;
  long local_ce8;
  long local_ce0;
  ulong local_cd8;
  undefined8 local_cd0;
  long local_cc8;
  char local_cb9;
  undefined1 local_cb8 [1056];
  undefined1 local_898 [1056];
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar18 = *(long *)(param_1 + 0x10);
  local_cb9 = '\0';
  lVar8 = *(long *)(param_1 + 0x3e0);
  if (lVar8 == 0) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_46a = "context->desktopPhotoLibrary != nullptr";
LAB_1003d84f8:
      local_46c = 0x822;
      local_474 = "Assertion failure";
      local_478 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
  }
  else {
    cVar4 = *(char *)(*(long *)(param_1 + 0x20) + 0x2b7);
    if (*(int *)(lVar8 + 0x13c0) == 2) {
      FUN_10026b107(lVar8,1,0);
    }
    if (*(long *)(lVar18 + 0x66b8) == 0) {
      uVar11 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar11,0x10);
      if (cVar4 != '\0') {
        local_46a = "handlerData->iPodPhotoLibrary != nullptr";
        goto LAB_1003d84f8;
      }
    }
    else {
      if (*(long *)(param_1 + 1000) != 0) {
        iVar5 = FUN_1002441f8(*(undefined4 *)(lVar18 + 0x66b0),lVar18 + 0x6b40,0x70696374,1,
                              local_898);
        if (iVar5 == -0x80) goto LAB_1003d852c;
        if (iVar5 == 0) {
          *(undefined8 *)(*(long *)(lVar18 + 0x66b8) + 0x13c0) =
               *(undefined8 *)(*(long *)(param_1 + 0x3e0) + 0x13c0);
          FUN_100496791();
          FUN_100496791(*(undefined8 *)(lVar18 + 0x66b8));
          FUN_1003d767c(param_1,0,0,0,&local_cb9);
          if (local_cb9 == '\x01') {
            iVar5 = FUN_100591f64(*(undefined8 *)(lVar18 + 0x66b8),local_898,3,0x64656c70,
                                  param_1 + 0x410);
            local_cb9 = '\0';
            if (iVar5 == -0x80) goto LAB_1003d852c;
            if (iVar5 != 0) {
              uVar11 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar11,0x10);
              if (cVar4 == '\0') goto LAB_1003d852c;
              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
              goto LAB_1003d9dc7;
            }
          }
          *(undefined8 *)(param_1 + 0x3f8) = 0;
          *(undefined8 *)(param_1 + 0x400) = 0;
          *(undefined8 *)(param_1 + 0x408) = 0;
          for (lVar8 = FUN_100496019(*(undefined8 *)(param_1 + 0x3e0)); lVar8 != 0;
              lVar8 = FUN_1004960d0(lVar8)) {
            uVar12 = *(uint *)(lVar8 + 0xa0);
            if ((((uVar12 != 0) && (*(char *)(lVar8 + 0xb0) == '\0')) &&
                ((*(char *)(lVar8 + 0x80) == '\x06' || (*(char *)(lVar8 + 0x80) == '\0')))) &&
               ((*(int *)(lVar8 + 0xa4) != 0 &&
                (*(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) + 1, (uVar12 & 2) != 0)))) {
              *(int *)(param_1 + 0x404) = *(int *)(param_1 + 0x404) + 1;
            }
          }
          if (*(int *)(param_1 + 0x3fc) != 0) {
            iVar5 = FUN_1002441f8(*(undefined4 *)(lVar18 + 0x66b0),lVar18 + 0x6b40,0x74686d62,1,
                                  local_cb8);
            if (iVar5 == -0x80) goto LAB_1003d852c;
            if (iVar5 != 0) {
              uVar11 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar11,0x10);
              if (cVar4 == '\0') goto LAB_1003d852c;
              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
              goto LAB_1003d9dc7;
            }
            lVar8 = FUN_100496019(*(undefined8 *)(param_1 + 0x3e0));
            if (lVar8 != 0) {
              local_cd0 = CONCAT71(local_cd0._1_7_,cVar4);
              do {
                if ((((*(int *)(lVar8 + 0xa0) != 0) && (*(char *)(lVar8 + 0xb0) == '\0')) &&
                    ((*(char *)(lVar8 + 0x80) == '\x06' || (*(char *)(lVar8 + 0x80) == '\0')))) &&
                   ((*(int *)(lVar8 + 0xa4) != 0 && (cVar3 = FUN_10058f971(lVar8), cVar3 == '\0'))))
                {
                  lVar9 = FUN_1004985e6(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x66b8),
                                        *(undefined4 *)(lVar8 + 0x18));
                  if (lVar9 == 0) {
                    lVar9 = FUN_100497d69(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x66b8),0);
                    if (lVar9 != 0) {
                      FUN_1004987ec(lVar9,*(undefined4 *)(lVar8 + 0x18));
                      goto LAB_1003d875a;
                    }
                    uVar11 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled();
                    if (cVar3 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x822;
                      local_46a = "destImageInfo != nullptr";
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_478,0x16);
                    }
                    local_cc8 = 0;
                    FUN_1001782e9();
                    iVar5 = -0x6c;
LAB_1003d892c:
                    uVar20 = 0;
                    goto LAB_1003d897d;
                  }
LAB_1003d875a:
                  *(undefined1 *)(lVar9 + 0x81) = *(undefined1 *)(lVar8 + 0x81);
                  *(undefined8 *)(lVar9 + 0x58) = *(undefined8 *)(lVar8 + 0x58);
                  *(undefined4 *)(lVar9 + 0x8c) = *(undefined4 *)(lVar8 + 0x8c);
                  *(undefined4 *)(lVar9 + 0xb4) = *(undefined4 *)(lVar8 + 0xb4);
                  uVar19 = *(undefined4 *)(lVar8 + 0xbc);
                  uVar1 = *(undefined4 *)(lVar8 + 0xc0);
                  uVar2 = *(undefined4 *)(lVar8 + 0xc4);
                  *(undefined4 *)(lVar9 + 0xb8) = *(undefined4 *)(lVar8 + 0xb8);
                  *(undefined4 *)(lVar9 + 0xbc) = uVar19;
                  *(undefined4 *)(lVar9 + 0xc0) = uVar1;
                  *(undefined4 *)(lVar9 + 0xc4) = uVar2;
                  local_cf0 = lVar9;
                  iVar5 = FUN_100497b7f();
                  if (iVar5 == -0x80) {
LAB_1003d8883:
                    local_cc8 = 0;
                    uVar20 = 0;
LAB_1003d8968:
                    *(undefined1 *)(local_cf0 + 0x83) = 1;
                    local_cb9 = '\x01';
                  }
                  else if (iVar5 == 0) {
                    iVar5 = FUN_1001de586(*(long *)(param_1 + 0x3e0) + 0x70,
                                          *(undefined4 *)(lVar8 + 0x88),
                                          *(long *)(*(long *)(param_1 + 0x10) + 0x66b8) + 0x70,
                                          local_cf0 + 0x88);
                    if (iVar5 == -0x80) goto LAB_1003d8883;
                    if (iVar5 != 0) {
                      uVar11 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled();
                      if (cVar4 != '\0') {
                        local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                        goto LAB_1003d930d;
                      }
                      goto LAB_1003d894d;
                    }
                    lVar9 = FUN_1004993ef(lVar8,4,0,1);
                    if (lVar9 == 0) goto LAB_1003d8a61;
                    iVar5 = FUN_1003da016(param_1,lVar9,local_cf0);
                    if (iVar5 == -0x80) goto LAB_1003d8883;
                    if (iVar5 != 0) {
                      uVar11 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled();
                      if (cVar4 != '\0') {
                        local_478 = 0x8220202;
                        local_474 = "Assertion failure";
                        local_46c = 0x400;
                        local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                      cVar4 = (char)local_cd0;
                      if (iVar5 != 0) {
                        local_cc8 = 0;
                        uVar20 = 0;
                        goto LAB_1003d8958;
                      }
                    }
LAB_1003d8a61:
                    lVar9 = FUN_1004968c5();
                    if (lVar9 == 0) {
                      iVar5 = 0;
                      local_cc8 = 0;
                      goto LAB_1003d892c;
                    }
                    local_cc8 = 0;
                    local_d08 = 0;
                    local_cd8 = 0;
                    local_ce8 = lVar18;
                    do {
                      uVar12 = *(uint *)(lVar9 + 0x10);
                      if (uVar12 != 4) {
                        if (uVar12 == 1) {
                          if (((cVar4 != '\0') &&
                              (local_ce0 = lVar9, iVar5 = FUN_1003da016(param_1,lVar9,local_cf0),
                              lVar9 = local_ce0, iVar5 != -0x80)) && (iVar5 != 0)) {
                            uVar11 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar4 != '\0') {
                              local_478 = 0x8220202;
                              local_474 = "Assertion failure";
                              local_46c = 0x400;
                              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                                  &local_478,0x12);
                            }
                            lVar9 = local_ce0;
                            cVar4 = (char)local_cd0;
                            if (iVar5 == -0x22) {
                              iVar5 = -0x22;
                              uVar20 = local_cd8;
                              goto LAB_1003d8968;
                            }
                          }
                        }
                        else if (uVar12 == 5 || uVar12 - 900 < 100) {
                          if ((899 < uVar12) && (*(int *)(lVar9 + 0x480) != 0)) {
LAB_1003d8b53:
                            uVar20 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x4570);
                            if (uVar20 != 0) {
                              puVar16 = (uint *)(*(long *)(param_1 + 0x10) + 0x4578);
                              do {
                                if (*puVar16 == uVar12) {
                                  local_ce0 = lVar9;
                                  if (local_cc8 != 0) {
LAB_1003d8dff:
                                    uVar20 = local_cd8;
                                    if ((uint)local_d08 <
                                        (uint)(*(int *)(local_ce0 + 0x3c) +
                                              *(int *)(local_ce0 + 0x38))) {
                                      uVar11 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar11);
                                      if (cVar4 != '\0') {
                                        local_478 = 0x8220202;
                                        local_474 = "Assertion failure";
                                        local_46c = 0x822;
                                        local_46a = 
                                        "sourceImageInstance->imageDataFileOffset + sourceImageInstance->imageDataLogicalSize <= thumbBufferSize"
                                        ;
                                        __os_log_error_impl(0x100000000,uVar11,0x10,
                                                            "%{public}s: (%{public}s)",&local_478,
                                                            0x16);
                                      }
                                      FUN_1001782e9(0);
                                      iVar5 = -0x27;
                                    }
                                    else {
                                      iVar5 = *(int *)(local_ce0 + 0x10);
                                      if (iVar5 == 5 || iVar5 - 900U < 100) {
                                        if (iVar5 == 5) {
                                          uVar11 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar11,0x10);
                                          if (cVar4 != '\0') {
                                            local_478 = 0x8220202;
                                            local_474 = "Assertion failure";
                                            local_46c = 0x822;
                                            local_46a = 
                                            "sourceImageInstance->formatID != kITImageFormat_SourceFaceThumb"
                                            ;
                                            __os_log_error_impl(0x100000000,uVar11,0x10,
                                                                "%{public}s: (%{public}s)",
                                                                &local_478,0x16);
                                          }
                                          FUN_1001782e9(0,0);
                                        }
                                        iVar5 = *(uint *)(param_1 + 0x40c) -
                                                *(uint *)(param_1 + 0x408);
                                        if (*(uint *)(param_1 + 0x40c) < *(uint *)(param_1 + 0x408))
                                        {
                                          iVar5 = 0;
                                        }
                                        local_cd8 = (ulong)((int)uVar20 + 1);
                                      }
                                      else {
                                        iVar5 = *(uint *)(param_1 + 0x404) -
                                                *(uint *)(param_1 + 0x400);
                                        if (*(uint *)(param_1 + 0x404) < *(uint *)(param_1 + 0x400))
                                        {
                                          iVar5 = 0;
                                        }
                                      }
                                      iVar7 = *(int *)(local_ce0 + 0x40);
                                      uVar12 = puVar16[0xf];
                                      if (uVar12 != 0) {
                                        uVar15 = (iVar7 + uVar12) - 1;
                                        iVar7 = uVar15 - uVar15 % uVar12;
                                      }
                                      if ((puVar16[5] == 0x706e6720) ||
                                         (iVar6 = 0, puVar16[5] == 0x6a706567)) {
                                        if (*(char *)((long)puVar16 + 0x32) != '\0') {
                                          local_cf8 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(local_cf8,0x10);
                                          if (cVar4 != '\0') {
                                            local_478 = 0x8220202;
                                            local_474 = "Assertion failure";
                                            local_46c = 0x822;
                                            local_46a = "formatDesc->formatInfo.longAlign == false";
                                            __os_log_error_impl(0x100000000,local_cf8,0x10,
                                                                "%{public}s: (%{public}s)",
                                                                &local_478,0x16);
                                          }
                                          FUN_1001782e9(0,0);
                                          uVar12 = puVar16[0xf];
                                        }
                                        iVar6 = iVar7;
                                        if (uVar12 != 0) {
                                          local_cf8 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(local_cf8,0x10);
                                          if (cVar4 != '\0') {
                                            local_478 = 0x8220202;
                                            local_474 = "Assertion failure";
                                            local_46c = 0x822;
                                            local_46a = 
                                            "formatDesc->formatInfo.alignFileOffset == 0";
                                            __os_log_error_impl(0x100000000,local_cf8,0x10,
                                                                "%{public}s: (%{public}s)",
                                                                &local_478,0x16);
                                          }
                                          FUN_1001782e9(0,0);
                                        }
                                      }
                                      iVar5 = FUN_1005906cb(local_cf0,puVar16,0,
                                                            *(undefined2 *)(local_ce0 + 0x47c),
                                                            local_cb8,
                                                            (ulong)*(uint *)(local_ce0 + 0x38) +
                                                            local_cc8,
                                                            *(undefined4 *)(local_ce0 + 0x3c),iVar7,
                                                            iVar6,local_ce0 + 0x18,iVar5,0);
                                      if (iVar5 == 0) {
                                        lVar9 = local_ce0;
                                        lVar18 = local_ce8;
                                        cVar4 = (char)local_cd0;
                                        goto LAB_1003d8fa2;
                                      }
                                      if (iVar5 != -0x80) {
                                        uVar11 = FUN_1001cc310();
                                        cVar4 = _os_log_type_enabled(uVar11);
                                        if (cVar4 != '\0') {
                                          local_478 = 0x8220202;
                                          local_474 = "Assertion failure";
                                          local_46c = 0x400;
                                          local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                                          puVar14 = &local_478;
                                          goto LAB_1003d9588;
                                        }
                                        goto LAB_1003d948f;
                                      }
                                    }
                                    uVar20 = local_cd8;
                                    lVar18 = local_ce8;
                                    cVar4 = (char)local_cd0;
                                    goto LAB_1003d8968;
                                  }
                                  iVar5 = FUN_10049980b(lVar9,&local_478,0);
                                  if (iVar5 == 0) {
                                    iVar5 = FUN_10017cc65(&local_478,0x64617461,0x201,&local_d00);
                                    if (iVar5 == 0) {
LAB_1003d8c18:
                                      iVar5 = FUN_10017ce92(local_d00,local_d10);
                                      if (iVar5 == -0x80) {
LAB_1003d8da4:
                                        local_cc8 = 0;
                                      }
                                      else {
                                        if (iVar5 != 0) {
                                          uVar11 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar11,0x10);
                                          if (cVar4 != '\0') {
                                            local_58 = 0x8220202;
                                            local_54 = "Assertion failure";
                                            local_4c = 0x400;
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                            __os_log_error_impl(0x100000000,uVar11,0x10,
                                                                "%{public}s: err == (%d)",&local_58,
                                                                0x12);
                                          }
                                          if (iVar5 != 0) goto LAB_1003d8da4;
                                        }
                                        local_d08 = (ulong)(local_d10[0] + (uint)(local_d10[0] == 0)
                                                           );
                                        local_cc8 = FUN_1001c63e1();
                                        if (local_cc8 == 0) {
                                          uVar11 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar11,0x10);
                                          if (cVar4 != '\0') {
                                            local_58 = 0x8220202;
                                            local_54 = "Assertion failure";
                                            local_4c = 0x822;
                                            local_4a = "thumbBuffer != nullptr";
                                            __os_log_error_impl(0x100000000,uVar11,0x10,
                                                                "%{public}s: (%{public}s)",&local_58
                                                                ,0x16);
                                          }
                                          FUN_1001782e9(0,0);
                                          iVar5 = -0x6c;
                                          goto LAB_1003d8da4;
                                        }
                                        iVar5 = FUN_10017d186(local_d00,local_cc8,local_d10[0],1,0);
                                        if ((iVar5 != -0x80) && (iVar5 != 0)) {
                                          uVar11 = FUN_1001cc310();
                                          cVar4 = _os_log_type_enabled(uVar11,0x10);
                                          if (cVar4 != '\0') {
                                            local_58 = 0x8220202;
                                            local_54 = "Assertion failure";
                                            local_4c = 0x400;
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                            __os_log_error_impl(0x100000000,uVar11,0x10,
                                                                "%{public}s: err == (%d)",&local_58,
                                                                0x12);
                                          }
                                        }
                                      }
                                      iVar7 = FUN_10017cdfb(local_d00);
                                      if ((iVar7 != -0x80) && (iVar7 != 0)) {
                                        local_cf8 = FUN_1001cc310();
                                        cVar4 = _os_log_type_enabled(local_cf8,0x10);
                                        if (cVar4 != '\0') {
                                          local_58 = 0x8220202;
                                          local_54 = "Assertion failure";
                                          local_4c = 0x400;
                                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
                                          __os_log_error_impl(0x100000000,local_cf8,0x10,
                                                              "%{public}s: err == (%d)",&local_58,
                                                              0x12);
                                        }
                                      }
                                    }
                                    else {
                                      if (iVar5 == -0x80) goto LAB_1003d940a;
                                      uVar11 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar11,0x10);
                                      if (cVar4 != '\0') {
                                        local_58 = 0x8220202;
                                        local_54 = "Assertion failure";
                                        local_4c = 0x400;
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                        __os_log_error_impl(0x100000000,uVar11,0x10,
                                                            "%{public}s: err == (%d)",&local_58,0x12
                                                           );
                                      }
                                      if (iVar5 == 0) goto LAB_1003d8c18;
                                      local_cc8 = 0;
                                    }
                                    if (iVar5 == 0) goto LAB_1003d8dff;
                                    if (iVar5 != -0x80) {
                                      uVar11 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar11);
                                      if (cVar4 != '\0') {
                                        local_58 = 0x8220202;
                                        local_54 = "Assertion failure";
                                        local_4c = 0x400;
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                        puVar14 = &local_58;
LAB_1003d9588:
                                        __os_log_error_impl(0x100000000,uVar11,0x10,
                                                            "%{public}s: err == (%d)",puVar14,0x12);
                                      }
                                    }
                                  }
                                  else {
                                    if (iVar5 != -0x80) {
                                      uVar11 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar11);
                                      if (cVar4 != '\0') {
                                        local_58 = 0x8220202;
                                        local_54 = "Assertion failure";
                                        local_4c = 0x400;
                                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
                                        __os_log_error_impl(0x100000000,uVar11,0x10,
                                                            "%{public}s: err == (%d)",&local_58,0x12
                                                           );
                                      }
                                    }
LAB_1003d940a:
                                    local_cc8 = 0;
                                  }
LAB_1003d948f:
                                  uVar20 = local_cd8;
                                  lVar18 = local_ce8;
                                  cVar4 = (char)local_cd0;
                                  goto LAB_1003d8958;
                                }
                                puVar16 = puVar16 + 0x1e;
                                uVar20 = uVar20 - 1;
                              } while (uVar20 != 0);
                            }
                            lVar18 = local_ce8;
                            cVar4 = (char)local_cd0;
                          }
                        }
                        else if (899 < uVar12) goto LAB_1003d8b53;
                      }
LAB_1003d8fa2:
                      lVar9 = FUN_100496985(lVar9);
                      iVar5 = 0;
                      uVar20 = local_cd8;
                    } while (lVar9 != 0);
                  }
                  else {
                    uVar11 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled();
                    if (cVar4 != '\0') {
                      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
LAB_1003d930d:
                      local_46c = 0x400;
                      local_474 = "Assertion failure";
                      local_478 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                          &local_478,0x12);
                    }
LAB_1003d894d:
                    uVar20 = 0;
                    local_cc8 = 0;
                    cVar4 = (char)local_cd0;
LAB_1003d8958:
                    if (iVar5 != 0) goto LAB_1003d8968;
                    iVar5 = 0;
                  }
LAB_1003d897d:
                  if ((*(byte *)(lVar8 + 0xa0) & 2) != 0) {
                    *(int *)(param_1 + 0x400) = *(int *)(param_1 + 0x400) + 1;
                  }
                  if ((int)uVar20 != 0) {
                    uVar17 = (ulong)*(uint *)(*(long *)(param_1 + 0x10) + 0x4570);
                    if (uVar17 != 0) {
                      lVar9 = 0;
                      uVar13 = 0;
                      do {
                        uVar12 = ((int)uVar13 + 1) -
                                 (uint)(*(char *)(*(long *)(param_1 + 0x10) + 0x45ab + lVar9) ==
                                       '\0');
                        uVar13 = (ulong)uVar12;
                        lVar9 = lVar9 + 0x78;
                      } while (uVar17 * 0x78 - lVar9 != 0);
                      if (uVar12 != 0) {
                        *(int *)(param_1 + 0x408) =
                             *(int *)(param_1 + 0x408) + (int)((uVar20 & 0xffffffff) / uVar13);
                        goto LAB_1003d89fb;
                      }
                    }
                    uVar11 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar4 != '\0') {
                      local_478 = 0x8220202;
                      local_474 = "Assertion failure";
                      local_46c = 0x822;
                      local_46a = "numFaceAlbumSpecifications != 0";
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_478,0x16);
                    }
                    FUN_1001782e9(0,0);
                    cVar4 = (char)local_cd0;
                  }
LAB_1003d89fb:
                  if (local_cc8 != 0) {
                    FUN_1001c64c1();
                  }
                  if (iVar5 == -0x27) {
                    *(undefined1 *)(lVar8 + 0x83) = 1;
                  }
                  else if (iVar5 != 0) {
                    if (iVar5 == -0x80) goto LAB_1003d852c;
                    iVar7 = 0x457;
                    if (iVar5 != -0x22) {
                      iVar7 = iVar5;
                    }
                    iVar5 = iVar7;
                    uVar11 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar4 == '\0') goto LAB_1003d852c;
                    local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                    goto LAB_1003d9dc7;
                  }
                  iVar5 = *(int *)(param_1 + 0x3f8) + 1;
                  *(int *)(param_1 + 0x3f8) = iVar5;
                  iVar5 = FUN_1001ceb24(param_1 + 0x410,0x636f7079,iVar5,
                                        *(undefined4 *)(param_1 + 0x3fc));
                  if (iVar5 != 0) {
                    if (iVar5 != -0x80) {
                      uVar11 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar4 != '\0') {
                        local_478 = 0x8220202;
                        local_474 = "Assertion failure";
                        local_46c = 0x400;
                        local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_478,0x12);
                      }
                    }
                    goto LAB_1003d95a3;
                  }
                }
                lVar8 = FUN_1004960d0(lVar8);
              } while (lVar8 != 0);
            }
          }
          iVar5 = 0;
LAB_1003d95a3:
          lVar8 = FUN_100496392(*(undefined8 *)(lVar18 + 0x66b8));
          while (lVar8 != 0) {
            lVar9 = FUN_100496449(lVar8);
            FUN_100496508(lVar8);
            lVar8 = lVar9;
          }
          local_cf0._4_4_ = (undefined4)((ulong)local_cf0 >> 0x20);
          local_cf0 = CONCAT44(local_cf0._4_4_,iVar5);
          puVar16 = *(uint **)(param_1 + 1000);
          uVar20 = (ulong)*puVar16;
          local_ce8 = lVar18;
          if (*puVar16 != 0) {
            uVar17 = 0;
            do {
              lVar18 = *(long *)(puVar16 + uVar17 * 2 + 2);
              if (((lVar18 != 0) &&
                  ((*(int *)(lVar18 + 0xbc) != 0 || (*(char *)(lVar18 + 0x11) == '\x01')))) &&
                 (*(int *)(lVar18 + 0x50) != 0)) {
                lVar8 = FUN_10049a4a2(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x66b8),0,0);
                if (lVar8 == 0) {
                  uVar11 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar4 != '\0') {
                    local_478 = 0x8220202;
                    local_474 = "Assertion failure";
                    local_46c = 0x822;
                    local_46a = "destAlbum != nullptr";
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                        &local_478,0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar7 = -0x6c;
                  iVar5 = (int)local_cf0;
                  if ((int)local_cf0 == 0) {
                    iVar5 = -0x6c;
                  }
                }
                else {
                  *(undefined1 *)(lVar8 + 0x11) = *(undefined1 *)(lVar18 + 0x11);
                  *(ulong *)(lVar8 + 0x20) = (ulong)*(uint *)(lVar18 + 0x18);
                  *(undefined4 *)(lVar8 + 0x6c) = *(undefined4 *)(lVar18 + 0x6c);
                  *(undefined1 *)(lVar8 + 0x70) = *(undefined1 *)(lVar18 + 0x70);
                  *(undefined8 *)(lVar8 + 0x74) = *(undefined8 *)(lVar18 + 0x74);
                  uVar19 = *(undefined4 *)(lVar18 + 0x84);
                  uVar1 = *(undefined4 *)(lVar18 + 0x88);
                  uVar2 = *(undefined4 *)(lVar18 + 0x8c);
                  *(undefined4 *)(lVar8 + 0x80) = *(undefined4 *)(lVar18 + 0x80);
                  *(undefined4 *)(lVar8 + 0x84) = uVar19;
                  *(undefined4 *)(lVar8 + 0x88) = uVar1;
                  *(undefined4 *)(lVar8 + 0x8c) = uVar2;
                  *(undefined4 *)(lVar8 + 0x90) = *(undefined4 *)(lVar18 + 0x90);
                  uVar19 = 0;
                  if ((*(int *)(lVar18 + 0x94) != 0) &&
                     (lVar9 = FUN_1004985e6(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x66b8)),
                     uVar19 = 0, lVar9 != 0)) {
                    uVar19 = *(undefined4 *)(lVar9 + 0x18);
                  }
                  *(undefined4 *)(lVar8 + 0x94) = uVar19;
                  *(undefined2 *)(lVar8 + 0xa8) = *(undefined2 *)(lVar18 + 0xa8);
                  if ((*(long *)(lVar8 + 0x80) != 0) &&
                     (lVar9 = FUN_10048b5ec(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30)),
                     lVar9 == 0)) {
                    uVar11 = FUN_1004e0c3f(*(undefined8 *)(param_1 + 0x10),1);
                    lVar9 = FUN_10048b5ec(uVar11,*(undefined8 *)(lVar8 + 0x80));
                    *(undefined8 *)(lVar8 + 0x80) = 0;
                    if (lVar9 != 0) {
                      FUN_1004870ae(lVar9,&local_478);
                      lVar9 = FUN_10048b91a(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                                            &local_478,1);
                      if (lVar9 != 0) {
                        *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(lVar9 + 0x60);
                      }
                    }
                  }
                  iVar5 = *(int *)(*(long *)(param_1 + 0x3e0) + 0x13c0);
                  if (iVar5 == 7) {
                    if (*(char *)(lVar18 + 0x11) != '\x04') goto LAB_1003d97a8;
LAB_1003d971d:
                    FUN_1001c34b7(0x10d30003,local_cb8);
                    FUN_1001e5b77(local_cb8,&local_478,0x2fe);
                    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x66b8);
                    sVar10 = _strlen((char *)&local_478);
                    local_cc8 = lVar8;
                    iVar7 = FUN_1001ddddc(lVar9 + 0x70,&local_478,sVar10 & 0xffffffff,lVar8 + 0x68);
                    lVar8 = local_cc8;
                    if (iVar7 != -0x80) {
                      if (iVar7 == 0) {
LAB_1003d97de:
                        iVar7 = FUN_1001de586(*(long *)(param_1 + 0x3e0) + 0xc0,
                                              *(undefined4 *)(lVar18 + 0x7c),
                                              *(long *)(*(long *)(param_1 + 0x10) + 0x66b8) + 0xc0,
                                              lVar8 + 0x7c);
                        if (iVar7 != -0x80) {
                          if (iVar7 == 0) {
                            iVar7 = 0;
                            if ((ulong)*(uint *)(lVar18 + 0x50) != 0) {
                              lVar9 = FUN_1001c6429((ulong)*(uint *)(lVar18 + 0x50) << 4);
                              *(long *)(lVar8 + 0x58) = lVar9;
                              if (lVar9 == 0) {
                                uVar11 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar11);
                                if (cVar4 != '\0') {
                                  local_478 = 0x8220202;
                                  local_474 = "Assertion failure";
                                  local_46c = 0x822;
                                  local_46a = "destAlbum->imageList != nullptr";
                                  __os_log_error_impl(0x100000000,uVar11,0x10,
                                                      "%{public}s: (%{public}s)",&local_478,0x16);
                                }
                                FUN_1001782e9(0);
                                iVar7 = -0x6c;
                              }
                              else if (*(int *)(lVar18 + 0x50) != 0) {
                                lVar9 = 8;
                                uVar20 = 0;
                                local_cc8 = lVar8;
                                do {
                                  if ((((*(char *)(*(long *)(lVar18 + 0x58) + lVar9) == '\0') &&
                                       (lVar8 = *(long *)(*(long *)(lVar18 + 0x58) + -8 + lVar9),
                                       lVar8 != 0)) && (*(char *)(lVar8 + 0xb0) == '\0')) &&
                                     (((*(char *)(lVar8 + 0x80) == '\x06' ||
                                       (*(char *)(lVar8 + 0x80) == '\0')) &&
                                      ((*(int *)(lVar8 + 0xa4) != 0 &&
                                       ((lVar8 = FUN_1004985e6(*(undefined8 *)
                                                                (*(long *)(param_1 + 0x10) + 0x66b8)
                                                              ), lVar8 != 0 &&
                                        (iVar5 = FUN_10049b80b(local_cc8,
                                                               *(undefined4 *)(local_cc8 + 0x50),
                                                               lVar8), iVar5 != -0x80)))))))) {
                                    if (iVar5 != 0) {
                                      local_cd8 = CONCAT44(local_cd8._4_4_,iVar5);
                                      local_cd0 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(local_cd0);
                                      if (cVar4 != '\0') {
                                        local_478 = 0x8220202;
                                        local_474 = "Assertion failure";
                                        local_46c = 0x400;
                                        local_46a = (char *)CONCAT44(local_46a._4_4_,(int)local_cd8)
                                        ;
                                        __os_log_error_impl(0x100000000,local_cd0,0x10,
                                                            "%{public}s: err == (%d)",&local_478,
                                                            0x12);
                                      }
                                      if ((int)local_cd8 != 0) goto LAB_1003d986d;
                                    }
                                    *(int *)(local_cc8 + 0x50) = *(int *)(local_cc8 + 0x50) + 1;
                                  }
LAB_1003d986d:
                                  uVar20 = uVar20 + 1;
                                  lVar9 = lVar9 + 0x10;
                                } while (uVar20 < *(uint *)(lVar18 + 0x50));
                                iVar7 = 0;
                                lVar8 = local_cc8;
                              }
                            }
                          }
                          else {
                            uVar11 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar11);
                            if (cVar4 != '\0') {
                              local_46a = (char *)CONCAT44(local_46a._4_4_,iVar7);
                              goto LAB_1003d9aa3;
                            }
                          }
                        }
                      }
                      else {
                        uVar11 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar11);
                        lVar8 = local_cc8;
                        if (cVar4 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x400;
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
                          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                              &local_58,0x12);
                          lVar8 = local_cc8;
                        }
                      }
                    }
                  }
                  else {
                    if ((iVar5 == 1) && (*(int *)(lVar18 + 0x14) == 2)) goto LAB_1003d971d;
LAB_1003d97a8:
                    iVar7 = FUN_1001de586(*(long *)(param_1 + 0x3e0) + 0x70,
                                          *(undefined4 *)(lVar18 + 0x68),
                                          *(long *)(*(long *)(param_1 + 0x10) + 0x66b8) + 0x70,
                                          lVar8 + 0x68);
                    if (iVar7 != -0x80) {
                      if (iVar7 == 0) goto LAB_1003d97de;
                      uVar11 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar11);
                      if (cVar4 == '\0') goto LAB_1003d9adb;
                      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar7);
LAB_1003d9aa3:
                      local_46c = 0x400;
                      local_474 = "Assertion failure";
                      local_478 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                          &local_478,0x12);
                    }
                  }
LAB_1003d9adb:
                  if (*(int *)(lVar8 + 0x50) == 0) {
                    FUN_100496508(lVar8);
                  }
                  iVar5 = (int)local_cf0;
                  if ((int)local_cf0 == 0) {
                    iVar5 = iVar7;
                  }
                  local_cf0 = CONCAT44(local_cf0._4_4_,iVar5);
                  if (iVar7 == 0) {
                    puVar16 = *(uint **)(param_1 + 1000);
                    uVar20 = (ulong)*puVar16;
                    goto LAB_1003d9b0f;
                  }
                  lVar18 = local_ce8;
                  if (iVar7 == -0x80) goto LAB_1003d852c;
                }
                lVar18 = local_ce8;
                uVar11 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar11,0x10);
                if (cVar4 == '\0') goto LAB_1003d852c;
                local_46a = (char *)CONCAT44(local_46a._4_4_,iVar7);
                goto LAB_1003d9dc7;
              }
LAB_1003d9b0f:
              uVar17 = uVar17 + 1;
            } while (uVar17 < uVar20);
          }
          lVar18 = local_ce8;
          iVar5 = (int)local_cf0;
          if (*(char *)(local_ce8 + 0x340) != '\0') {
            uVar11 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar11,0x10);
            if (cVar4 != '\0') {
              local_478 = 0x8220202;
              local_474 = "Assertion failure";
              local_46c = 0x822;
              local_46a = "handlerData->deviceInfo.supportsPhotoMoments == false";
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_478,0x16
                                 );
            }
            FUN_1001782e9(0,0);
          }
          if (*(char *)(*(long *)(param_1 + 0x20) + 0x3b0) != '\0') {
            FUN_1003d1639(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x66b8),0,
                          *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x374),&local_478);
          }
        }
        else {
          uVar11 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar11,0x10);
          if (cVar4 == '\0') goto LAB_1003d852c;
          local_46a = (char *)CONCAT44(local_46a._4_4_,iVar5);
LAB_1003d9dc7:
          local_46c = 0x400;
          local_474 = "Assertion failure";
          local_478 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        goto LAB_1003d852c;
      }
      uVar11 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar11,0x10);
      if (cVar4 != '\0') {
        local_46a = "context->albumPriorityTable != nullptr";
        goto LAB_1003d84f8;
      }
    }
  }
  FUN_1001782e9(0,0);
  iVar5 = -0x32;
LAB_1003d852c:
  if (((local_cb9 == '\x01') &&
      (iVar7 = FUN_100591f64(*(undefined8 *)(lVar18 + 0x66b8),local_898,3,0x64656c70,param_1 + 0x410
                            ), iVar7 != -0x80)) && (iVar7 != 0)) {
    uVar11 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar11,0x10);
    if (cVar4 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x400;
      local_46a = (char *)CONCAT44(local_46a._4_4_,iVar7);
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_478,0x12);
    }
  }
  FUN_100593331(*(undefined8 *)(param_1 + 0x3e0));
  FUN_100496791(*(undefined8 *)(lVar18 + 0x66b8));
  FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
  if (*(long *)(lVar18 + 0x66b8) != 0) {
    FUN_1004f348c(lVar18);
    cVar4 = (*(int *)(*(long *)(lVar18 + 0x66b8) + 8) == 0) + '\x01';
    if (*(char *)(lVar18 + 0x6add) != cVar4) {
      *(char *)(lVar18 + 0x6add) = cVar4;
      *(undefined1 *)(param_1 + 0x4d8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    *(int *)(param_1 + 0x30) = iVar5;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(bool *)(*(long *)(param_1 + 0x28) + 0x18) = *(int *)(param_1 + 0x3f8) != 0;
  }
  FUN_1001e9809(param_1 + 0x4c8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

