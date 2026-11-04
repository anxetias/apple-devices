// name: FUN_100591f64
// address: 100591f64

ulong FUN_100591f64(long param_1,ulong param_2,uint param_3,undefined4 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  char *pcVar22;
  undefined4 local_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined1 local_730 [16];
  long local_720;
  ulong local_718;
  char *local_710;
  undefined8 local_708;
  long local_700;
  char *local_6f8;
  char *local_6f0;
  ulong local_6e8;
  undefined4 local_6e0;
  uint local_6dc;
  char *local_6d8;
  long local_6d0;
  char *local_6c8;
  ulong local_6c0;
  long local_6b8;
  long local_6b0;
  ulong local_6a8;
  long local_6a0;
  ulong local_698;
  char *local_690;
  undefined4 local_688;
  long local_684;
  undefined2 local_67c;
  undefined4 local_67a;
  undefined2 local_676;
  undefined4 local_674;
  undefined2 local_670;
  undefined8 local_66e;
  uint local_658;
  char *local_654;
  undefined2 local_64c;
  char *local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_708 = param_5;
  local_6e0 = param_4;
  local_6c0 = param_2;
  local_6a0 = param_1;
  cVar8 = FUN_100495380();
  if (cVar8 == '\0') {
    uVar14 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar14,0x10);
    if (cVar8 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != 0) {
      uVar19 = local_698 >> 0x20;
      local_698 = local_698 & 0xffffffff00000000;
      if ((param_3 & 2) != 0) {
        local_698 = CONCAT44((int)uVar19,*(undefined4 *)(local_6a0 + 8));
      }
      uVar19 = 0;
      if ((param_3 & 1) == 0) {
        pcVar11 = (char *)0x0;
      }
      else {
        iVar9 = *(int *)(local_6a0 + 8);
        uVar10 = *(uint *)(local_6a0 + 0x40);
        pcVar11 = (char *)FUN_1001c6429((ulong)uVar10 << 4);
        if (pcVar11 == (char *)0x0) {
          uVar14 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar14,0x10);
          if (cVar8 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "locationList != nullptr";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
          local_6a8 = 0xffffff94;
          goto LAB_10059235e;
        }
        local_698 = CONCAT44(local_698._4_4_,(uVar10 + (int)local_698) - iVar9);
      }
      pcVar12 = (char *)FUN_100496019(local_6a0);
      local_6a8 = 0;
      local_6d8 = pcVar11;
      local_6c8 = pcVar11;
      if (pcVar12 != (char *)0x0) {
        local_6f8 = (char *)(local_698 & 0xffffffff);
        local_6a8 = 0;
        uVar19 = 0;
        do {
          local_690 = pcVar12;
          for (lVar13 = FUN_1004968c5(); lVar13 != 0; lVar13 = FUN_100496985(lVar13)) {
            uVar10 = *(uint *)(lVar13 + 0x10);
            if (uVar10 == 1) {
              if ((param_3 & 2) != 0) {
LAB_100592117:
                if ((*(char *)(lVar13 + 0x50) != '\0') || (local_690[0x83] != '\0')) {
                  iVar9 = FUN_10049980b(lVar13,&local_458,0);
                  if (iVar9 == 0) {
                    FUN_100591963(&local_458,local_6c0);
                  }
                  FUN_10049a09d(lVar13,0,0,0);
                  *(undefined1 *)(lVar13 + 0x51) = 1;
                  *(undefined1 *)(local_6a0 + 4) = 1;
                }
                uVar19 = (ulong)((int)uVar19 + 1);
                uVar10 = FUN_1001ceb24(local_708,local_6e0,uVar19);
                if ((uVar10 != 0xffffff80) && (uVar10 != 0)) {
                  uVar14 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar8 != '\0') {
                    local_458 = 0x8220202;
                    local_454 = "Assertion failure";
                    local_44c = 0x400;
                    local_44a = (char *)CONCAT44(local_44a._4_4_,uVar10);
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_458
                                        ,0x12);
                  }
                }
                iVar9 = (int)local_6a8;
                local_6a8 = local_6a8 & 0xffffffff;
                if (iVar9 == 0) {
                  local_6a8 = (ulong)uVar10;
                }
              }
            }
            else {
              if (((param_3 & 2) != 0) && (uVar10 == 4)) goto LAB_100592117;
              if (((param_3 & 1) != 0) && (899 < uVar10)) {
                *(long *)(local_6c8 + 8) = lVar13;
                if ((*(char *)(lVar13 + 0x50) != '\0') || (local_690[0x83] != '\0')) {
                  *local_6c8 = '\x01';
                  *(undefined1 *)(local_6a0 + 4) = 1;
                }
                local_6c8 = local_6c8 + 0x10;
              }
            }
          }
          pcVar12 = (char *)FUN_1004960d0(local_690);
        } while (pcVar12 != (char *)0x0);
      }
      lVar13 = local_6a0;
      if ((param_3 & 1) != 0) {
        uVar18 = (ulong)((long)local_6c8 - (long)local_6d8) >> 4;
        if (*(uint *)(local_6a0 + 0x40) < (uint)uVar18) {
          uVar14 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar14,0x10);
          if (cVar8 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "numInstances <= imageLibrary->numImageInstances";
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if ((uint)uVar18 == 0) goto LAB_100592345;
        FUN_1001d290b(local_6d8,uVar18,0x10,FUN_10059319a,0);
        local_6f8 = local_6d8 + (uVar18 & 0xffffffff) * 0x10 + -0x10;
        lVar13 = local_6a0;
        if (local_6d8 <= local_6f8) {
          local_718 = local_698 & 0xffffffff;
          local_720 = local_6a0 + 0xb78;
          pcVar11 = local_6d8;
          do {
            lVar4 = *(long *)(pcVar11 + 8);
            bVar7 = false;
            pcVar12 = pcVar11;
            do {
              if ((*(long *)(*(long *)(pcVar12 + 8) + 0x48) != *(long *)(lVar4 + 0x48)) ||
                 (*(int *)(*(long *)(pcVar12 + 8) + 0x44) != *(int *)(lVar4 + 0x44))) break;
              if (*pcVar12 != '\0') {
                bVar7 = true;
              }
              pcVar12 = pcVar12 + 0x10;
            } while (pcVar12 <= local_6f8);
            iVar9 = (int)((ulong)(pcVar12 + (-0x10 - (long)pcVar11)) >> 4);
            local_6c8 = (char *)CONCAT44(local_6c8._4_4_,iVar9 + 1);
            local_690 = pcVar11;
            if (bVar7) {
              local_6b0 = 0;
              iVar2 = *(int *)(lVar4 + 0x10);
              for (puVar15 = (undefined8 *)FUN_100495ce0(lVar13); puVar15 != (undefined8 *)0x0;
                  puVar15 = (undefined8 *)*puVar15) {
                if (*(int *)(puVar15 + 2) == iVar2) {
                  puVar1 = puVar15 + 0x92;
                  cVar8 = FUN_100161f0e(puVar1);
                  if (cVar8 != '\0') {
                    FUN_100160cb6(puVar1,puVar15[0x91]);
                    FUN_10016013b(puVar1);
                  }
                  break;
                }
              }
              uVar14 = FUN_10049980b(*(undefined8 *)(local_690 + 8),&local_458,0);
              uVar10 = (uint)uVar14;
              local_6c0 = CONCAT44(local_6c0._4_4_,(int)CONCAT71((int7)((ulong)uVar14 >> 8),1));
              if (uVar10 != 0xffffff80) {
                if (uVar10 == 0) {
                  lVar13 = *(long *)(local_690 + 8);
                  if (*(char *)(lVar13 + 0x52) != '\0') {
                    if ((iVar9 != 0) || (cVar8 = '\x01', *local_690 == '\0')) {
                      uVar14 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar8 != '\0') {
                        local_658 = 0x8220202;
                        local_654 = "Assertion failure";
                        local_64c = 0x822;
                        local_64a = 
                        "imageLocationList[0].instance->separateFileOnDevice == false || (numImageLocations == 1 && imageLocationList[0].deleted)"
                        ;
                        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",
                                            &local_658,0x16);
                      }
                      FUN_1001782e9(0,0);
                      lVar13 = *(long *)(local_690 + 8);
                      cVar8 = *(char *)(lVar13 + 0x52);
                    }
                    if (((iVar9 == 0) && (cVar8 != '\0')) && (*local_690 != '\0')) {
                      *(undefined1 *)(lVar13 + 0x51) = 1;
                      uVar10 = 0;
                      local_6c0 = local_6c0 & 0xffffffff00000000;
                      goto LAB_10059296f;
                    }
                  }
                  uVar10 = FUN_10017cc65(&local_458,0x64617461,3);
                  if (uVar10 != 0xffffff80) {
                    if (uVar10 == 0) {
                      uVar10 = FUN_10017ce92(local_6b0,&local_700);
                      if (uVar10 != 0xffffff80) {
                        if (uVar10 == 0) {
                          uVar18 = ((ulong)local_6c8 & 0xffffffff) * 0x10;
                          pcVar11 = local_690 + (uVar18 - 0x10);
                          local_710 = pcVar11;
                          if (local_690 < pcVar11) {
                            uVar21 = 0;
                            local_6b8 = 0;
                            local_6dc = 0;
                            uVar18 = uVar19;
                            pcVar17 = local_690;
                            local_6e8 = uVar19;
                            do {
                              local_6f0 = pcVar17;
                              local_698 = uVar21;
                              if (*pcVar17 != '\0') {
                                for (; (pcVar17 < pcVar11 && (*pcVar11 != '\0'));
                                    pcVar11 = pcVar11 + -0x10) {
                                  uVar18 = *(ulong *)(pcVar11 + 8);
                                  *(undefined1 *)(uVar18 + 0x51) = 1;
                                }
                                pcVar22 = local_690;
                                if (pcVar11 == pcVar17) break;
                                lVar13 = *(long *)(pcVar17 + 8);
                                local_6d0 = *(long *)(pcVar11 + 8);
                                uVar10 = *(int *)(lVar13 + 0x40) + 3U & 0xfffffffc;
                                if ((*(int *)(local_6d0 + 0x40) + 3U & 0xfffffffc) == uVar10) {
                                  uVar20 = local_6dc;
                                  if (local_6dc < uVar10) {
                                    if (local_6b8 != 0) {
                                      FUN_1001c64c1();
                                    }
                                    local_6b8 = FUN_1001c63e1(uVar10);
                                    uVar20 = uVar10;
                                    if (local_6b8 == 0) {
                                      uVar14 = FUN_1001cc310();
                                      cVar8 = _os_log_type_enabled(uVar14,0x10);
                                      if (cVar8 != '\0') {
                                        local_658 = 0x8220202;
                                        local_654 = "Assertion failure";
                                        local_64c = 0x822;
                                        local_64a = "imageBuffer != nullptr";
                                        __os_log_error_impl(0x100000000,uVar14,0x10,
                                                            "%{public}s: (%{public}s)",&local_658,
                                                            0x16);
                                      }
                                      FUN_1001782e9(0,0);
                                      uVar10 = 0xffffff94;
                                      goto LAB_10059296f;
                                    }
                                  }
                                  uVar18 = FUN_10017d068(local_6b0,*(undefined4 *)(local_6d0 + 0x38)
                                                        );
                                  local_698 = uVar18;
                                  if ((int)uVar18 == 0) {
                                    local_698 = FUN_10017d186(local_6b0,local_6b8,
                                                              *(undefined4 *)(local_6d0 + 0x40),0,0)
                                    ;
                                    if ((int)local_698 != 0) {
                                      if ((int)local_698 != -0x80) {
                                        uVar14 = FUN_1001cc310();
                                        cVar8 = _os_log_type_enabled(uVar14,0x10);
                                        if (cVar8 != '\0') {
                                          local_658 = 0x8220202;
                                          local_654 = "Assertion failure";
                                          local_64c = 0x400;
                                          local_64a = (char *)CONCAT44(local_64a._4_4_,
                                                                       (int)local_698);
                                          __os_log_error_impl(0x100000000,uVar14,0x10,
                                                              "%{public}s: err == (%d)",&local_658,
                                                              0x12);
                                        }
                                      }
                                      local_658 = local_658 & 0xffff0000;
                                      FUN_10017dbac(&local_458,&local_658);
                                      if (DAT_1008c75c0 != -1) {
                                        _dispatch_once(&DAT_1008c75c0,
                                                       &PTR___NSConcreteGlobalBlock_100857068);
                                      }
                                      pcVar22 = local_690;
                                      uVar16 = DAT_1008c75b8;
                                      uVar18 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                                      lVar13 = local_700;
                                      uVar21 = local_698;
                                      if ((char)uVar18 != '\0') {
                                        local_6c0 = uVar16;
                                        uVar3 = *(undefined4 *)(local_6d0 + 0x38);
                                        local_6f0 = (char *)CONCAT44(local_6f0._4_4_,
                                                                     *(undefined4 *)
                                                                      (local_6d0 + 0x40));
                                        FUN_1001b8dfc(local_730,&local_658);
                                        local_66e = FUN_1001b83ae(local_730);
                                        local_688 = 0x8000402;
                                        local_684 = lVar13;
                                        local_67c = 0x400;
                                        local_676 = 0x400;
                                        local_674 = local_6f0._0_4_;
                                        local_670 = 0x820;
                                        local_67a = uVar3;
                                        __os_log_impl(0x100000000,local_6c0,0x10,
                                                                                                            
                                                  "Compact thumb file: read error; file size %lld, pos set to %u, read size %d, file %s"
                                                  ,&local_688,0x22);
                                        uVar18 = FUN_1001b7a50(local_730);
                                        uVar21 = local_698;
                                        pcVar22 = local_690;
                                      }
                                      break;
                                    }
                                    uVar18 = FUN_10017d068(local_6b0,*(undefined4 *)(lVar13 + 0x38))
                                    ;
                                    local_698 = uVar18;
                                    if ((int)uVar18 == 0) {
                                      uVar18 = FUN_10017d230(local_6b0,local_6b8,
                                                             *(undefined4 *)(local_6d0 + 0x40));
                                      if ((int)uVar18 == 0) {
                                        *(undefined4 *)(local_6d0 + 0x38) =
                                             *(undefined4 *)(lVar13 + 0x38);
                                        *(undefined1 *)(lVar13 + 0x51) = 1;
                                        uVar14 = *(undefined8 *)local_6f0;
                                        uVar5 = *(undefined8 *)(local_6f0 + 8);
                                        uVar6 = *(undefined8 *)(pcVar11 + 8);
                                        *(undefined8 *)local_6f0 = *(undefined8 *)pcVar11;
                                        *(undefined8 *)(local_6f0 + 8) = uVar6;
                                        local_748 = (undefined4)uVar14;
                                        uStack_744 = (undefined4)((ulong)uVar14 >> 0x20);
                                        uStack_740 = (undefined4)uVar5;
                                        uStack_73c = (undefined4)((ulong)uVar5 >> 0x20);
                                        *(undefined4 *)pcVar11 = local_748;
                                        *(undefined4 *)(pcVar11 + 4) = uStack_744;
                                        *(undefined4 *)(pcVar11 + 8) = uStack_740;
                                        *(undefined4 *)(pcVar11 + 0xc) = uStack_73c;
                                        pcVar11 = pcVar11 + -0x10;
                                        local_698 = 0;
                                        local_6dc = uVar20;
                                        goto LAB_10059281e;
                                      }
                                      uVar21 = uVar18;
                                      pcVar22 = local_690;
                                      local_698 = uVar18;
                                      if ((int)uVar18 == -0x80) break;
                                      uVar14 = FUN_1001cc310();
                                      uVar18 = _os_log_type_enabled(uVar14,0x10);
                                      uVar21 = local_698;
                                      pcVar22 = local_690;
                                      if ((char)uVar18 == '\0') break;
                                      local_64a = (char *)CONCAT44(local_64a._4_4_,(int)local_698);
                                    }
                                    else {
                                      uVar21 = uVar18;
                                      pcVar22 = local_690;
                                      if ((int)uVar18 == -0x80) break;
                                      uVar14 = FUN_1001cc310();
                                      uVar18 = _os_log_type_enabled(uVar14,0x10);
                                      uVar21 = local_698;
                                      pcVar22 = local_690;
                                      if ((char)uVar18 == '\0') break;
                                      local_64a = (char *)CONCAT44(local_64a._4_4_,(int)local_698);
                                    }
                                  }
                                  else {
                                    uVar21 = uVar18;
                                    pcVar22 = local_690;
                                    if ((int)uVar18 == -0x80) break;
                                    uVar14 = FUN_1001cc310();
                                    uVar18 = _os_log_type_enabled(uVar14,0x10);
                                    uVar21 = local_698;
                                    pcVar22 = local_690;
                                    if ((char)uVar18 == '\0') break;
                                    local_64a = (char *)CONCAT44(local_64a._4_4_,(int)local_698);
                                  }
                                  uVar21 = local_698;
                                  local_64c = 0x400;
                                  local_654 = "Assertion failure";
                                  local_658 = 0x8220202;
                                  uVar18 = __os_log_error_impl(0x100000000,uVar14,0x10,
                                                               "%{public}s: err == (%d)",&local_658,
                                                               0x12);
                                  pcVar22 = local_690;
                                  break;
                                }
                              }
LAB_10059281e:
                              local_6e8 = (ulong)((int)local_6e8 + 1);
                              uVar16 = FUN_1001ceb24(local_708,local_6e0,local_6e8,local_718);
                              iVar9 = (int)uVar16;
                              uVar18 = uVar16;
                              if ((iVar9 != -0x80) && (iVar9 != 0)) {
                                uVar14 = FUN_1001cc310();
                                uVar18 = _os_log_type_enabled(uVar14,0x10);
                                if ((char)uVar18 != '\0') {
                                  local_658 = 0x8220202;
                                  local_654 = "Assertion failure";
                                  local_64c = 0x400;
                                  local_64a = (char *)CONCAT44(local_64a._4_4_,iVar9);
                                  uVar18 = __os_log_error_impl(0x100000000,uVar14,0x10,
                                                               "%{public}s: err == (%d)",&local_658,
                                                               0x12);
                                }
                              }
                              uVar21 = local_698;
                              if ((int)local_698 == 0) {
                                uVar21 = uVar16;
                              }
                              uVar21 = uVar21 & 0xffffffff;
                              pcVar17 = local_6f0 + 0x10;
                              pcVar22 = local_690;
                            } while (pcVar17 < pcVar11);
                          }
                          else {
                            local_6b8 = 0;
                            uVar21 = 0;
                            pcVar22 = local_690;
                          }
                          uVar10 = (uint)uVar21;
                          for (pcVar11 = local_710; (pcVar22 <= pcVar11 && (*pcVar11 != '\0'));
                              pcVar11 = pcVar11 + -0x10) {
                            uVar18 = *(ulong *)(pcVar11 + 8);
                            local_700 = local_700 -
                                        (ulong)(*(int *)(uVar18 + 0x40) + 3U & 0xfffffffc);
                            if (local_700 < 0) {
                              uVar14 = FUN_1001cc310();
                              cVar8 = _os_log_type_enabled(uVar14,0x10);
                              if (cVar8 != '\0') {
                                local_658 = 0x8220202;
                                local_654 = "Assertion failure";
                                local_64c = 0x822;
                                local_64a = "fileSize >= 0";
                                __os_log_error_impl(0x100000000,uVar14,0x10,
                                                    "%{public}s: (%{public}s)",&local_658,0x16);
                              }
                              FUN_1001782e9(0,0);
                              uVar18 = *(ulong *)(pcVar11 + 8);
                              pcVar22 = local_690;
                            }
                            *(undefined1 *)(uVar18 + 0x51) = 1;
                          }
                          local_6c0 = CONCAT44(local_6c0._4_4_,
                                               (int)CONCAT71((int7)(uVar18 >> 8),0 < local_700));
                          if (((0 < local_700) && (iVar9 = FUN_10017cf3c(local_6b0), iVar9 != -0x80)
                              ) && (iVar9 != 0)) {
                            uVar14 = FUN_1001cc310();
                            cVar8 = _os_log_type_enabled(uVar14,0x10);
                            if (cVar8 != '\0') {
                              local_658 = 0x8220202;
                              local_654 = "Assertion failure";
                              local_64c = 0x400;
                              local_64a = (char *)CONCAT44(local_64a._4_4_,iVar9);
                              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",
                                                  &local_658,0x12);
                            }
                          }
                          if (local_6b8 != 0) {
                            FUN_1001c64c1();
                          }
                        }
                        else {
                          uVar14 = FUN_1001cc310();
                          cVar8 = _os_log_type_enabled(uVar14,0x10);
                          if (cVar8 != '\0') {
                            local_64a = (char *)CONCAT44(local_64a._4_4_,uVar10);
                            goto LAB_100592d1f;
                          }
                        }
                      }
                    }
                    else {
                      uVar14 = FUN_1001cc310();
                      cVar8 = _os_log_type_enabled(uVar14,0x10);
                      if (cVar8 != '\0') {
                        local_64a = (char *)CONCAT44(local_64a._4_4_,uVar10);
                        goto LAB_100592d1f;
                      }
                    }
                  }
                }
                else {
                  uVar14 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar14,0x10);
                  if (cVar8 != '\0') {
                    local_64a = (char *)CONCAT44(local_64a._4_4_,uVar10);
LAB_100592d1f:
                    local_64c = 0x400;
                    local_654 = "Assertion failure";
                    local_658 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_658
                                        ,0x12);
                  }
                }
              }
LAB_10059296f:
              if (local_6b0 != 0) {
                FUN_10017cdfb();
              }
              if ((char)local_6c0 == '\0') {
                FUN_100591963(&local_458,local_720);
              }
              lVar13 = local_6a0;
              if ((uVar10 != 0xffffff80) && (uVar10 != 0)) {
                uVar14 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar14,0x10);
                lVar13 = local_6a0;
                if (cVar8 != '\0') {
                  local_458 = 0x8220202;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,uVar10);
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
              }
              iVar9 = (int)local_6a8;
              local_6a8 = local_6a8 & 0xffffffff;
              if (iVar9 == 0) {
                local_6a8 = (ulong)uVar10;
              }
            }
            uVar19 = (ulong)(uint)((int)uVar19 + (int)local_6c8);
            pcVar11 = pcVar12;
          } while (pcVar12 <= local_6f8);
        }
        *(undefined1 *)(lVar13 + 4) = 1;
      }
LAB_100592345:
      FUN_100591ec9(lVar13);
      if (local_6d8 != (char *)0x0) {
        FUN_1001c64c1();
      }
      goto LAB_10059235e;
    }
    uVar14 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar14,0x10);
    if (cVar8 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "options != 0";
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_6a8 = 0xffffffce;
LAB_10059235e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_6a8;
}

