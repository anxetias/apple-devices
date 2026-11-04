// name: FUN_1003ee7b4
// address: 1003ee7b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1003ee7b4(long param_1,int *param_2,long param_3,uint param_4,long param_5,undefined8 param_6,
             void *param_7,undefined4 *param_8)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  int *piVar12;
  void *pvVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_c78 [8];
  undefined4 local_c70;
  undefined1 local_c28 [32];
  CC_LONG local_c08;
  undefined1 local_bc0 [72];
  undefined1 local_b78 [16];
  undefined1 local_b68 [16];
  CC_LONG local_b58;
  ulong local_b48;
  CC_LONG local_b40 [2];
  CC_LONG local_b38 [2];
  long local_b30;
  ulong local_b28;
  CC_LONG local_b20 [2];
  void *local_b18;
  ulong local_b10;
  long local_b08;
  uint local_afc;
  undefined4 local_af8;
  char *pcStack_af4;
  undefined2 uStack_aec;
  undefined2 uStack_aea;
  undefined2 uStack_ae8;
  undefined1 auStack_ae6 [14];
  undefined1 local_ad8 [16];
  undefined1 local_ac8 [16];
  undefined8 local_ab8;
  int local_6d8;
  int iStack_6d4;
  int iStack_6d0;
  undefined2 uStack_6cc;
  undefined2 uStack_6ca;
  undefined2 uStack_6c8;
  undefined4 uStack_6c6;
  undefined1 local_2b8 [512];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 local_88;
  char *pcStack_84;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  unkbyte10 Stack_72;
  undefined4 local_68;
  int local_58 [3];
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b20[0] = 0;
  local_b20[1] = 0;
  local_b38[0] = 0;
  local_b38[1] = 0;
  local_b40 = (CC_LONG  [2])param_6;
  local_b30 = param_5;
  local_b08 = param_1;
  local_afc = param_4;
  if (param_7 != (void *)0x0) {
    FUN_1001c62d9(param_7,0xf4);
  }
  if (param_8 == (undefined4 *)0x0) {
    uVar3 = FUN_10017d477(param_2,local_c78,local_2b8);
    if (uVar3 != 0) goto LAB_1003ee870;
  }
  else {
    *param_8 = 0;
    uVar3 = FUN_10017d477(param_2,local_c78,local_2b8);
    if (uVar3 != 0) {
LAB_1003ee870:
      puVar11 = (undefined1 *)0xffffff80;
      if (uVar3 != 0xffffff80) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_6d8 = 0x8220202;
          iStack_6d4 = 0x7a0a90;
          iStack_6d0 = 1;
          uStack_6cc = 0x400;
          uStack_6ca = (undefined2)uVar3;
          uStack_6c8 = (undefined2)(uVar3 >> 0x10);
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_6d8,0x12);
        }
        puVar11 = (undefined1 *)(ulong)uVar3;
      }
      goto LAB_1003ef2f4;
    }
    *param_8 = local_c70;
  }
  if (*param_2 == 0x41464350) {
    uVar3 = FUN_100180bd2(param_2,local_b20,local_b38,0);
    puVar11 = (undefined1 *)(ulong)uVar3;
    if (uVar3 != 0xffffff80) {
      if (uVar3 == 0) {
        uVar3 = FUN_1001601a5(local_bc0,local_b20,local_b38);
        puVar11 = (undefined1 *)(ulong)uVar3;
        if (uVar3 != 0xffffff80) {
          if (uVar3 == 0) goto LAB_1003ee989;
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            uStack_6ca = (undefined2)uVar3;
            uStack_6c8 = (undefined2)(uVar3 >> 0x10);
            goto LAB_1003eeb45;
          }
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          uStack_6ca = (undefined2)uVar3;
          uStack_6c8 = (undefined2)(uVar3 >> 0x10);
LAB_1003eeb45:
          uStack_6cc = 0x400;
          iStack_6d0 = 1;
          iStack_6d4 = 0x7a0a90;
          local_6d8 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_6d8,0x12);
        }
      }
    }
  }
  else {
    uVar3 = FUN_10015ffe7(param_2,local_bc0,0x20000,4);
    puVar11 = (undefined1 *)(ulong)uVar3;
    if (uVar3 != 0xffffff80) {
      if (uVar3 == 0) {
LAB_1003ee989:
        if ((local_afc & 0x38) != 0) {
          FUN_1001e26e1(".p7b",local_2b8);
          iVar4 = FUN_10017d5ba(param_2,&local_6d8);
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_af8 = 0x8220202;
              pcStack_af4 = "Assertion failure";
              uStack_aec = 0x400;
              uStack_aea = (undefined2)iVar4;
              uStack_ae8 = (undefined2)((uint)iVar4 >> 0x10);
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_af8,0x12);
            }
          }
          iVar4 = FUN_10017ecc9(&local_6d8,local_2b8,&local_af8,0);
          if (iVar4 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_b78._8_8_;
            local_b78 = auVar15 << 0x40;
            local_58[0] = 0;
            local_58[1] = 0;
            local_b10 = 0;
            iVar4 = FUN_100180bd2(&local_af8,local_b78,local_58,0);
            if (iVar4 == 0) {
              iVar4 = FUN_100160255(local_bc0,&local_b10);
              if (iVar4 == -0x80) {
LAB_1003eeee7:
                FUN_100160772(local_bc0,local_b10);
              }
              else {
                if (iVar4 != 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    uStack_7a = (undefined2)iVar4;
                    uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
LAB_1003eeea6:
                    uStack_7c = 0x400;
                    pcStack_84 = "Assertion failure";
                    local_88 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_88,
                                        0x12);
                  }
                  goto LAB_1003eeee7;
                }
                iVar4 = FUN_100160772(local_bc0,0);
                if (iVar4 == -0x80) goto LAB_1003eeee7;
                if (iVar4 != 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    uStack_7a = (undefined2)iVar4;
                    uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
                    goto LAB_1003eeea6;
                  }
                  goto LAB_1003eeee7;
                }
                iVar4 = FUN_100160c3f(local_bc0,&local_b48);
                if (iVar4 == -0x80) goto LAB_1003eeee7;
                if (iVar4 != 0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    uStack_7a = (undefined2)iVar4;
                    uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
                    goto LAB_1003eeea6;
                  }
                  goto LAB_1003eeee7;
                }
                local_b18 = (void *)FUN_1001c63e1(0x3e800);
                if (local_b18 == (void *)0x0) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_88 = 0x8220202;
                    pcStack_84 = "Assertion failure";
                    uStack_7c = 0x822;
                    uStack_7a = 0x2c09;
                    uStack_78 = 0x7a;
                    uStack_76 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  iVar4 = -0x6c;
                  goto LAB_1003eeee7;
                }
                iVar4 = _CC_SHA1_Init((CC_SHA1_CTX *)local_c28);
                if (iVar4 == 1) {
                  if (local_b48 != 0) {
                    uVar10 = local_b48;
                    do {
                      local_b28 = 0x3e800;
                      if (uVar10 < 0x3e800) {
                        local_b28 = uVar10;
                      }
                      iVar4 = FUN_100160380(local_bc0,&local_b28,local_b18);
                      if (iVar4 != 0) {
                        if (iVar4 == -0x80) goto LAB_1003ef6b7;
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar1 == '\0') goto LAB_1003ef6b7;
                        uStack_7a = (undefined2)iVar4;
                        uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
                        goto LAB_1003ef602;
                      }
                      iVar4 = _CC_SHA1_Update((CC_SHA1_CTX *)local_c28,local_b18,(CC_LONG)local_b28)
                      ;
                      if (iVar4 != 1) {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar1 != '\0') {
                          local_88 = 0x8220202;
                          pcStack_84 = "Assertion failure";
                          uStack_7c = 0x822;
                          uStack_7a = 0xbfc9;
                          uStack_78 = 0x7b;
                          uStack_76 = 1;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_88,0x16);
                        }
                        FUN_1001782e9(0,0);
                        goto LAB_1003ef6b1;
                      }
                      uVar10 = uVar10 - local_b28;
                    } while (uVar10 != 0);
                  }
                  iVar4 = _CC_SHA1_Final(local_b8,(CC_SHA1_CTX *)local_c28);
                  if (iVar4 != 1) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 != '\0') {
                      local_88 = 0x8220202;
                      pcStack_84 = "Assertion failure";
                      uStack_7c = 0x822;
                      uStack_7a = 0xbfc9;
                      uStack_78 = 0x7b;
                      uStack_76 = 1;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_88,0x16);
                    }
                    FUN_1001782e9(0,0);
                    goto LAB_1003ef6b1;
                  }
                  iVar4 = FUN_1000bca30(0,1,local_b78._0_8_,local_58[0],local_b8,0x14,0,0);
                  if ((iVar4 != -0x80) && (iVar4 != 0)) {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 != '\0') {
                      uStack_7a = (undefined2)iVar4;
                      uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
LAB_1003ef602:
                      uStack_7c = 0x400;
                      pcStack_84 = "Assertion failure";
                      local_88 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_88
                                          ,0x12);
                    }
                  }
                }
                else {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_88 = 0x8220202;
                    pcStack_84 = "Assertion failure";
                    uStack_7c = 0x822;
                    uStack_7a = 0xbfc9;
                    uStack_78 = 0x7b;
                    uStack_76 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_88,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
LAB_1003ef6b1:
                  iVar4 = 0x463;
                }
LAB_1003ef6b7:
                FUN_100160772(local_bc0,local_b10);
                FUN_1001c64c1(local_b18);
              }
              if (local_b78._0_8_ != 0) {
                FUN_1001c64c1();
              }
            }
            else {
              if (iVar4 == -0x80) goto LAB_1003eef22;
              uVar6 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar6,0x10);
              if (cVar1 != '\0') {
                local_88 = 0x8220202;
                pcStack_84 = "Assertion failure";
                uStack_7c = 0x400;
                uStack_7a = (undefined2)iVar4;
                uStack_78 = (undefined2)((uint)iVar4 >> 0x10);
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_88,0x12)
                ;
              }
            }
            if (iVar4 == 0) {
              local_afc = local_afc & 0xffffffc7;
            }
          }
        }
LAB_1003eef22:
        local_c28._16_16_ = (undefined1  [16])0x0;
        local_c28._0_16_ = (undefined1  [16])0x0;
        local_c08 = 0x3f800000;
        uStack_78 = 0;
        uStack_76 = 0;
        Stack_72 = SUB1610((undefined1  [16])0x0,6);
        local_88 = 0;
        pcStack_84 = (char *)0x0;
        uStack_7c = 0;
        uStack_7a = 0;
        local_68 = 0x3f800000;
        local_a8 = (undefined1  [16])0x0;
        local_b8 = (undefined1  [16])0x0;
        local_98 = 0x3f800000;
        local_b68 = (undefined1  [16])0x0;
        local_b78 = (undefined1  [16])0x0;
        local_b58 = 0x3f800000;
        local_ac8 = (undefined1  [16])0x0;
        local_ad8 = (undefined1  [16])0x0;
        uStack_ae8 = 0;
        auStack_ae6 = SUB1614((undefined1  [16])0x0,2);
        local_af8 = 0;
        pcStack_af4 = (char *)0x0;
        uStack_aec = 0;
        uStack_aea = 0;
        local_ab8 = 0;
        if (param_7 != (void *)0x0) {
          FUN_1001c62d9(param_7,0xf4);
        }
        if (local_b08 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            pcVar7 = "trackData != nullptr";
LAB_1003ef0ad:
            iStack_6d0 = 1;
            iStack_6d4 = 0x7a0a90;
            uStack_6cc = 0x822;
            local_6d8 = 0x8220202;
            uStack_6ca = SUB82(pcVar7,0);
            uStack_6c8 = (undefined2)((ulong)pcVar7 >> 0x10);
            uStack_6c6 = (undefined4)((ulong)pcVar7 >> 0x20);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16);
          }
LAB_1003ef2a1:
          puVar11 = (undefined1 *)0xffffffce;
          FUN_1001782e9(0,0);
        }
        else {
          if (*(int *)(local_b08 + 0x9c) != 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              pcVar7 = "trackData->numTracks == 0";
              goto LAB_1003ef0ad;
            }
            goto LAB_1003ef2a1;
          }
          lVar8 = FUN_100315ede();
          if (lVar8 != 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              pcVar7 = "GetFirstPlaylist(trackData) == nullptr";
              goto LAB_1003ef0ad;
            }
            goto LAB_1003ef2a1;
          }
          if (param_3 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              pcVar7 = "deviceName != nullptr";
              goto LAB_1003ef0ad;
            }
            goto LAB_1003ef2a1;
          }
          if (local_b30 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              pcVar7 = "handlerProc != nullptr";
              goto LAB_1003ef0ad;
            }
            goto LAB_1003ef2a1;
          }
          lVar8 = FUN_1001c6429(0x100170);
          if (lVar8 == 0) {
            uVar6 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar6,0x10);
            if (cVar1 != '\0') {
              local_6d8 = 0x8220202;
              iStack_6d4 = 0x7a0a90;
              iStack_6d0 = 1;
              uStack_6cc = 0x822;
              uStack_6ca = 0x1d5e;
              uStack_6c8 = 0x7a;
              uStack_6c6 = 1;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_6d8,0x16)
              ;
            }
            puVar11 = (undefined1 *)0xffffff94;
            FUN_1001782e9(0,0);
          }
          else {
            *(long *)(lVar8 + 0x100008) = local_b08;
            *(undefined1 **)(lVar8 + 0x100148) = local_b8;
            *(undefined1 **)(lVar8 + 0x100150) = local_c28;
            *(undefined4 **)(lVar8 + 0x100158) = &local_88;
            *(long *)(lVar8 + 0x100010) = param_3;
            *(uint *)(lVar8 + 0x100018) = local_afc;
            *(long *)(lVar8 + 0x100020) = local_b30;
            *(CC_LONG (*) [2])(lVar8 + 0x100028) = local_b40;
            *(undefined1 **)(lVar8 + 0x100000) = local_bc0;
            *(undefined1 **)(lVar8 + 0x100160) = local_b78;
            uVar3 = FUN_100160c3f(local_bc0,&local_b10);
            puVar11 = (undefined1 *)(ulong)uVar3;
            if (uVar3 != 0xffffff80) {
              if (uVar3 == 0) {
                FUN_100319a94(local_b08,4,0);
                pvVar13 = (void *)(lVar8 + 0x100030);
                local_6d8 = 0xf4;
                iStack_6d4 = 0;
                uVar3 = FUN_100160380(*(undefined8 *)(lVar8 + 0x100000),&local_6d8,pvVar13);
                puVar11 = (undefined1 *)(ulong)uVar3;
                if (uVar3 != 0xffffff80) {
                  if (uVar3 == 0) {
                    uVar2 = FUN_1003f0431(pvVar13);
                    *(undefined1 *)(lVar8 + 0x100126) = uVar2;
                    puVar11 = &DAT_ffffff30;
                    if (*(int *)(lVar8 + 0x100030) == 0x6d686264) {
                      *(undefined1 *)(lVar8 + 0x100127) = 1;
                      FUN_1003e9ee7(pvVar13);
                      if (*(int *)(lVar8 + 0x100030) == 0x6462686d) goto LAB_1003ef47c;
                      uVar6 = FUN_1001cc310();
                      cVar1 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar1 != '\0') {
                        pcVar7 = "context->fileHeader.magic == kDDBFileHeaderMagic";
                        goto LAB_1003efb84;
                      }
                      goto LAB_1003efba9;
                    }
                    if (*(int *)(lVar8 + 0x100030) == 0x6462686d) {
                      *(undefined1 *)(lVar8 + 0x100127) = 0;
LAB_1003ef47c:
                      if (local_b10 == *(uint *)(lVar8 + 0x100038)) {
                        if (*(int *)(lVar8 + 0x100044) == 0) {
                          uVar6 = FUN_1001cc310();
                          cVar1 = _os_log_type_enabled(uVar6,0x10);
                          if (cVar1 != '\0') {
                            pcVar7 = "context->fileHeader.numSections != 0";
LAB_1003efb84:
                            uStack_6cc = 0x822;
                            iStack_6d0 = 1;
                            iStack_6d4 = 0x7a0a90;
                            local_6d8 = 0x8220202;
                            uStack_6ca = SUB82(pcVar7,0);
                            uStack_6c8 = (undefined2)((ulong)pcVar7 >> 0x10);
                            uStack_6c6 = (undefined4)((ulong)pcVar7 >> 0x20);
                            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                &local_6d8,0x16);
                          }
LAB_1003efba9:
                          FUN_1001782e9(0,0);
                        }
                        else {
                          uVar3 = *(uint *)(lVar8 + 0x10003c);
                          if (*(char *)(lVar8 + 0x1000d8) == '\0') {
                            if (1 < uVar3) {
                              uVar6 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar1 != '\0') {
                                pcVar7 = 
                                "context->fileHeader.majorVersion <= kCurrentDDBMajorVersion";
                                goto LAB_1003efb84;
                              }
                              goto LAB_1003efba9;
                            }
                            if (uVar3 == 1) goto LAB_1003ef6e9;
LAB_1003ef6f4:
                            *(byte *)(local_b08 + 0x1bb4) = *(byte *)(local_b08 + 0x1bb4) | 8;
                          }
                          else {
                            if (2 < uVar3) {
                              uVar6 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar1 != '\0') {
                                pcVar7 = 
                                "context->fileHeader.majorVersion <= kCurrentCompressedDDBMajorVersion"
                                ;
                                goto LAB_1003efb84;
                              }
                              goto LAB_1003efba9;
                            }
                            if (uVar3 != 1) {
                              if (uVar3 != 2) goto LAB_1003ef6f4;
                              *(undefined4 *)(lVar8 + 0x10003c) = 1;
                            }
LAB_1003ef6e9:
                            if (*(int *)(lVar8 + 0x100040) != 0x75) goto LAB_1003ef6f4;
                          }
                          if (param_7 != (void *)0x0) {
                            _memcpy(param_7,pvVar13,0xf4);
                          }
                          uVar3 = *(uint *)(lVar8 + 0x100034);
                          *(ushort *)(lVar8 + 0x100124) =
                               (ushort)*(byte *)(lVar8 + 0x100040) |
                               (ushort)(*(int *)(lVar8 + 0x10003c) << 8);
                          if ((ulong)uVar3 < 0xf4) {
                            FUN_1001c62d9((long)pvVar13 + (ulong)uVar3,0xf4 - uVar3);
                          }
                          if (*(long *)(lVar8 + 0x100078) == 0) {
                            uVar6 = FUN_1002fa216(local_b08);
                            *(undefined8 *)(lVar8 + 0x100078) = uVar6;
                          }
                          FUN_1003090e3(local_b08,0);
                          if ((local_afc & 8) == 0) {
LAB_1003ef797:
                            if ((local_afc & 0x10) == 0) {
LAB_1003ef7c5:
                              if ((local_afc & 0x20) == 0) {
LAB_1003ef7f3:
                                uVar3 = FUN_100160dce(*(undefined8 *)(lVar8 + 0x100000),
                                                      *(int *)(lVar8 + 0x100034) + -0xf4);
                                puVar11 = (undefined1 *)(ulong)uVar3;
                                if (uVar3 != 0xffffff80) {
                                  if (uVar3 == 0) {
                                    if (*(char *)(lVar8 + 0x1000d8) == '\0') {
LAB_1003ef88a:
                                      if (*(int *)(lVar8 + 0x100044) != 0) {
                                        uVar3 = 0;
                                        local_afc = 0;
                                        do {
                                          uVar5 = FUN_1003f16c4(lVar8,&local_6d8,0x60);
                                          puVar11 = (undefined1 *)(ulong)uVar5;
                                          if (uVar5 != 0) {
                                            if (uVar5 == 0xffffff80) goto LAB_1003efbb2;
                                            if (((uVar5 != 0xffffffd9) ||
                                                (uVar3 - *(int *)(lVar8 + 0x100044) != -1)) ||
                                               ((*(ushort *)(lVar8 + 0x100124) & 0xfffe) != 0x158))
                                            {
                                              uVar6 = FUN_1001cc310();
                                              cVar1 = _os_log_type_enabled(uVar6,0x10);
                                              if (cVar1 == '\0') goto LAB_1003efbb2;
                                              piVar12 = local_58;
                                              local_58[0] = 0x8220202;
                                              local_58[1] = 0x7a0a90;
                                              local_58[2] = 1;
                                              local_4c = 0x400;
                                              local_4a = (char *)CONCAT44(local_4a._4_4_,uVar5);
                                              goto LAB_1003ef3ec;
                                            }
                                            break;
                                          }
                                          if (*(char *)(lVar8 + 0x100127) != '\0') {
                                            auVar14._12_2_ = uStack_6cc;
                                            auVar14._8_4_ = iStack_6d0;
                                            auVar14._14_2_ = uStack_6ca;
                                            auVar14._4_4_ = iStack_6d4;
                                            auVar14._0_4_ = local_6d8;
                                            auVar15 = pshufb(auVar14,_DAT_100718a70);
                                            local_6d8 = auVar15._0_4_;
                                            iStack_6d4 = auVar15._4_4_;
                                            iStack_6d0 = auVar15._8_4_;
                                            uStack_6cc = auVar15._12_2_;
                                            uStack_6ca = auVar15._14_2_;
                                          }
                                          if (local_6d8 != 0x6473686d) {
                                            uVar6 = FUN_1001cc310();
                                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar1 != '\0') {
                                              local_58[0] = 0x8220202;
                                              local_58[1] = 0x7a0a90;
                                              local_58[2] = 1;
                                              local_4c = 0x822;
                                              local_4a = 
                                              "sectionHeader.magic == kDDBSectionHeaderMagic";
                                              __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                  "%{public}s: (%{public}s)",
                                                                  local_58,0x16);
                                            }
                                            puVar11 = &DAT_ffffff30;
                                            FUN_1001782e9(0,0);
                                            goto LAB_1003efbb2;
                                          }
                                          switch(CONCAT22(uStack_6ca,uStack_6cc)) {
                                          case 1:
                                          case 6:
                                          case 10:
                                            uVar10 = *(ulong *)(local_b08 + 0x1bb0);
                                            *(ulong *)(local_b08 + 0x1bb0) = uVar10 | 2;
                                            uVar5 = FUN_1003fae4c(lVar8);
                                            puVar11 = (undefined1 *)(ulong)uVar5;
                                            *(ulong *)(local_b08 + 0x1bb0) =
                                                 *(ulong *)(local_b08 + 0x1bb0) & 0xfffffffffffffffd
                                                 | (ulong)((uint)uVar10 & 2);
                                            goto LAB_1003efa3a;
                                          case 2:
                                          case 3:
                                            if ((char)local_afc == '\0') {
                                              uVar10 = FUN_1003fd914(lVar8);
                                            }
                                            else {
                                              uVar10 = FUN_100160dce(*(undefined8 *)
                                                                      (lVar8 + 0x100000),
                                                                     iStack_6d0 - iStack_6d4);
                                            }
                                            puVar11 = (undefined1 *)(uVar10 & 0xffffffff);
                                            local_afc = (uint)CONCAT71((int7)(uVar10 >> 8),1);
                                            goto LAB_1003efa3a;
                                          case 4:
                                            uVar5 = FUN_1003f9ce8(lVar8);
                                            break;
                                          case 5:
                                            if (*(int *)(local_b08 + 0x98) == 0)
                                            goto switchD_1003ef92f_caseD_7;
                                            uVar5 = FUN_1003fd914(lVar8);
                                            break;
                                          default:
switchD_1003ef92f_caseD_7:
                                            uVar5 = FUN_100160dce(*(undefined8 *)(lVar8 + 0x100000),
                                                                  iStack_6d0 - iStack_6d4);
                                            break;
                                          case 8:
                                            uVar5 = FUN_1003fa7cc(lVar8);
                                            break;
                                          case 9:
                                            uVar5 = FUN_1003ff738(lVar8,iStack_6d0 - iStack_6d4);
                                            break;
                                          case 0xb:
                                            uVar5 = FUN_1003ff98f(lVar8,iStack_6d0 - iStack_6d4);
                                            break;
                                          case 0xc:
                                            uVar5 = FUN_1003ffbab(lVar8);
                                          }
                                          puVar11 = (undefined1 *)(ulong)uVar5;
LAB_1003efa3a:
                                          iVar4 = (int)puVar11;
                                          if (iVar4 != 0) {
                                            if (iVar4 == -0x80) goto LAB_1003efbb2;
                                            uVar6 = FUN_1001cc310();
                                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar1 == '\0') goto LAB_1003efbb2;
                                            piVar12 = local_58;
                                            local_58[0] = 0x8220202;
                                            local_58[1] = 0x7a0a90;
                                            local_58[2] = 1;
                                            local_4c = 0x400;
                                            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
                                            goto LAB_1003ef3ec;
                                          }
                                          uVar3 = uVar3 + 1;
                                        } while (uVar3 < *(uint *)(lVar8 + 0x100044));
                                      }
                                      FUN_10031c430(local_b08);
                                      puVar11 = (undefined1 *)0x0;
                                      FUN_1003164cf(local_b08,0xf);
                                    }
                                    else {
                                      uVar3 = FUN_1001601fd(&local_af8,10000000);
                                      puVar11 = (undefined1 *)(ulong)uVar3;
                                      if (uVar3 != 0xffffff80) {
                                        if (uVar3 == 0) {
                                          uVar3 = FUN_1003f10dc(lVar8,&local_af8);
                                          puVar11 = (undefined1 *)(ulong)uVar3;
                                          if (uVar3 != 0xffffff80) {
                                            if (uVar3 == 0) {
                                              FUN_100160772(&local_af8,0);
                                              *(undefined4 **)(lVar8 + 0x100000) = &local_af8;
                                              goto LAB_1003ef88a;
                                            }
                                            uVar6 = FUN_1001cc310();
                                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                                            if (cVar1 != '\0') {
                                              piVar12 = &local_6d8;
                                              local_6d8 = 0x8220202;
                                              iStack_6d4 = 0x7a0a90;
                                              iStack_6d0 = 1;
                                              uStack_6cc = 0x400;
                                              uStack_6ca = (undefined2)uVar3;
                                              uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                                              goto LAB_1003ef3ec;
                                            }
                                          }
                                        }
                                        else {
                                          uVar6 = FUN_1001cc310();
                                          cVar1 = _os_log_type_enabled(uVar6,0x10);
                                          if (cVar1 != '\0') {
                                            piVar12 = &local_6d8;
                                            local_6d8 = 0x8220202;
                                            iStack_6d4 = 0x7a0a90;
                                            iStack_6d0 = 1;
                                            uStack_6cc = 0x400;
                                            uStack_6ca = (undefined2)uVar3;
                                            uStack_6c8 = (undefined2)(uVar3 >> 0x10);
LAB_1003ef3ec:
                                            __os_log_error_impl(0x100000000,uVar6,0x10,
                                                                "%{public}s: err == (%d)",piVar12,
                                                                0x12);
                                          }
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    uVar6 = FUN_1001cc310();
                                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                                    if (cVar1 != '\0') {
                                      piVar12 = &local_6d8;
                                      local_6d8 = 0x8220202;
                                      iStack_6d4 = 0x7a0a90;
                                      iStack_6d0 = 1;
                                      uStack_6cc = 0x400;
                                      uStack_6ca = (undefined2)uVar3;
                                      uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                                      goto LAB_1003ef3ec;
                                    }
                                  }
                                }
                              }
                              else {
                                uVar3 = FUN_1003e9f77(lVar8,3,1);
                                puVar11 = (undefined1 *)(ulong)uVar3;
                                if (uVar3 != 0xffffff80) {
                                  if (uVar3 == 0) goto LAB_1003ef7f3;
                                  uVar6 = FUN_1001cc310();
                                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                                  if (cVar1 != '\0') {
                                    piVar12 = &local_6d8;
                                    local_6d8 = 0x8220202;
                                    iStack_6d4 = 0x7a0a90;
                                    iStack_6d0 = 1;
                                    uStack_6cc = 0x400;
                                    uStack_6ca = (undefined2)uVar3;
                                    uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                                    goto LAB_1003ef3ec;
                                  }
                                }
                              }
                            }
                            else {
                              uVar3 = FUN_1003e9f77(lVar8,2,1);
                              puVar11 = (undefined1 *)(ulong)uVar3;
                              if (uVar3 != 0xffffff80) {
                                if (uVar3 == 0) goto LAB_1003ef7c5;
                                uVar6 = FUN_1001cc310();
                                cVar1 = _os_log_type_enabled(uVar6,0x10);
                                if (cVar1 != '\0') {
                                  piVar12 = &local_6d8;
                                  local_6d8 = 0x8220202;
                                  iStack_6d4 = 0x7a0a90;
                                  iStack_6d0 = 1;
                                  uStack_6cc = 0x400;
                                  uStack_6ca = (undefined2)uVar3;
                                  uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                                  goto LAB_1003ef3ec;
                                }
                              }
                            }
                          }
                          else if (*(short *)(lVar8 + 0x100060) == 1) {
                            uVar3 = FUN_1003ea814(lVar8,1);
                            puVar11 = (undefined1 *)(ulong)uVar3;
                            if (uVar3 != 0xffffff80) {
                              if (uVar3 == 0) goto LAB_1003ef797;
                              uVar6 = FUN_1001cc310();
                              cVar1 = _os_log_type_enabled(uVar6,0x10);
                              if (cVar1 != '\0') {
                                piVar12 = &local_6d8;
                                local_6d8 = 0x8220202;
                                iStack_6d4 = 0x7a0a90;
                                iStack_6d0 = 1;
                                uStack_6cc = 0x400;
                                uStack_6ca = (undefined2)uVar3;
                                uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                                goto LAB_1003ef3ec;
                              }
                            }
                          }
                          else {
                            uVar6 = FUN_1001cc310();
                            cVar1 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar1 != '\0') {
                              local_6d8 = 0x8220202;
                              iStack_6d4 = 0x7a0a90;
                              iStack_6d0 = 1;
                              uStack_6cc = 0x822;
                              uStack_6ca = 0xb90c;
                              uStack_6c8 = 0x7c;
                              uStack_6c6 = 1;
                              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                  &local_6d8,0x16);
                            }
                            puVar11 = (undefined1 *)0x464;
                            FUN_1001782e9(0,0);
                          }
                        }
                      }
                      else {
                        uVar6 = FUN_1001cc310();
                        cVar1 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar1 != '\0') {
                          local_6d8 = 0x8220202;
                          iStack_6d4 = 0x7a0a90;
                          iStack_6d0 = 1;
                          uStack_6cc = 0x822;
                          uStack_6ca = 0xb3ad;
                          uStack_6c8 = 0x7c;
                          uStack_6c6 = 1;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_6d8,0x16);
                        }
                        puVar11 = (undefined1 *)0xffffffd9;
                        FUN_1001782e9(0,0);
                      }
                    }
                  }
                  else {
                    uVar6 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar1 != '\0') {
                      piVar12 = &local_6d8;
                      local_6d8 = 0x8220202;
                      iStack_6d4 = 0x7a0a90;
                      iStack_6d0 = 1;
                      uStack_6cc = 0x400;
                      uStack_6ca = (undefined2)uVar3;
                      uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                      goto LAB_1003ef3ec;
                    }
                  }
                }
              }
              else {
                uVar6 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar6,0x10);
                if (cVar1 != '\0') {
                  piVar12 = &local_6d8;
                  local_6d8 = 0x8220202;
                  iStack_6d4 = 0x7a0a90;
                  iStack_6d0 = 1;
                  uStack_6cc = 0x400;
                  uStack_6ca = (undefined2)uVar3;
                  uStack_6c8 = (undefined2)(uVar3 >> 0x10);
                  goto LAB_1003ef3ec;
                }
              }
            }
LAB_1003efbb2:
            *(undefined8 *)(lVar8 + 0x100000) = 0;
            if (*(long *)(lVar8 + 0x100130) != 0) {
              FUN_1001c64c1();
            }
            if ((*(char *)(lVar8 + 0x1000d8) != '\0') &&
               (cVar1 = FUN_100161f0e(&local_af8), cVar1 != '\0')) {
              FUN_10016013b(&local_af8);
            }
            FUN_1001c64c1(lVar8);
            if ((int)puVar11 == 0) {
              FUN_100319a94(local_b08,6,0);
              lVar8 = FUN_100277149(local_b08);
              while (lVar8 != 0) {
                lVar9 = FUN_10027728e(lVar8);
                if ((*(int *)(lVar8 + 0x14) == 0) && (*(int *)(lVar8 + 0xc) != 1)) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_6d8 = 0x8220202;
                    iStack_6d4 = 0x7a0a90;
                    iStack_6d0 = 1;
                    uStack_6cc = 0x822;
                    uStack_6ca = 0xb946;
                    uStack_6c8 = 0x7c;
                    uStack_6c6 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_6d8
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                FUN_1003a040b(lVar8);
                lVar8 = lVar9;
              }
              FUN_1002773d4(local_b08);
              lVar8 = FUN_1004cf9b5(local_b08);
              while (lVar8 != 0) {
                lVar9 = FUN_1005e386a(lVar8);
                if ((*(int *)(lVar8 + 0x84) == 0) && (*(int *)(lVar8 + 0x10) != 1)) {
                  uVar6 = FUN_1001cc310();
                  cVar1 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar1 != '\0') {
                    local_6d8 = 0x8220202;
                    iStack_6d4 = 0x7a0a90;
                    iStack_6d0 = 1;
                    uStack_6cc = 0x822;
                    uStack_6ca = 0xb98b;
                    uStack_6c8 = 0x7c;
                    uStack_6c6 = 1;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_6d8
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                FUN_1005e37a3(lVar8);
                lVar8 = lVar9;
              }
              FUN_1004cf6d4(local_b08);
              puVar11 = (undefined1 *)0x0;
              FUN_1002e013f(local_b08);
            }
            else {
              FUN_100319a94(local_b08,0,puVar11);
            }
          }
        }
        FUN_1002842e4(local_b78);
        FUN_1002842e4(local_b8);
        FUN_1002842e4(&local_88);
        FUN_1002842e4(local_c28);
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          uStack_6ca = (undefined2)uVar3;
          uStack_6c8 = (undefined2)(uVar3 >> 0x10);
          goto LAB_1003eeb45;
        }
      }
    }
  }
  FUN_10016013b(local_bc0);
  FUN_1001c64c1(local_b20);
LAB_1003ef2f4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

