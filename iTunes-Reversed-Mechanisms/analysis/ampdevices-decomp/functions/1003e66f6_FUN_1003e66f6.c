// name: FUN_1003e66f6
// address: 1003e66f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e66f6(undefined1 (*param_1) [16])

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_178 [6] [16];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 (*local_f8) [16];
  undefined1 (*local_f0) [16];
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined2 local_dc;
  int local_da;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  long *local_68;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = *(undefined8 *)(param_1[0x10000] + 8);
  FUN_1003071cd(uVar2);
  FUN_1001c62d9(local_178,0x60);
  local_178[0]._0_8_ = 0x606473686d;
  local_178[0]._12_4_ = 4;
  iVar6 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_118);
  if (iVar6 == -0x80) goto LAB_1003e7348;
  if (iVar6 == 0) {
    local_e8 = 0x60;
    uStack_e4 = 0;
    iVar6 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_e8,local_178);
    if (iVar6 == -0x80) goto LAB_1003e7348;
    if (iVar6 == 0) {
      FUN_1001c62d9(&local_e8,0x5c);
      local_e8 = 0x616c686d;
      uStack_e4 = 0x5c;
      iVar6 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_110);
      if (iVar6 == -0x80) goto LAB_1003e7348;
      if (iVar6 == 0) {
        local_88._0_4_ = 0x5c;
        local_88._4_4_ = 0;
        iVar6 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_88,&local_e8);
        if (iVar6 == -0x80) goto LAB_1003e7348;
        if (iVar6 == 0) {
          lVar7 = FUN_100277149(uVar2);
          if (lVar7 != 0) {
            local_108 = (undefined8 *)(param_1[5] + 8);
            do {
              if (*(int *)(lVar7 + 0x14) != 0) {
                if (*(int *)(lVar7 + 8) == 0x616c6269) {
LAB_1003e6894:
                  if (*(long *)(lVar7 + 0x48) == 0) goto LAB_1003e689c;
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7ab58c;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  cVar5 = FUN_1001782e9(0,1);
                  if (cVar5 != '\0') goto LAB_1003e6894;
LAB_1003e689c:
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "AlbumInfoIsValid(albumInfo)";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                if (*(int *)(lVar7 + 0x14) == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7a0a90;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "albumInfo->IsEmpty() == false";
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                lVar3 = *(long *)(lVar7 + 0x48);
                local_100 = local_108;
                local_f8 = param_1;
                FUN_1001c62d9(param_1,0x58);
                *(undefined8 *)*local_f8 = 0x586169686d;
                *(undefined4 *)local_f8[1] = *(undefined4 *)(lVar7 + 0x18);
                *(undefined8 *)(local_f8[1] + 4) = *(undefined8 *)(lVar7 + 0x20);
                local_f8[1][0xc] = *(undefined1 *)(lVar7 + 0x10);
                lVar9 = *(long *)(lVar7 + 0x70);
                *(long *)local_f8[2] = lVar9;
                *(undefined2 *)(local_f8[2] + 8) = 0;
                *(undefined4 *)local_f8[3] = *(undefined4 *)(lVar7 + 0x84);
                local_f8[2][10] = *(undefined1 *)(lVar7 + 0xe6);
                local_f8[2][0xb] = *(undefined1 *)(lVar7 + 0xe7);
                if (lVar9 == 0) {
                  local_88._0_4_ = 0x8578d0;
                  local_88._4_4_ = 1;
                  local_80 = SUB84(&local_f8,0);
                  uStack_7c = (undefined2)((ulong)&local_f8 >> 0x20);
                  uStack_7a = (undefined2)((ulong)&local_f8 >> 0x30);
                  local_68 = &local_88;
                  FUN_1003a0178(lVar7,1,&local_88);
                  if (local_68 == &local_88) {
                    lVar9 = 0x20;
                  }
                  else {
                    lVar9 = 0x28;
                    if (local_68 == (long *)0x0) goto LAB_1003e69c7;
                  }
                  (**(code **)(*local_68 + lVar9))();
                }
LAB_1003e69c7:
                iVar6 = *(int *)(lVar7 + 0x10);
                if (iVar6 == 4) {
                  local_f0 = local_f8;
                  *(undefined4 *)(local_f8[2] + 0xc) = *(undefined4 *)(lVar7 + 0x100);
                  iVar6 = FUN_1003f32d1(param_1,lVar3 + 0x2070,*(undefined4 *)(lVar7 + 0xc0),0xcc,1,
                                        *(undefined4 *)(param_1[0x10013] + 8),&local_100,&local_58);
                  if ((iVar6 == 0) && ((char)local_58 != '\0')) {
LAB_1003e6e50:
                    *(int *)(*local_f0 + 0xc) = *(int *)(*local_f0 + 0xc) + 1;
                  }
                  else if (iVar6 != 0) {
                    if (iVar6 != -0x80) {
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 == '\0') goto LAB_1003e6f49;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      goto LAB_1003e71e3;
                    }
                    goto LAB_1003e75cb;
                  }
LAB_1003e6e5a:
                  uVar12 = (long)local_100 - (long)param_1;
                  local_f0 = (undefined1 (*) [16])(uVar12 & 0xffffffff);
                  if ((undefined1 (*) [16])0x100000 < local_f0) {
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x822;
                      local_4a = "albumInfoSize <= (1 * 1024L * 1024L)";
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  *(int *)(*local_f8 + 8) = (int)uVar12;
                  auVar15 = _DAT_100718a70;
                  if (param_1[0x10012][7] != '\0') {
                    auVar13._8_8_ = uVar12 & 0xffffffff | (ulong)*(uint *)(*local_f8 + 0xc) << 0x20;
                    auVar13._0_8_ = *(undefined8 *)*local_f8;
                    auVar13 = pshufb(auVar13,_DAT_100718a70);
                    *local_f8 = auVar13;
                    uVar1 = *(uint *)local_f8[1];
                    *(uint *)local_f8[1] =
                         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18;
                    uVar12 = *(ulong *)(local_f8[1] + 4);
                    *(ulong *)(local_f8[1] + 4) =
                         uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                         (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                         (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                         (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
                    uVar12 = *(ulong *)local_f8[2];
                    *(ulong *)local_f8[2] =
                         uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                         (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                         (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                         (uVar12 & 0xff00) << 0x28 | uVar12 << 0x38;
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ = *(ulong *)(local_f8[2] + 0xc);
                    auVar15 = pshufb(auVar14,auVar15);
                    *(long *)(local_f8[2] + 0xc) = auVar15._0_8_;
                  }
                  local_58 = (int)local_f0;
                  uStack_54 = (undefined4)((ulong)local_f0 >> 0x20);
                  iVar6 = FUN_100160894(*(undefined8 *)param_1[0x10000],&local_58,param_1);
                  if ((iVar6 != -0x80) && (iVar6 != 0)) {
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_1003e71e3:
                      local_4c = 0x400;
                      uStack_50 = 1;
                      uStack_54 = 0x7a0a90;
                      local_58 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                }
                else {
                  if (iVar6 != 3) {
                    if (iVar6 == 2) {
                      local_f0 = local_f8;
                      local_f8[1][0xd] = *(char *)(lVar7 + 0x108) != '\0';
                      iVar6 = FUN_1003f32d1(param_1,lVar3 + 0x1c60,*(undefined4 *)(lVar7 + 0xc0),200
                                            ,1,*(undefined4 *)(param_1[0x10013] + 8),&local_100,
                                            &local_58);
                      if ((iVar6 == 0) && ((char)local_58 != '\0')) {
                        *(int *)(*local_f0 + 0xc) = *(int *)(*local_f0 + 0xc) + 1;
                      }
                      else if (iVar6 != 0) {
                        if (iVar6 == -0x80) goto LAB_1003e75cb;
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar5 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                          goto LAB_1003e71e3;
                        }
                        goto LAB_1003e6f49;
                      }
                      uVar10 = 0;
                      if (*(int *)(lVar7 + 0x10) == 2) {
                        uVar10 = *(undefined4 *)(lVar7 + 0x100);
                      }
                      local_f0 = local_f8;
                      iVar6 = FUN_1003f32d1(param_1,lVar3 + 0x1cb0,uVar10,0xc9,1,
                                            *(undefined4 *)(param_1[0x10013] + 8),&local_100,
                                            &local_58);
                      if ((iVar6 == 0) && ((char)local_58 != '\0')) {
                        *(int *)(*local_f0 + 0xc) = *(int *)(*local_f0 + 0xc) + 1;
                      }
                      else if (iVar6 != 0) {
                        if (iVar6 == -0x80) goto LAB_1003e75cb;
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar5 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                          goto LAB_1003e71e3;
                        }
                        goto LAB_1003e6f49;
                      }
                      uVar10 = 0;
                      if (*(int *)(lVar7 + 0x10) == 2) {
                        uVar10 = *(undefined4 *)(lVar7 + 0x104);
                      }
                      local_f0 = local_f8;
                      iVar6 = FUN_1003f32d1(param_1,lVar3 + 0x1cb0,uVar10,0xca,1,
                                            *(undefined4 *)(param_1[0x10013] + 8),&local_100,
                                            &local_58);
                      if ((iVar6 == 0) && ((char)local_58 != '\0')) goto LAB_1003e6e50;
                      if (iVar6 != 0) {
                        if (iVar6 == -0x80) goto LAB_1003e75cb;
                        uVar8 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar8,0x10);
                        if (cVar5 != '\0') {
                          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                          goto LAB_1003e71e3;
                        }
                        goto LAB_1003e6f49;
                      }
                    }
                    goto LAB_1003e6e5a;
                  }
                  local_f0 = local_f8;
                  iVar6 = FUN_1003f32d1(param_1,lVar3 + 0x1c60,*(undefined4 *)(lVar7 + 0xc0),200,1,
                                        *(undefined4 *)(param_1[0x10013] + 8),&local_100,&local_58);
                  pauVar4 = local_f8;
                  if ((iVar6 == 0) && ((char)local_58 != '\0')) {
                    *(int *)(*local_f0 + 0xc) = *(int *)(*local_f0 + 0xc) + 1;
LAB_1003e6c09:
                    FUN_1003a4bd4(&local_58,lVar7);
                    iVar6 = FUN_1003f318a(param_1,pauVar4,&local_58,0xcb,
                                          *(undefined4 *)(param_1[0x10013] + 8),&local_100);
                    FUN_1001b7a50(&local_58);
                    pauVar4 = local_f8;
                    if (iVar6 == 0) {
                      FUN_1003a4c06(&local_58,lVar7);
                      iVar6 = FUN_1003f318a(param_1,pauVar4,&local_58,0xce,
                                            *(undefined4 *)(param_1[0x10013] + 8),&local_100);
                      FUN_1001b7a50(&local_58);
                      if (iVar6 == 0) goto LAB_1003e6e5a;
                      if (iVar6 == -0x80) goto LAB_1003e75cb;
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                        goto LAB_1003e71e3;
                      }
                    }
                    else {
                      if (iVar6 == -0x80) {
LAB_1003e75cb:
                        iVar6 = -0x80;
                        goto LAB_1003e7348;
                      }
                      uVar8 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar8,0x10);
                      if (cVar5 != '\0') {
                        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                        goto LAB_1003e71e3;
                      }
                    }
                  }
                  else {
                    if (iVar6 == 0) goto LAB_1003e6c09;
                    if (iVar6 == -0x80) goto LAB_1003e75cb;
                    uVar8 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar8,0x10);
                    if (cVar5 != '\0') {
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
                      goto LAB_1003e71e3;
                    }
                  }
                }
LAB_1003e6f49:
                if (iVar6 != 0) {
                  if (iVar6 == -0x80) goto LAB_1003e7348;
                  uVar8 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar5 == '\0') goto LAB_1003e7348;
                  puVar11 = &local_88;
                  local_88._0_4_ = 0x8220202;
                  local_88._4_4_ = 0x7a0a90;
                  local_80 = 1;
                  uStack_7c = 0x400;
                  uStack_7a = (undefined2)iVar6;
                  uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
                  goto LAB_1003e7335;
                }
                local_e0 = local_e0 + 1;
              }
              lVar7 = FUN_10027728e(lVar7);
            } while (lVar7 != 0);
          }
          iVar6 = FUN_100160255(*(undefined8 *)param_1[0x10000],&local_58);
          if (iVar6 == -0x80) goto LAB_1003e7348;
          if (iVar6 == 0) {
            iVar6 = local_58 - (int)local_118;
            local_178[0]._8_4_ = iVar6;
            if (param_1[0x10012][7] != '\0') {
              auVar15._12_4_ = local_178[0]._12_4_;
              auVar15._8_4_ = iVar6;
              auVar15._0_8_ = local_178[0]._0_8_;
              local_178[0] = pshufb(auVar15,_DAT_100718a70);
            }
            local_88._0_4_ = 0x60;
            local_88._4_4_ = 0;
            iVar6 = FUN_100160a0d(*(undefined8 *)param_1[0x10000],local_118,&local_88,local_178);
            if (iVar6 == -0x80) goto LAB_1003e7348;
            if (iVar6 == 0) {
              if (param_1[0x10012][7] != '\0') {
                auVar16._4_4_ = uStack_e4;
                auVar16._0_4_ = local_e8;
                auVar16._8_8_ = 0;
                auVar15 = pshufb(auVar16,_DAT_10070e4b0);
                local_e8 = auVar15._0_4_;
                uStack_e4 = auVar15._4_4_;
                local_e0 = local_e0 >> 0x18 | (local_e0 & 0xff0000) >> 8 | (local_e0 & 0xff00) << 8
                           | local_e0 << 0x18;
              }
              local_88._0_4_ = 0x5c;
              local_88._4_4_ = 0;
              iVar6 = FUN_100160a0d(*(undefined8 *)param_1[0x10000],local_110,&local_88,&local_e8);
              if ((iVar6 == -0x80) || (iVar6 == 0)) goto LAB_1003e7348;
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 == '\0') goto LAB_1003e7348;
              puVar11 = &local_88;
              local_88._0_4_ = 0x8220202;
              local_88._4_4_ = 0x7a0a90;
              local_80 = 1;
              uStack_7c = 0x400;
              uStack_7a = (undefined2)iVar6;
              uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
            }
            else {
              uVar8 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar8,0x10);
              if (cVar5 == '\0') goto LAB_1003e7348;
              puVar11 = &local_88;
              local_88._0_4_ = 0x8220202;
              local_88._4_4_ = 0x7a0a90;
              local_80 = 1;
              uStack_7c = 0x400;
              uStack_7a = (undefined2)iVar6;
              uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
            if (cVar5 == '\0') goto LAB_1003e7348;
            puVar11 = &local_88;
            local_88._0_4_ = 0x8220202;
            local_88._4_4_ = 0x7a0a90;
            local_80 = 1;
            uStack_7c = 0x400;
            uStack_7a = (undefined2)iVar6;
            uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
          }
        }
        else {
          uVar8 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar8,0x10);
          if (cVar5 == '\0') goto LAB_1003e7348;
          puVar11 = &local_88;
          local_88._0_4_ = 0x8220202;
          local_88._4_4_ = 0x7a0a90;
          local_80 = 1;
          uStack_7c = 0x400;
          uStack_7a = (undefined2)iVar6;
          uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
        }
      }
      else {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 == '\0') goto LAB_1003e7348;
        puVar11 = &local_88;
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar6;
        uStack_78 = (undefined2)((uint)iVar6 >> 0x10);
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 == '\0') goto LAB_1003e7348;
      puVar11 = (undefined8 *)&local_e8;
      local_e8 = 0x8220202;
      uStack_e4 = 0x7a0a90;
      local_e0 = 1;
      local_dc = 0x400;
      local_da = iVar6;
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 == '\0') goto LAB_1003e7348;
    puVar11 = (undefined8 *)&local_e8;
    local_e8 = 0x8220202;
    uStack_e4 = 0x7a0a90;
    local_e0 = 1;
    local_dc = 0x400;
    local_da = iVar6;
  }
LAB_1003e7335:
  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",puVar11,0x12);
LAB_1003e7348:
  FUN_100307383(uVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

