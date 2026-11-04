// name: FUN_100274af4
// address: 100274af4

int FUN_100274af4(long param_1,long param_2,char param_3,long *param_4,long *param_5)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined8 extraout_RDX;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  bool bVar21;
  int local_4b8;
  int local_4b4;
  long local_4b0 [2];
  uint local_4a0;
  undefined4 uStack_49c;
  long *local_490;
  long local_488 [2];
  ulong local_478;
  undefined4 local_46c;
  int local_468;
  undefined4 local_464;
  long *local_460;
  long local_458;
  undefined4 local_450;
  uint local_44c;
  long local_448;
  long local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined2 local_42c;
  int local_42a;
  uint local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_490 = param_5;
  local_440 = param_2;
  if (param_4 == (long *)0x0) {
    uVar13 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar13,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "albumInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_4 = 0;
    local_460 = param_4;
    if (param_1 != 0) {
      cVar5 = '\x01';
      local_448 = param_1;
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar13 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar13,0x10);
        if (cVar5 != '\0') {
          local_238 = 0x8220202;
          local_234 = "Assertion failure (expected to be true)";
          local_22c = 0x822;
          local_22a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x16);
        }
        cVar5 = FUN_1001782e9(0,1);
      }
      if ((local_440 != 0) && (cVar5 != '\0')) {
        local_458 = *(long *)(local_440 + 0x10);
        if (*(long *)(local_440 + 0x10) == 0) {
          local_458 = local_448;
        }
        if ((*(byte *)(local_458 + 0x1bb5) & 4) != 0) {
          uVar13 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar13,0x10);
          if (cVar5 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "trackTrackData->dontGroupTracksInAlbums == false";
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (param_3 == '\0') {
          uVar15 = FUN_1004744bf(local_440,0);
          if ((uVar15 & 0x200004) != 0) {
            FUN_1001b7a44(local_488);
            FUN_1001b7a44(local_4b0);
            local_238 = local_238 & 0xffff0000;
            lVar18 = local_458 + 0x1c60;
            FUN_1001dccc7(lVar18);
            FUN_10047d1cb(&local_438,local_440,PTR_cf_podcast_feed_url_100844b30);
            FUN_1001b80b2(local_488,&local_438);
            FUN_1001b7a50(&local_438);
            cVar5 = FUN_1001b8428(local_488);
            if (cVar5 == '\0') {
              FUN_1001bb41a(local_488,&local_238);
            }
            else {
              FUN_1004772c4(local_440,&local_238);
            }
            if (local_458 != local_448) {
              FUN_1001dccc7(local_448 + 0x1c60);
            }
            lVar14 = FUN_100273cfb(local_448);
            for (; lVar14 != 0; lVar14 = FUN_100273e3a(lVar14)) {
              if (*(int *)(lVar14 + 0x10) == 3) {
                if (*(long *)(lVar14 + 0x100) == 0) {
                  cVar5 = FUN_1001b8428(local_488);
                  if (cVar5 != '\0') {
                    FUN_1001de8ee(lVar14 + 0xb8,&local_438);
                    cVar5 = FUN_1001e3edc(&local_238,&local_438,1);
                    if (cVar5 != '\0') goto LAB_10027517f;
                  }
                }
                else {
                  cVar5 = FUN_1001b8428(local_488);
                  if (cVar5 == '\0') {
                    FUN_1003a4bd4(&local_4a0,lVar14);
                    iVar9 = FUN_1001b9c66(local_488,&local_4a0);
                    FUN_1001b7a50(&local_4a0);
                    if (iVar9 == 0) {
LAB_10027517f:
                      lVar14 = FUN_1003a0291(lVar14);
                      *local_460 = lVar14;
                      break;
                    }
                  }
                }
              }
            }
            FUN_1001dcd18(lVar18);
            lVar14 = local_448;
            if (local_458 == local_448) {
              if (*local_460 != 0) goto LAB_10027526f;
              local_4a0 = *(uint *)(local_440 + 0xe4);
              iVar11 = FUN_1001dcecf(local_448 + 0x1c60);
              iVar9 = local_42a;
              if ((iVar11 != -0x80) && (iVar11 != 0)) {
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                iVar9 = local_42a;
                goto joined_r0x000100275225;
              }
LAB_1002752c0:
              local_42a = iVar9;
              iVar9 = FUN_100273b58(lVar14,local_4a0,local_488,local_4b0,0,4,local_460);
              if (iVar9 != 0) {
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  local_438 = 0x8220202;
                  uStack_434 = 0x7a0a90;
                  uStack_430 = 1;
                  local_42c = 0x400;
                  local_42a = iVar9;
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_438,
                                      0x12);
                }
              }
              FUN_1003a2e0a(*local_460,*(undefined8 *)(local_440 + 0x28));
            }
            else {
              lVar14 = local_448 + 0x1c60;
              FUN_1001dcd18(lVar14);
              if (*local_460 == 0) {
                local_4a0 = 0;
                iVar11 = FUN_1001de586(lVar18,*(undefined4 *)(local_440 + 0xe4),lVar14);
                lVar14 = local_448;
                iVar9 = local_42a;
                if ((iVar11 != -0x80) && (iVar11 != 0)) {
                  uVar13 = FUN_1001cc310();
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  iVar9 = local_42a;
joined_r0x000100275225:
                  local_42a = iVar11;
                  if (cVar5 != '\0') {
                    local_42c = 0x400;
                    uStack_430 = 1;
                    uStack_434 = 0x7a0a90;
                    local_438 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_438
                                        ,0x12);
                    iVar9 = local_42a;
                  }
                }
                goto LAB_1002752c0;
              }
LAB_10027526f:
              iVar9 = 0;
            }
            FUN_1001b7a50(local_4b0);
            FUN_1001b7a50(local_488);
            goto LAB_100274d58;
          }
          if ((uVar15 & 0x40) != 0) {
            iVar9 = FUN_1002744b8(local_448,local_458,local_440,local_460);
            goto LAB_100274d58;
          }
          if ((uVar15 & 0xc00000) != 0) {
            iVar9 = FUN_100274056(local_448,local_458,local_440,local_460);
            goto LAB_100274d58;
          }
        }
        uVar8 = 0;
        local_478 = local_478 & 0xffffffff00000000;
        if ((*(byte *)(local_440 + 0xc2) & 1) != 0) {
          uVar8 = FUN_1004744bf(local_440,0);
          uVar8 = uVar8 & 0xffde5ffb;
          local_478 = CONCAT44(local_478._4_4_,
                               (int)CONCAT71((int7)((ulong)extraout_RDX >> 8),
                                             uVar8 == 0x400 || uVar8 == 2));
        }
        local_468 = *(int *)(local_440 + 0xe0);
        local_4b4 = local_468;
        if (local_468 == 0) {
          local_4b4 = *(int *)(local_440 + 0xdc);
        }
        if (*(int *)(local_440 + 0xe4) == 0) {
          iVar9 = 0;
          iVar11 = local_4b4;
          if (((*(byte *)(local_440 + 0xc2) & 1) != 0) && ((char)local_478 == '\0')) {
            local_490 = (long *)CONCAT44(local_490._4_4_,local_4b4);
            lVar18 = local_458 + 0x1cb0;
            FUN_1001dccc7();
            if ((uVar8 & 0x20) != 0) {
              if (local_468 == 0) {
                iVar9 = FUN_100477ba5(local_440,local_488,&local_450);
              }
              else {
                iVar9 = FUN_1004781bb(local_440,local_488,&local_450);
              }
              if (iVar9 == 0) {
                iVar9 = FUN_1004781bb(local_440,local_4b0,&local_464);
              }
              else {
                local_4b0[0] = 0;
                local_464 = 0;
              }
              if (iVar9 != -0x80) {
                if (iVar9 == 0) {
                  if (local_458 != local_448) {
                    FUN_1001dccc7(local_448 + 0x1cb0);
                  }
                  lVar14 = FUN_100273cfb(local_448);
                  iVar9 = 0;
                  for (; lVar14 != 0; lVar14 = FUN_100273e3a(lVar14)) {
                    if ((*(int *)(lVar14 + 0x10) == 2) &&
                       (((*(long *)(lVar14 + 0xb8) == 0 || (*(int *)(lVar14 + 0xc0) == 0)) &&
                        (uVar15 = FUN_1003a16fa(lVar14), (uVar15 & 0x20) != 0)))) {
                      if (local_488[0] == 0) {
                        if (*(int *)(lVar14 + 0x100) == 0) {
LAB_1002761cd:
                          lVar14 = FUN_1003a0291(lVar14);
                          *local_460 = lVar14;
                          break;
                        }
                      }
                      else if (((*(int *)(lVar14 + 0x100) != 0) &&
                               ((local_468 != 0 ||
                                ((*(uint *)(local_440 + 0xc2) >> 10 & 1) ==
                                 (uint)*(byte *)(lVar14 + 0x108))))) &&
                              (iVar9 = FUN_1003a28b8(lVar14,&local_438,&local_4a0), iVar9 != -0x80))
                      {
                        if (iVar9 != 0) {
                          uVar13 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 != '\0') {
                            local_238 = 0x8220202;
                            local_234 = "Assertion failure";
                            local_22c = 0x400;
                            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                &local_238,0x12);
                          }
                          if (iVar9 != 0) goto LAB_100275ae6;
                        }
                        uVar4 = local_450;
                        lVar16 = local_488[0];
                        local_478 = CONCAT44(uStack_434,local_438);
                        local_44c = local_4a0;
                        uVar10 = FUN_1003a3194();
                        cVar5 = FUN_1001e339d(lVar16,uVar4,local_478,local_44c,uVar10);
                        iVar9 = 0;
                        if (cVar5 != '\0') goto LAB_1002761cd;
                      }
                    }
LAB_100275ae6:
                  }
                  bVar21 = local_458 == local_448;
                  FUN_1001dcd18(lVar18);
                  goto LAB_100276289;
                }
                uVar13 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar13,0x10);
                if (cVar5 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x400;
                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                  __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                      0x12);
                }
              }
              FUN_1001dcd18(lVar18);
              goto LAB_100274d58;
            }
            if (local_468 == 0) {
              iVar9 = FUN_100477ba5(local_440,local_488,&local_450);
            }
            else {
              iVar9 = FUN_1004781bb(local_440,local_488,&local_450);
            }
            if (iVar9 == 0) {
              iVar9 = FUN_1004781bb(local_440,local_4b0,&local_464);
            }
            else {
              local_4b0[0] = 0;
              local_464 = 0;
            }
            if (iVar9 != -0x80) {
              if (iVar9 == 0) {
                if (local_458 != local_448) {
                  FUN_1001dccc7(local_448 + 0x1cb0);
                }
                lVar14 = FUN_100273cfb(local_448);
                iVar9 = 0;
                for (; lVar14 != 0; lVar14 = FUN_100273e3a(lVar14)) {
                  if (((*(int *)(lVar14 + 0x10) != 2) ||
                      ((*(long *)(lVar14 + 0xb8) != 0 && (*(int *)(lVar14 + 0xc0) != 0)))) ||
                     ((uVar15 = FUN_1003a16fa(lVar14), (uVar15 & 0x402) != 0 ||
                      (cVar5 = FUN_100273f7c(lVar14), cVar5 != '\0')))) goto LAB_1002756a1;
                  if (((*(byte *)(local_440 + 0xc3) & 4) != 0) &&
                     (*(char *)(lVar14 + 0x108) != '\0')) {
                    if (local_4b0[0] != 0) {
                      if (*(int *)(lVar14 + 0x104) == 0) goto LAB_100275796;
                      iVar9 = FUN_1003a2aaa(lVar14,&local_438,&local_4a0);
                      bVar21 = true;
                      if (iVar9 != -0x80) {
                        if (iVar9 != 0) {
                          uVar13 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 != '\0') {
                            local_238 = 0x8220202;
                            local_234 = "Assertion failure";
                            local_22c = 0x400;
                            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                &local_238,0x12);
                          }
                          if (iVar9 != 0) goto LAB_100275798;
                        }
                        uVar4 = local_464;
                        lVar16 = local_4b0[0];
                        local_478 = CONCAT44(uStack_434,local_438);
                        local_44c = local_4a0;
                        uVar10 = FUN_1003a3194();
                        cVar5 = FUN_1001e339d(lVar16,uVar4,local_478,local_44c,uVar10);
                        iVar9 = 0;
                        if (cVar5 != '\0') goto LAB_10027625e;
                      }
                      goto LAB_100275798;
                    }
                    if (*(int *)(lVar14 + 0x104) != 0) goto LAB_100275796;
LAB_10027625e:
                    lVar14 = FUN_1003a0291(lVar14);
                    *local_460 = lVar14;
                    break;
                  }
LAB_100275796:
                  bVar21 = false;
LAB_100275798:
                  if (local_488[0] == 0) {
                    if ((*(int *)(lVar14 + 0x100) == 0) &&
                       ((*(uint *)(local_440 + 0xc2) >> 10 & 1) == (uint)*(byte *)(lVar14 + 0x108)))
                    goto LAB_10027625e;
                  }
                  else if (*(int *)(lVar14 + 0x100) != 0) {
                    if (local_468 == 0) {
                      if ((*(uint *)(local_440 + 0xc2) >> 10 & 1) == (uint)*(byte *)(lVar14 + 0x108)
                         ) goto LAB_10027581a;
                    }
                    else if (!bVar21) {
LAB_10027581a:
                      iVar9 = FUN_1003a28b8(lVar14,&local_438,&local_4a0);
                      if (iVar9 != -0x80) {
                        if (iVar9 != 0) {
                          uVar13 = FUN_1001cc310();
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 != '\0') {
                            local_238 = 0x8220202;
                            local_234 = "Assertion failure";
                            local_22c = 0x400;
                            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                                &local_238,0x12);
                          }
                          if (iVar9 != 0) goto LAB_1002756a1;
                        }
                        uVar4 = local_450;
                        lVar16 = local_488[0];
                        uVar13 = CONCAT44(uStack_434,local_438);
                        local_478 = CONCAT44(local_478._4_4_,local_4a0);
                        uVar10 = FUN_1003a3194();
                        cVar5 = FUN_1001e339d(lVar16,uVar4,uVar13,local_478 & 0xffffffff,uVar10);
                        iVar9 = 0;
                        if (cVar5 != '\0') goto LAB_10027625e;
                      }
                    }
                  }
LAB_1002756a1:
                }
                bVar21 = local_458 == local_448;
                FUN_1001dcd18(lVar18);
LAB_100276289:
                iVar11 = (int)local_490;
                if (!bVar21) {
                  FUN_1001dcd18(local_448 + 0x1cb0,(int)local_490);
                  iVar11 = (int)local_490;
                }
                goto LAB_1002762ac;
              }
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
            FUN_1001dcd18(lVar18);
            goto LAB_100274d58;
          }
LAB_1002762ac:
          if (*local_460 != 0) goto LAB_100274d58;
          if (local_458 == local_448) {
            lVar18 = local_448 + 0x1cb0;
            iVar9 = FUN_1001dcecf(lVar18,iVar11);
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
            iVar9 = FUN_1001dcecf(lVar18,*(undefined4 *)(local_440 + 0xe0));
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
            local_438 = *(undefined4 *)(local_440 + 0xe0);
          }
          else {
            lVar18 = local_458 + 0x1cb0;
            lVar14 = local_448 + 0x1cb0;
            iVar9 = FUN_1001de586(lVar18,iVar11,lVar14,&local_4b4);
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
            iVar9 = FUN_1001de586(lVar18,*(undefined4 *)(local_440 + 0xe0),lVar14,&local_438);
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
          }
          uVar4 = local_438;
          iVar9 = local_4b4;
          uVar8 = *(uint *)(local_440 + 0xc2);
          uVar7 = FUN_100474865();
          iVar9 = FUN_1002738dc(local_448,0,iVar9,uVar4,(byte)(uVar8 >> 10) & 1,0,0,uVar7,local_460)
          ;
          if (iVar9 != 0) {
            uVar13 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar13,0x10);
            if (cVar5 != '\0') {
              local_238 = 0x8220202;
              local_234 = "Assertion failure";
              local_22c = 0x400;
              local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x12)
              ;
            }
            goto LAB_100274d58;
          }
          FUN_1003a2e0a(*local_460,*(undefined8 *)(local_440 + 0x28));
LAB_100276526:
          iVar9 = 0;
          goto LAB_100274d58;
        }
        lVar18 = local_458 + 0x1c60;
        FUN_1001dccc7();
        iVar9 = FUN_10047750f(local_440,&local_438,&local_4b8);
        if (iVar9 != -0x80) {
          if (iVar9 == 0) {
            if (local_4b8 == 0) {
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x822;
                local_22a = "albumNameLen != 0";
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              FUN_1001dcd18(lVar18);
              goto LAB_100276526;
            }
            bVar21 = local_468 == 0;
            lVar14 = local_458 + 0x1cb0;
            FUN_1001dccc7();
            if (bVar21) {
              iVar9 = FUN_100477ba5(local_440,local_488,&local_450);
            }
            else {
              iVar9 = FUN_1004781bb(local_440,local_488,&local_450);
            }
            if (iVar9 == 0) {
              iVar9 = FUN_1004781bb(local_440,local_4b0,&local_464);
            }
            else {
              local_4b0[0] = 0;
              local_464 = 0;
            }
            if (iVar9 != -0x80) {
              if (iVar9 == 0) {
                if (local_458 != local_448) {
                  FUN_1001dccc7(local_448 + 0x1c60);
                  FUN_1001dccc7(local_448 + 0x1cb0);
                }
                piVar1 = (int *)(local_440 + 0xe4);
                if ((local_490 == (long *)0x0) || (lVar16 = *local_490, lVar16 == 0)) {
LAB_100275ba1:
                  local_44c = 0;
LAB_100275bab:
                  lVar20 = FUN_100273cfb(local_448);
                  if (lVar20 != 0) goto LAB_100275bbc;
                  iVar9 = 0;
                }
                else {
                  iVar9 = *piVar1;
                  uVar8 = ~(iVar9 << 0xf) + iVar9;
                  uVar8 = (uVar8 >> 10 ^ uVar8) * 9;
                  uVar8 = uVar8 >> 6 ^ uVar8;
                  uVar8 = ~(uVar8 << 0xb) + uVar8;
                  uVar19 = uVar8 >> 0x10 ^ uVar8;
                  uVar17 = uVar19 & *(uint *)((long)local_490 + 0xc);
                  lVar20 = (long)(int)uVar17;
                  iVar11 = *(int *)(lVar16 + lVar20 * 0x10);
                  if (iVar11 != iVar9) {
                    uVar19 = (uVar8 >> 0x17) + ~uVar19;
                    uVar19 = uVar19 * 0x1000 ^ uVar19;
                    uVar19 = uVar19 >> 7 ^ uVar19;
                    uVar19 = uVar19 * 4 ^ uVar19;
                    uVar8 = 0;
                    do {
                      if (iVar11 == 0) goto LAB_100275ba1;
                      if (uVar8 == 0) {
                        uVar8 = uVar19 >> 0x14 ^ uVar19 | 1;
                      }
                      uVar17 = uVar17 + uVar8 & *(uint *)((long)local_490 + 0xc);
                      lVar20 = (long)(int)uVar17;
                      iVar11 = *(int *)(lVar16 + lVar20 * 0x10);
                    } while (iVar11 != iVar9);
                  }
                  lVar20 = *(long *)(lVar16 + 8 + lVar20 * 0x10);
                  local_44c = (uint)CONCAT71((int7)((ulong)lVar16 >> 8),lVar20 != 0);
                  if (lVar20 == 0) goto LAB_100275bab;
LAB_100275bbc:
                  iVar9 = 0;
                  do {
                    cVar5 = FUN_1003a2088(lVar20);
                    cVar6 = FUN_100474865(local_440);
                    if ((((cVar5 == cVar6) && (*(int *)(lVar20 + 0x10) == 2)) &&
                        (*(long *)(lVar20 + 0xb8) != 0)) && (*(int *)(lVar20 + 0xc0) != 0)) {
                      FUN_1003a0f7a(lVar20,0,&local_4a0,&local_46c);
                      uVar4 = local_46c;
                      iVar9 = local_4b8;
                      uVar2 = CONCAT44(uStack_434,local_438);
                      uVar13 = CONCAT44(uStack_49c,local_4a0);
                      uVar10 = FUN_1003a3194();
                      cVar5 = FUN_1001e339d(uVar2,iVar9,uVar13,uVar4,uVar10);
                      iVar9 = 0;
                      if (cVar5 != '\0') {
                        bVar3 = 1;
                        iVar11 = iVar9;
                        if (((*(byte *)(local_440 + 0xc3) & 4) != 0) &&
                           (*(char *)(lVar20 + 0x108) != '\0')) {
                          if (local_4b0[0] != 0) {
                            if (*(int *)(lVar20 + 0x104) != 0) {
                              iVar11 = FUN_1003a2aaa(lVar20,&local_4a0,&local_46c);
                              if (iVar11 == -0x80) {
LAB_100275ce1:
                                bVar3 = 0;
                              }
                              else {
                                if (iVar11 != 0) {
                                  uVar13 = FUN_1001cc310();
                                  cVar5 = _os_log_type_enabled(uVar13);
                                  if (cVar5 != '\0') {
                                    local_238 = 0x8220202;
                                    local_234 = "Assertion failure";
                                    local_22c = 0x400;
                                    local_22a = (char *)CONCAT44(local_22a._4_4_,iVar11);
                                    __os_log_error_impl(0x100000000,uVar13,0x10,
                                                        "%{public}s: err == (%d)",&local_238,0x12);
                                  }
                                  if (iVar11 != 0) goto LAB_100275ce1;
                                }
                                uVar10 = local_464;
                                uVar4 = local_46c;
                                lVar16 = local_4b0[0];
                                uVar13 = CONCAT44(uStack_49c,local_4a0);
                                uVar12 = FUN_1003a3194();
                                cVar5 = FUN_1001e339d(lVar16,uVar10,uVar13,uVar4,uVar12);
                                bVar3 = 0;
                                iVar9 = 0;
                                iVar11 = iVar9;
                                if (cVar5 != '\0') goto LAB_100276247;
                              }
                            }
                            goto LAB_100275d36;
                          }
                          iVar9 = 0;
                          iVar11 = 0;
                          if (*(int *)(lVar20 + 0x104) != 0) goto LAB_100275d36;
LAB_100276247:
                          lVar16 = FUN_1003a0291(lVar20);
                          *local_460 = lVar16;
                          break;
                        }
LAB_100275d36:
                        iVar9 = iVar11;
                        if (local_488[0] == 0) {
                          if ((*(int *)(lVar20 + 0x100) == 0) &&
                             ((*(uint *)(local_440 + 0xc2) >> 10 & 1) ==
                              (uint)*(byte *)(lVar20 + 0x108))) goto LAB_100276247;
                        }
                        else if (*(int *)(lVar20 + 0x100) != 0) {
                          if (local_468 == 0) {
                            if (((*(uint *)(local_440 + 0xc2) >> 10 & 1) ==
                                 (uint)*(byte *)(lVar20 + 0x108)) && ((char)local_478 == '\0'))
                            goto LAB_100275dd1;
                          }
                          else if ((bool)(bVar3 & (char)local_478 == '\0')) {
LAB_100275dd1:
                            iVar9 = FUN_1003a28b8(lVar20,&local_4a0,&local_46c);
                            if (iVar9 != -0x80) {
                              if (iVar9 != 0) {
                                uVar13 = FUN_1001cc310();
                                cVar5 = _os_log_type_enabled(uVar13);
                                if (cVar5 != '\0') {
                                  local_238 = 0x8220202;
                                  local_234 = "Assertion failure";
                                  local_22c = 0x400;
                                  local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                                  __os_log_error_impl(0x100000000,uVar13,0x10,
                                                      "%{public}s: err == (%d)",&local_238,0x12);
                                }
                                if (iVar9 != 0) goto LAB_100275e56;
                              }
                              uVar10 = local_450;
                              uVar4 = local_46c;
                              lVar16 = local_488[0];
                              uVar13 = CONCAT44(uStack_49c,local_4a0);
                              uVar12 = FUN_1003a3194();
                              cVar5 = FUN_1001e339d(lVar16,uVar10,uVar13,uVar4,uVar12);
                              iVar9 = 0;
                              if (cVar5 != '\0') goto LAB_100276247;
                            }
                          }
                        }
                      }
                    }
LAB_100275e56:
                    if ((local_44c & 1) == 0) {
                      lVar20 = FUN_100273e3a(lVar20);
                    }
                    else {
                      lVar20 = FUN_100273cfb(local_448);
                      local_44c = 0;
                    }
                  } while (lVar20 != 0);
                }
                bVar21 = local_458 != local_448;
                FUN_1001dcd18(lVar18);
                FUN_1001dcd18(lVar14);
                if (bVar21) {
                  FUN_1001dcd18(local_448 + 0x1c60);
                  FUN_1001dcd18(local_448 + 0x1cb0);
                }
                if (*local_460 == 0) {
                  iVar9 = FUN_100274056(local_448,local_458,local_440,local_460);
                }
                if ((((local_44c & 1) == 0) && (local_490 != (long *)0x0)) && (*local_460 != 0)) {
                  FUN_1002781b2(&local_238,local_490,piVar1);
                }
                goto LAB_100274d58;
              }
              uVar13 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                local_238 = 0x8220202;
                local_234 = "Assertion failure";
                local_22c = 0x400;
                local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,
                                    0x12);
              }
            }
            FUN_1001dcd18(lVar18);
            FUN_1001dcd18(lVar14);
            goto LAB_100274d58;
          }
          uVar13 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar13,0x10);
          if (cVar5 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x400;
            local_22a = (char *)CONCAT44(local_22a._4_4_,iVar9);
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x12);
          }
        }
        FUN_1001dcd18(lVar18);
        goto LAB_100274d58;
      }
    }
    uVar13 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar13,0x10);
    if (cVar5 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "TrackDataIsValid(albumTrackData) && (trackInfo != nullptr)";
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar9 = -0x32;
LAB_100274d58:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

