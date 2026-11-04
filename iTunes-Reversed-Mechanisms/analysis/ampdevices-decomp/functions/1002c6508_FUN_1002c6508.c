// name: FUN_1002c6508
// address: 1002c6508

int FUN_1002c6508(long param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  short *psVar23;
  char *pcVar24;
  int iVar25;
  char *pcVar26;
  long *plVar27;
  uint uVar28;
  long *plVar29;
  ulong uVar30;
  bool bVar31;
  undefined4 *puVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  int *piVar37;
  int *piVar38;
  undefined8 uVar39;
  int *piVar40;
  undefined4 *puVar41;
  undefined8 uVar42;
  undefined1 *puVar43;
  undefined8 uVar44;
  undefined4 *puVar45;
  undefined8 uVar46;
  undefined4 *puVar47;
  undefined8 uVar48;
  undefined4 uVar49;
  undefined8 in_stack_fffffffffffffa20;
  undefined8 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined1 local_524 [4];
  undefined8 *local_520;
  undefined4 local_518;
  uint local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  int local_504;
  int local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  int local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  uint local_4c0;
  uint local_4bc;
  uint local_4b8;
  uint local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  uint local_4a4;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  double local_488;
  undefined4 local_47c;
  char *local_478;
  uint local_46c;
  char *local_468;
  char *local_460;
  short local_458 [2];
  char *local_454;
  undefined2 local_44c;
  undefined8 local_44a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  uVar52 = (undefined4)((ulong)in_stack_fffffffffffffa20 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_478 = (char *)0x0;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    if (param_2 != 0x7469686d) {
      iVar7 = 0;
      if (param_2 == 0x746c686d) {
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          local_458[0] = 0x202;
          local_458[1] = 0x822;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "objectKind != kDDBTrackListHeaderMagic";
          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",local_458,0x16);
        }
        iVar7 = 0;
        FUN_1001782e9(0,0);
      }
      goto LAB_1002c6e11;
    }
    if (param_4 != 0) {
      uVar16 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar16,0x10);
      if (cVar4 != '\0') {
        local_458[0] = 0x202;
        local_458[1] = 0x822;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = "objectSize == 0";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",local_458,0x16);
      }
      FUN_1001782e9(0,0);
      *(undefined1 *)(param_1 + 0x50) = 0;
      goto LAB_1002c6629;
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
LAB_1002c664b:
    iVar7 = FUN_1002c53b6(param_1,param_1 + 0x230,"item","pid","sort_title");
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        iVar7 = FUN_1002c53b6(param_1,param_1 + 0x430,"item","pid","sort_artist");
        if (iVar7 != -0x80) {
          if (iVar7 == 0) {
            iVar7 = FUN_1002c53b6(param_1,param_1 + 0x630,"item","pid","sort_album");
            if (iVar7 != -0x80) {
              if (iVar7 == 0) {
                iVar7 = FUN_1002c53b6(param_1,param_1 + 0x830,"item","pid","sort_album_artist");
                if (iVar7 != -0x80) {
                  if (iVar7 == 0) {
                    iVar7 = FUN_1002c53b6(param_1,param_1 + 0xa30,"item","pid","sort_composer");
                    if (iVar7 != -0x80) {
                      if (iVar7 == 0) {
                        iVar7 = FUN_1002c53b6(param_1,param_1 + 0xc30,"video_info","item_pid",
                                              "sort_series_name");
                        if ((iVar7 != -0x80) && (iVar7 != 0)) {
                          uVar16 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar4 != '\0') {
                            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                            goto LAB_1002c7bb3;
                          }
                        }
                      }
                      else {
                        uVar16 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar4 != '\0') {
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
LAB_1002c7bb3:
                          local_44c = 0x400;
                          local_454 = "Assertion failure";
                          local_458[0] = 0x202;
                          local_458[1] = 0x822;
                          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                              local_458,0x12);
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar4 != '\0') {
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                      goto LAB_1002c7bb3;
                    }
                  }
                }
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar16,0x10);
                if (cVar4 != '\0') {
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                  goto LAB_1002c7bb3;
                }
              }
            }
          }
          else {
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
              goto LAB_1002c7bb3;
            }
          }
        }
      }
      else {
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
          goto LAB_1002c7bb3;
        }
      }
    }
    if ((*(char *)(param_1 + 0x51) == '\x01') && (199 < *(ulong *)(param_1 + 0x58))) {
      if (iVar7 == 0) {
        iVar7 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
      }
      else {
        iVar7 = FUN_1001d3677();
      }
      if ((iVar7 != -0x80) && (iVar7 != 0)) {
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
LAB_1002c7c60:
          local_44c = 0x400;
          local_454 = "Assertion failure";
          local_458[0] = 0x202;
          local_458[1] = 0x822;
          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_458,0x12);
        }
      }
LAB_1002c7c1d:
      *(undefined1 *)(param_1 + 0x51) = 0;
LAB_1002c7c21:
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    goto switchD_1002c65b1_caseD_7;
  }
  iVar7 = 0;
  pcVar26 = "item";
  switch(param_2) {
  case 1:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0x230);
    pcVar24 = "title";
    goto LAB_1002c6d6e;
  case 2:
    if (param_4 != 0) {
      iVar7 = FUN_1002c4ed2(param_1,param_3,param_4,local_458);
      if (iVar7 == 0) {
        if ((char)local_458[0] == '/') {
          uVar16 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar16,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "fullFilePath[0] != \'/\'";
            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        plVar18 = (long *)**(long **)(param_1 + 0x18);
        plVar27 = *(long **)(param_1 + 0x18) + 1;
        local_460 = (char *)((ulong)local_460 & 0xffffffff00000000);
        if (plVar18 != plVar27) {
          do {
            bVar1 = *(byte *)(plVar18 + 5);
            if ((bVar1 & 1) == 0) {
              pcVar26 = _strstr((char *)local_458,(char *)((long)plVar18 + 0x29));
              if (pcVar26 != (char *)0x0) {
                uVar30 = (ulong)(bVar1 >> 1);
LAB_1002c7a86:
                local_460 = (char *)CONCAT44(local_460._4_4_,(int)plVar18[4]);
                FUN_1001dfeed(local_458,0,uVar30);
                break;
              }
            }
            else {
              pcVar26 = _strstr((char *)local_458,(char *)plVar18[7]);
              if (pcVar26 != (char *)0x0) {
                uVar30 = plVar18[6];
                goto LAB_1002c7a86;
              }
            }
            plVar3 = (long *)plVar18[1];
            plVar29 = plVar18;
            if ((long *)plVar18[1] == (long *)0x0) {
              do {
                plVar18 = (long *)plVar29[2];
                bVar31 = (long *)*plVar18 != plVar29;
                plVar29 = plVar18;
              } while (bVar31);
            }
            else {
              do {
                plVar18 = plVar3;
                plVar3 = (long *)*plVar18;
              } while ((long *)*plVar18 != (long *)0x0);
            }
          } while (plVar18 != plVar27);
        }
        if ((char)local_458[0] == '/') {
          FUN_1001dfeed(local_458,0,1);
        }
        local_478 = _sqlite3_mprintf("UPDATE location SET base_location_id=%u,location=\'%q\' WHERE item_pid=%lld"
                                     ,(ulong)local_460 & 0xffffffff,local_458,
                                     *(undefined8 *)(param_1 + 0x38));
        iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
        if ((iVar7 != -0x80) && (iVar7 != 0)) {
          uVar16 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar16,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
        }
      }
      if (iVar7 != -0x80) {
        if (iVar7 == 0) goto LAB_1002c663f;
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          psVar23 = (short *)&local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
          goto LAB_1002c79c0;
        }
      }
    }
    goto switchD_1002c65b1_caseD_7;
  case 3:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0x630);
    pcVar24 = "album";
    goto LAB_1002c6d6e;
  case 4:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0x430);
    pcVar24 = "artist";
    goto LAB_1002c6d6e;
  case 5:
  case 6:
  case 9:
    iVar7 = 0;
    if (param_4 != 0) {
      if (param_2 == 6) {
        local_460 = "location";
        pcVar26 = "item_pid";
        local_468 = "kind_id";
        lVar17 = 0xb8;
      }
      else {
        if (param_2 == 5) {
          local_468 = "genre_id";
          lVar17 = 0x108;
        }
        else {
          local_468 = "category_id";
          lVar17 = 0x158;
        }
        local_460 = "item";
        pcVar26 = (char *)0x0;
      }
      iVar7 = FUN_1002c4f7a(param_1,param_3,param_4,lVar17 + param_1,&local_58);
      if (iVar7 != -0x80) {
        if (iVar7 == 0) {
          iVar7 = FUN_1001d4067(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),local_460,pcVar26,
                                *(undefined8 *)(param_1 + 0x38),local_468,local_58);
          if ((iVar7 != -0x80) && (iVar7 != 0)) {
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              psVar23 = local_458;
              local_458[0] = 0x202;
              local_458[1] = 0x822;
              local_454 = "Assertion failure";
              local_44c = 0x400;
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
              goto LAB_1002c79c0;
            }
          }
        }
        else {
          uVar16 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar16,0x10);
          if (cVar4 != '\0') {
            psVar23 = local_458;
            local_458[0] = 0x202;
            local_458[1] = 0x822;
            local_454 = "Assertion failure";
            local_44c = 0x400;
            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
            goto LAB_1002c79c0;
          }
        }
      }
    }
  case 7:
  case 0xb:
  case 0x15:
  case 0x18:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x26:
  case 0x28:
    goto switchD_1002c65b1_caseD_7;
  case 8:
    pcVar24 = "comment";
    uVar5 = 0;
    iVar7 = 0;
    goto LAB_1002c6ddd;
  case 10:
    pcVar24 = "radio_stream_status";
    break;
  case 0xc:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0xa30);
    pcVar24 = "composer";
    goto LAB_1002c6d6e;
  case 0xd:
    pcVar24 = "grouping";
    break;
  case 0xe:
    pcVar24 = "description_long";
    break;
  case 0xf:
    iVar7 = 0;
    if (param_4 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
      pcVar26 = "external_guid";
LAB_1002c6b8b:
      iVar7 = FUN_1001d3f2d(uVar21,"podcast_info",0,uVar16,pcVar26,param_4,param_3);
    }
    goto switchD_1002c65b1_caseD_7;
  case 0x10:
    iVar7 = 0;
    if (param_4 != 0) {
      uVar16 = *(undefined8 *)(param_1 + 0x38);
      uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68);
      pcVar26 = "feed_url";
      goto LAB_1002c6b8b;
    }
    goto switchD_1002c65b1_caseD_7;
  case 0x11:
    iVar7 = 0;
    if (param_4 != 0) {
      iVar7 = FUN_1001d4025(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),"chapter","item_pid",
                            *(undefined8 *)(param_1 + 0x38),"data",param_4,param_3);
    }
    goto switchD_1002c65b1_caseD_7;
  case 0x12:
    pcVar24 = "description";
    break;
  case 0x13:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0xc30);
    pcVar26 = "video_info";
    pcVar24 = "series_name";
    goto LAB_1002c6d6e;
  case 0x14:
    pcVar26 = "video_info";
    pcVar24 = "episode_id";
    break;
  case 0x16:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,param_1 + 0x830);
    pcVar24 = "album_artist";
    goto LAB_1002c6d6e;
  case 0x17:
    *(undefined2 *)(param_1 + 0x430) = 0;
    pcVar24 = "sort_artist";
    goto LAB_1002c6ddb;
  case 0x19:
    iVar7 = FUN_1002c5122(param_1,param_3,param_4,local_458);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        if (local_458[0] == 0) {
LAB_1002c6ad9:
          pcVar26 = "video_info";
          pcVar24 = "extended_content_rating";
          break;
        }
        FUN_10057b535(local_458,0,0,&local_47c,0);
        iVar7 = FUN_1001d4067(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),"item",0,
                              *(undefined8 *)(param_1 + 0x38),"content_rating_level",local_47c);
        if (iVar7 != -0x80) {
          if (iVar7 == 0) goto LAB_1002c6ad9;
          uVar16 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar16,0x10);
          if (cVar4 != '\0') {
            psVar23 = (short *)&local_58;
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
            goto LAB_1002c79c0;
          }
        }
      }
      else {
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          psVar23 = (short *)&local_58;
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
          goto LAB_1002c79c0;
        }
      }
    }
    goto switchD_1002c65b1_caseD_7;
  case 0x1a:
    pcVar26 = "video_info";
    pcVar24 = "movie_info";
    break;
  case 0x1b:
    *(undefined2 *)(param_1 + 0x230) = 0;
    pcVar24 = "sort_title";
    goto LAB_1002c6ddb;
  case 0x1c:
    *(undefined2 *)(param_1 + 0x630) = 0;
    pcVar24 = "sort_album";
    goto LAB_1002c6ddb;
  case 0x1d:
    *(undefined2 *)(param_1 + 0x830) = 0;
    pcVar24 = "sort_album_artist";
    goto LAB_1002c6ddb;
  case 0x1e:
    *(undefined2 *)(param_1 + 0xa30) = 0;
    pcVar24 = "sort_composer";
    goto LAB_1002c6ddb;
  case 0x1f:
    *(undefined2 *)(param_1 + 0xc30) = 0;
    pcVar26 = "video_info";
    pcVar24 = "sort_series_name";
LAB_1002c6ddb:
    uVar5 = 1;
    iVar7 = 0;
    goto LAB_1002c6ddd;
  case 0x20:
    iVar7 = 0;
    if (param_4 != 0) {
      iVar7 = FUN_1002c541e(param_1,param_3,param_4);
    }
    goto switchD_1002c65b1_caseD_7;
  case 0x25:
    pcVar26 = "store_info";
    pcVar24 = "xid";
    break;
  case 0x27:
    pcVar24 = "copyright";
    break;
  case 0x29:
    pcVar24 = "collection_description";
    break;
  case 0x2a:
    pcVar26 = "store_info";
    pcVar24 = "flavor";
    break;
  default:
    if (param_2 == 0x7469686d) {
      *(undefined1 *)(param_1 + 0x50) = 0;
      if (param_4 == 0) goto LAB_1002c664b;
LAB_1002c6629:
      if (((*(uint *)(param_3 + 0xd0) & 0xc61010) == 0) &&
         (((*(uint *)(param_3 + 0xd0) & 0x200004) == 0 || (*(int *)(param_3 + 0x14) != 3)))) {
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        if (*(char *)(param_1 + 0x51) == '\0') {
          iVar7 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
          if (iVar7 != -0x80) {
            if (iVar7 == 0) {
              *(undefined1 *)(param_1 + 0x51) = 1;
              goto LAB_1002c683c;
            }
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              psVar23 = local_458;
              local_458[0] = 0x202;
              local_458[1] = 0x822;
              local_454 = "Assertion failure";
              local_44c = 0x400;
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
              goto LAB_1002c79c0;
            }
          }
        }
        else {
LAB_1002c683c:
          local_520 = (undefined8 *)(param_3 + 0x70);
          FUN_1002cc4f8(local_458,param_1 + 0xa0,param_3 + 0x10);
          if (local_44a._2_1_ == '\0') {
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              local_458[0] = 0x202;
              local_458[1] = 0x822;
              local_454 = "Assertion failure";
              local_44c = 0x822;
              local_44a = "success";
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",local_458,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            iVar7 = -0x6c;
          }
          else {
            *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x70);
            local_460 = (char *)((ulong)local_460 & 0xffffffff00000000);
            local_4a4 = 0;
            if (*(int *)(param_3 + 0x68) != 0) {
              local_4a4 = FUN_100177fb5();
            }
            if (*(int *)(param_3 + 0x20) != 0) {
              uVar8 = FUN_100177fb5();
              local_460 = (char *)CONCAT44(local_460._4_4_,uVar8);
            }
            uVar9 = 0x46494c45;
            if (*(int *)(param_3 + 0x14) == 3) {
              uVar9 = 0x48545450;
            }
            local_4b4 = 0x53485244;
            if (*(int *)(param_3 + 0x14) != 2) {
              local_4b4 = uVar9;
            }
            uVar9 = (uint)(*(char *)(param_3 + 0x1d) != '\0');
            *(uint *)(param_1 + 0x4c) = uVar9;
            if (*(char *)(param_3 + 0x1c) != '\0') {
              uVar9 = uVar9 | 2;
              *(uint *)(param_1 + 0x4c) = uVar9;
            }
            if (*(char *)(param_3 + 0xb1) != '\0') {
              uVar9 = uVar9 | 0x40;
              *(uint *)(param_1 + 0x4c) = uVar9;
            }
            if (*(char *)(param_3 + 0x103) != '\0') {
              *(uint *)(param_1 + 0x4c) = uVar9 | 0x80000000;
            }
            uVar9 = *(uint *)(param_3 + 0x1f8);
            if (uVar9 == 0) {
              uVar9 = *(uint *)(param_3 + 0xd0);
            }
            if ((uVar9 >> 0x14 & 1) == 0) {
              if ((uVar9 >> 0x15 & 1) != 0) {
                uVar9 = uVar9 & 0xffeffffe;
              }
            }
            else {
              uVar9 = uVar9 & 0xfffffffe;
            }
            if (uVar9 == 0x200000) {
              uVar9 = *(uint *)(param_1 + 0x20) & 1 ^ 0x200001;
            }
            puVar47 = &local_4f4;
            puVar45 = &local_4f8;
            puVar43 = local_524;
            puVar41 = &local_4fc;
            piVar40 = &local_500;
            piVar38 = &local_504;
            piVar37 = &local_4b0;
            puVar34 = &local_508;
            puVar32 = &local_50c;
            local_468 = (char *)CONCAT44(local_468._4_4_,uVar9);
            FUN_100467396(uVar9,&local_58,&local_47c,&local_518,&local_514,&local_510,puVar32,
                          puVar34,piVar37,piVar38,piVar40,puVar41,puVar43,puVar45,puVar47);
            if (*(char *)(param_3 + 0xa7) != '\0') {
              local_4b0 = 1;
            }
            iVar2 = local_4b0;
            if (*(int *)(param_3 + 0x40) == 0) {
              iVar25 = 0;
            }
            else {
              iVar25 = (*(int *)(param_3 + 0x40) * 1000) / 0xff;
            }
            local_490 = *(undefined8 *)(param_3 + 0x70);
            local_488 = (double)CONCAT44(local_488._4_4_,local_58);
            local_4a0 = CONCAT44(local_4a0._4_4_,local_47c);
            local_498 = CONCAT44(local_498._4_4_,local_518);
            local_46c = local_514;
            local_4f0 = local_510;
            local_4e8 = local_50c;
            local_4e4 = local_508;
            local_4e0 = local_4fc;
            local_4ec = local_4b0;
            local_4ac = local_504;
            local_4a8 = local_500;
            local_4dc = local_4f8;
            local_4d8 = local_4f4;
            uVar53 = *(undefined4 *)(param_3 + 0x34);
            uVar9 = (uint)*(byte *)(param_3 + 0x92);
            uVar22 = (uint)*(byte *)(param_3 + 0x1e);
            uVar10 = (uint)*(byte *)(param_3 + 0x78);
            uVar11 = (uint)*(byte *)(param_3 + 0xa6);
            uVar12 = (uint)*(byte *)(param_3 + 0xa5);
            uVar13 = (uint)*(byte *)(param_3 + 0x102);
            uVar14 = (uint)*(byte *)(param_3 + 0x215);
            uVar30 = (ulong)*(uint *)(param_3 + 0x160);
            uVar8 = *(undefined4 *)(param_3 + 0x44);
            uVar54 = *(undefined4 *)(param_3 + 0x48);
            uVar55 = *(undefined4 *)(param_3 + 0x28);
            uVar56 = *(undefined4 *)(param_3 + 0x2c);
            uVar57 = *(undefined4 *)(param_3 + 0x30);
            uVar58 = *(undefined4 *)(param_3 + 0x5c);
            uVar59 = *(undefined4 *)(param_3 + 0x60);
            uVar16 = *(undefined8 *)(param_3 + 0x1e4);
            uVar20 = (uint)*(ushort *)(param_3 + 0x7a);
            uVar28 = (uint)*(byte *)(param_3 + 0xa4);
            uVar50 = CONCAT44(uVar52,local_4f4);
            uVar48 = CONCAT44((int)((ulong)puVar47 >> 0x20),local_4f8);
            uVar39 = CONCAT44((int)((ulong)piVar40 >> 0x20),local_4fc);
            uVar36 = CONCAT44((int)((ulong)piVar38 >> 0x20),local_508);
            uVar33 = CONCAT44((int)((ulong)piVar37 >> 0x20),local_50c);
            uVar35 = CONCAT44((int)((ulong)puVar34 >> 0x20),local_510);
            uVar46 = CONCAT44((int)((ulong)puVar45 >> 0x20),local_500);
            uVar44 = CONCAT44((int)((ulong)puVar43 >> 0x20),local_504);
            uVar42 = CONCAT44((int)((ulong)puVar41 >> 0x20),local_4b0);
            uVar21 = CONCAT44((int)((ulong)puVar32 >> 0x20),local_514);
            uVar52 = (int)local_460;
            local_4d4 = uVar53;
            local_4d0 = uVar9;
            local_4cc = uVar22;
            local_4c8 = uVar10;
            local_4c4 = uVar11;
            local_4c0 = uVar12;
            local_4bc = uVar13;
            local_4b8 = uVar14;
            local_478 = _sqlite3_mprintf("INSERT INTO item (pid,media_kind,is_song,is_audio_book,is_music_video,is_movie,is_tv_show,is_home_video,is_ringtone,is_voice_memo,is_podcast,is_itunes_u,is_rental,is_digital_booklet,is_book,date_modified,year,content_rating,is_compilation,is_user_disabled,remember_bookmark,exclude_from_shuffle,part_of_gapless_album,chosen_by_auto_fill,artwork_status,artwork_cache_id,start_time_ms,stop_time_ms,total_time_ms,track_number,track_count,disc_number,disc_count,bpm,relative_volume,genius_id) VALUES (%lld,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%u,%u,%u,%u,%u,%u,%u,%lld,%u,%u,%u,%u,%u,%u,%u,%u,%d,%lld)"
                                         ,local_490,(ulong)local_468 & 0xffffffff,local_58,local_47c
                                         ,local_518,uVar21,uVar35,uVar33,uVar36,uVar39,uVar42,uVar44
                                         ,uVar46,uVar48,uVar50,(int)local_460,uVar53,uVar9,uVar22,
                                         uVar10,uVar11,uVar12,uVar13,uVar14,uVar28,uVar30,uVar8,
                                         uVar54,uVar55,uVar56,uVar57,uVar58,uVar59,uVar20,iVar25,
                                         uVar16);
            iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
            if (iVar7 != -0x80) {
              if (iVar7 == 0) {
                local_478 = _sqlite3_mprintf("INSERT INTO location (item_pid,sub_id,location_type,extension,date_created,file_size)VALUES (%lld,0,%u,%u,%d,%lld)"
                                             ,*(undefined8 *)(param_3 + 0x70),(ulong)local_4b4,
                                             (ulong)*(uint *)(param_3 + 0x18),(ulong)local_4a4,
                                             *(undefined8 *)(param_3 + 300),uVar21,uVar35,uVar33,
                                             uVar36,uVar39,uVar42,uVar44,uVar46,uVar48,uVar50,uVar52
                                             ,uVar53,uVar9,uVar22,uVar10,uVar11,uVar12,uVar13,uVar14
                                             ,uVar28,uVar30,uVar8,uVar54,uVar55,uVar56,uVar57,uVar58
                                             ,uVar59,uVar20,iVar25,uVar16);
                uVar59 = (undefined4)((ulong)uVar46 >> 0x20);
                uVar49 = (undefined4)((ulong)uVar48 >> 0x20);
                uVar51 = (undefined4)((ulong)uVar50 >> 0x20);
                uVar58 = (undefined4)((ulong)uVar44 >> 0x20);
                uVar54 = (undefined4)((ulong)uVar33 >> 0x20);
                uVar56 = (undefined4)((ulong)uVar39 >> 0x20);
                uVar52 = (undefined4)((ulong)uVar21 >> 0x20);
                uVar8 = (undefined4)((ulong)uVar35 >> 0x20);
                uVar55 = (undefined4)((ulong)uVar36 >> 0x20);
                uVar57 = (undefined4)((ulong)uVar42 >> 0x20);
                iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                if (iVar7 != -0x80) {
                  if (iVar7 == 0) {
                    if (((ulong)local_468 & 0x1304def) == 0) {
LAB_1002c76b2:
                      lVar17 = FUN_1002ccbae(param_1 + 0x70,*(undefined4 *)(param_3 + 0x120));
                      if (lVar17 == (long)*(int *)(param_1 + 0x78) * 0x10 +
                                    *(long *)(param_1 + 0x70)) {
                        lVar17 = 0;
LAB_1002c7c78:
                        lVar19 = FUN_1002ccbae(param_1 + 0x88,*(undefined4 *)(param_3 + 0x1e0));
                        if (lVar19 == (long)*(int *)(param_1 + 0x90) * 0x10 +
                                      *(long *)(param_1 + 0x88)) {
                          if (lVar17 != 0) goto LAB_1002c7d9f;
LAB_1002c7e04:
                          local_460 = (char *)((ulong)local_460 & 0xffffffff00000000);
LAB_1002c7e0e:
                          uVar15 = 0;
                          uVar30 = 0;
                          if (*(int *)(param_3 + 0x58) != 0) {
                            uVar9 = FUN_100177fb5();
                            uVar30 = (ulong)uVar9;
                          }
                          if (*(int *)(param_3 + 0xa0) != 0) {
                            uVar15 = FUN_100177fb5();
                          }
                          uVar42 = CONCAT44(uVar58,(int)*(char *)(param_3 + 0x1f));
                          uVar39 = CONCAT44(uVar57,(int)*(char *)(param_3 + 0x1f));
                          uVar36 = CONCAT44(uVar56,*(undefined4 *)(param_3 + 0xb4));
                          uVar33 = CONCAT44(uVar55,*(undefined4 *)(param_3 + 0x6c));
                          uVar35 = CONCAT44(uVar54,*(undefined4 *)(param_3 + 0x9c));
                          uVar21 = CONCAT44(uVar8,*(undefined4 *)(param_3 + 0x98));
                          uVar16 = CONCAT44(uVar52,uVar15);
                          local_478 = _sqlite3_mprintf(
                                                  "INSERT INTO item_stats(item_pid,has_been_played,date_played,play_count_user,play_count_recent,date_skipped,skip_count_user,skip_count_recent,bookmark_time_ms,bookmark_time_ms_common,user_rating,user_rating_common) VALUES (%lld,%u,%d,%u,%u,%d,%u,%u,%u,%u,%d,%d)"
                                                  ,*(undefined8 *)(param_3 + 0x70),
                                                  (ulong)(*(char *)(param_3 + 0xb2) == '\x01'),
                                                  uVar30,(ulong)*(uint *)(param_3 + 0x50),
                                                  (ulong)*(uint *)(param_3 + 0x54),uVar16,uVar21,
                                                  uVar35,uVar33,uVar36,uVar39,uVar42);
                          uVar8 = (undefined4)((ulong)uVar21 >> 0x20);
                          uVar54 = (undefined4)((ulong)uVar35 >> 0x20);
                          uVar52 = (undefined4)((ulong)uVar16 >> 0x20);
                          uVar55 = (undefined4)((ulong)uVar33 >> 0x20);
                          uVar56 = (undefined4)((ulong)uVar36 >> 0x20);
                          uVar57 = (undefined4)((ulong)uVar39 >> 0x20);
                          uVar58 = (undefined4)((ulong)uVar42 >> 0x20);
                          iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                          if (iVar7 != -0x80) {
                            if (iVar7 == 0) {
                              if (*(char *)(param_3 + 0xb1) != '\0') {
                                local_468 = *(char **)(param_3 + 0x70);
                                local_488 = (double)CONCAT44(local_488._4_4_,
                                                             (uint)*(byte *)(param_3 + 0x172));
                                local_4a0 = CONCAT44(local_4a0._4_4_,
                                                     (uint)*(byte *)(param_3 + 0x173));
                                local_498 = CONCAT44(local_498._4_4_,
                                                     (uint)*(byte *)(param_3 + 0x194));
                                local_490 = CONCAT44(local_490._4_4_,
                                                     (uint)*(byte *)(param_3 + 0x103));
                                local_46c = (uint)*(byte *)(param_3 + 0x149);
                                uVar53 = *(undefined4 *)(param_3 + 0x180);
                                uVar21 = CONCAT44(uVar54,(uint)*(byte *)(param_3 + 0x16b));
                                uVar16 = CONCAT44(uVar8,local_46c);
                                local_478 = _sqlite3_mprintf(
                                                  "INSERT INTO video_info (item_pid,has_alternate_audio,has_subtitles,characteristics_valid,has_closed_captions,is_self_contained,is_compressed,is_anamorphic,is_hd,episode_sort_id,season_number,audio_language,audio_track_index,audio_track_id,subtitle_language,subtitle_track_index,subtitle_track_id) VALUES (%lld,%u,%u,%u,%u,%u,%u,%u,%u,%u,%u,%d,%u,%u,%d,%u,%u)"
                                                  ,local_468,(uint)*(byte *)(param_3 + 0x172),
                                                  (uint)*(byte *)(param_3 + 0x173),
                                                  (uint)*(byte *)(param_3 + 0x194),
                                                  (uint)*(byte *)(param_3 + 0x103),
                                                  CONCAT44(uVar52,(uint)(*(char *)(param_3 + 0x148)
                                                                        == '\0')),uVar16,uVar21,
                                                  CONCAT44(uVar55,(uint)*(byte *)(param_3 + 0x196)),
                                                  CONCAT44(uVar56,*(undefined4 *)(param_3 + 0xd8)),
                                                  CONCAT44(uVar57,*(undefined4 *)(param_3 + 0xd4)),
                                                  CONCAT44(uVar58,(int)*(short *)(param_3 + 0x174)),
                                                  CONCAT44(uVar59,(uint)*(ushort *)(param_3 + 0x176)
                                                          ),
                                                  CONCAT44(uVar49,*(undefined4 *)(param_3 + 0x178)),
                                                  CONCAT44(uVar51,(int)*(short *)(param_3 + 0x17c)),
                                                  (uint)*(ushort *)(param_3 + 0x17e),uVar53);
                                uVar8 = (undefined4)((ulong)uVar16 >> 0x20);
                                uVar54 = (undefined4)((ulong)uVar21 >> 0x20);
                                iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                                if (iVar7 != -0x80) {
                                  if (iVar7 == 0) goto LAB_1002c8013;
                                  uVar16 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar16,0x10);
                                  if (cVar4 != '\0') {
                                    psVar23 = local_458;
                                    local_458[0] = 0x202;
                                    local_458[1] = 0x822;
                                    local_454 = "Assertion failure";
                                    local_44c = 0x400;
                                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                    goto LAB_1002c79c0;
                                  }
                                }
                                goto switchD_1002c65b1_caseD_7;
                              }
LAB_1002c8013:
                              local_488 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008
                              ;
                              local_468 = (char *)0x0;
                              if (*(uint *)(param_3 + 0x8c) != 0) {
                                local_468 = (char *)(long)((double)*(uint *)(param_3 + 0x8c) -
                                                          local_488);
                              }
                              cVar4 = FUN_1002c4b3e(param_3);
                              if (cVar4 == '\0') {
                                if (((int)local_460 != 0) ||
                                   (iVar2 != 0 && local_468 != (char *)0x0)) goto LAB_1002c805a;
LAB_1002c82fa:
                                if ((iVar2 == 0 && local_4ac == 0) || (local_468 == (char *)0x0)) {
LAB_1002c8355:
                                  if (*(int *)(param_3 + 0xc4) == 0) {
LAB_1002c83a2:
                                    if (local_4a8 == 0) {
LAB_1002c8439:
                                      iVar7 = 0;
                                      *(undefined2 *)(param_1 + 0x230) = 0;
                                      *(undefined2 *)(param_1 + 0x430) = 0;
                                      *(undefined2 *)(param_1 + 0x630) = 0;
                                      *(undefined2 *)(param_1 + 0x830) = 0;
                                      *(undefined2 *)(param_1 + 0xa30) = 0;
                                      *(undefined2 *)(param_1 + 0xc30) = 0;
                                    }
                                    else {
                                      uVar9 = (uint)((double)*(uint *)(param_3 + 0x18c) - local_488)
                                      ;
                                      if (*(uint *)(param_3 + 0x18c) == 0) {
                                        uVar9 = 0;
                                      }
                                      uVar22 = (uint)((double)*(uint *)(param_3 + 0x184) - local_488
                                                     );
                                      if (*(uint *)(param_3 + 0x184) == 0) {
                                        uVar22 = 0;
                                      }
                                      local_478 = _sqlite3_mprintf(
                                                  "INSERT INTO rental_info (item_pid,is_demo,rental_date_started,rental_duration,rental_playback_date_started,rental_playback_duration) VALUES (%lld,%u,%d,%u,%d,%u)"
                                                  ,*(undefined8 *)(param_3 + 0x70),(ulong)uVar9,
                                                  (ulong)*(uint *)(param_3 + 400),(ulong)uVar22,
                                                  (ulong)*(uint *)(param_3 + 0x188));
                                      iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                                      if (iVar7 != -0x80) {
                                        if (iVar7 == 0) goto LAB_1002c8439;
                                        uVar16 = FUN_1001cc310();
                                        cVar4 = _os_log_type_enabled(uVar16,0x10);
                                        if (cVar4 != '\0') {
                                          psVar23 = local_458;
                                          local_458[0] = 0x202;
                                          local_458[1] = 0x822;
                                          local_454 = "Assertion failure";
                                          local_44c = 0x400;
                                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                          goto LAB_1002c79c0;
                                        }
                                      }
                                    }
                                  }
                                  else {
                                    iVar7 = FUN_1001d4067(*(undefined8 *)
                                                           (*(long *)(param_1 + 0x10) + 0x68),
                                                          "lyrics","item_pid",*local_520,"checksum")
                                    ;
                                    if (iVar7 != -0x80) {
                                      if (iVar7 == 0) goto LAB_1002c83a2;
                                      uVar16 = FUN_1001cc310();
                                      cVar4 = _os_log_type_enabled(uVar16,0x10);
                                      if (cVar4 != '\0') {
                                        psVar23 = local_458;
                                        local_458[0] = 0x202;
                                        local_458[1] = 0x822;
                                        local_454 = "Assertion failure";
                                        local_44c = 0x400;
                                        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                        goto LAB_1002c79c0;
                                      }
                                    }
                                  }
                                }
                                else {
                                  iVar7 = FUN_1001d40ad(*(undefined8 *)
                                                         (*(long *)(param_1 + 0x10) + 0x68),
                                                        "podcast_info","item_pid",*local_520,
                                                        "date_released",local_468);
                                  if (iVar7 != -0x80) {
                                    if (iVar7 == 0) goto LAB_1002c8355;
                                    uVar16 = FUN_1001cc310();
                                    cVar4 = _os_log_type_enabled(uVar16,0x10);
                                    if (cVar4 != '\0') {
                                      psVar23 = local_458;
                                      local_458[0] = 0x202;
                                      local_458[1] = 0x822;
                                      local_454 = "Assertion failure";
                                      local_44c = 0x400;
                                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                      goto LAB_1002c79c0;
                                    }
                                  }
                                }
                              }
                              else {
LAB_1002c805a:
                                lVar17 = *(long *)(param_3 + 0x198);
                                if (lVar17 == 0) {
                                  lVar17 = *(long *)(param_3 + 0x1a0);
                                }
                                uVar30 = (ulong)(uint)(int)((double)*(uint *)(param_3 + 0xdc) -
                                                           local_488);
                                if (*(uint *)(param_3 + 0xdc) == 0) {
                                  uVar30 = 0;
                                }
                                local_498 = *(undefined8 *)(param_3 + 0x70);
                                local_490 = CONCAT44(local_490._4_4_,
                                                     (uint)*(byte *)(param_3 + 0x197));
                                local_4a0 = *(undefined8 *)(param_3 + 0x1b0);
                                local_46c = *(uint *)(param_3 + 0x94);
                                local_478 = _sqlite3_mprintf(
                                                  "INSERT INTO store_info (item_pid,store_kind,date_purchased,date_released,store_item_id,account_id,key_versions,key_platform_id,key_id,key_id2,artist_id,composer_id,genre_id,playlist_id,storefront_id,store_link_id) VALUES (%lld,%u,%d,%lld,%lld,%lld,%u,%u,%lld,%lld,%lld,%lld,%lld,%lld,%lld,%u)"
                                                  ,local_498,(uint)*(byte *)(param_3 + 0x197),uVar30
                                                  ,local_468,local_4a0,lVar17,
                                                  CONCAT44(uVar8,local_46c),
                                                  CONCAT44(uVar54,*(undefined4 *)(param_3 + 0x1ec)),
                                                  *(undefined8 *)(param_3 + 0x1a8),
                                                  *(undefined8 *)(param_3 + 0x204),
                                                  *(undefined8 *)(param_3 + 0x1c0),
                                                  *(undefined8 *)(param_3 + 0x1c8),
                                                  *(undefined8 *)(param_3 + 0x1b8),
                                                  *(undefined8 *)(param_3 + 0x1d0),
                                                  *(undefined8 *)(param_3 + 0x1d8),(int)local_460,
                                                  uVar53);
                                iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                                if (iVar7 != -0x80) {
                                  if (iVar7 == 0) goto LAB_1002c82fa;
                                  uVar16 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar16,0x10);
                                  if (cVar4 != '\0') {
                                    psVar23 = local_458;
                                    local_458[0] = 0x202;
                                    local_458[1] = 0x822;
                                    local_454 = "Assertion failure";
                                    local_44c = 0x400;
                                    local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                    goto LAB_1002c79c0;
                                  }
                                }
                              }
                            }
                            else {
                              uVar16 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar16,0x10);
                              if (cVar4 == '\0') goto switchD_1002c65b1_caseD_7;
                              psVar23 = local_458;
                              local_458[0] = 0x202;
                              local_458[1] = 0x822;
                              local_454 = "Assertion failure";
                              local_44c = 0x400;
                              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
LAB_1002c79c0:
                              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",
                                                  psVar23,0x12);
                            }
                          }
                        }
                        else {
                          local_460 = *(char **)(lVar19 + 8);
                          iVar7 = FUN_1001d40ad(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),
                                                "item","pid",*(undefined8 *)(param_1 + 0x38),
                                                "artist_pid");
                          if (iVar7 != -0x80) {
                            if (iVar7 == 0) {
                              if (lVar17 == 0) goto LAB_1002c7e04;
                              if (lVar17 == *(long *)(param_1 + 0x40)) {
LAB_1002c7d9f:
                                lVar17 = FUN_1002cd07e(param_1 + 0x1f8,lVar17);
                                if (lVar17 == (long)*(int *)(param_1 + 0x200) * 0x10 +
                                              *(long *)(param_1 + 0x1f8)) goto LAB_1002c7e04;
                                local_460 = (char *)CONCAT44(local_460._4_4_,*(int *)(lVar17 + 8));
                                if (*(int *)(lVar17 + 8) == 0) {
                                  uVar16 = FUN_1001cc310();
                                  cVar4 = _os_log_type_enabled(uVar16,0x10);
                                  if (cVar4 != '\0') {
                                    local_458[0] = 0x202;
                                    local_458[1] = 0x822;
                                    local_454 = "Assertion failure";
                                    local_44c = 0x822;
                                    local_44a = "storeLinkID != 0";
                                    __os_log_error_impl(0x100000000,uVar16,0x10,
                                                        "%{public}s: (%{public}s)",local_458,0x16);
                                  }
                                  local_460 = (char *)((ulong)local_460 & 0xffffffff00000000);
                                  FUN_1001782e9(0,0);
                                }
                                goto LAB_1002c7e0e;
                              }
                              iVar7 = FUN_1001d40ad(*(undefined8 *)
                                                     (*(long *)(param_1 + 0x10) + 0x68),"album",
                                                    "pid",lVar17,"artist_pid",local_460);
                              if (iVar7 != -0x80) {
                                if (iVar7 == 0) {
                                  *(long *)(param_1 + 0x40) = lVar17;
                                  goto LAB_1002c7d9f;
                                }
                                uVar16 = FUN_1001cc310();
                                cVar4 = _os_log_type_enabled(uVar16,0x10);
                                if (cVar4 != '\0') {
                                  psVar23 = local_458;
                                  local_458[0] = 0x202;
                                  local_458[1] = 0x822;
                                  local_454 = "Assertion failure";
                                  local_44c = 0x400;
                                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                  goto LAB_1002c79c0;
                                }
                              }
                            }
                            else {
                              uVar16 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar16,0x10);
                              if (cVar4 != '\0') {
                                psVar23 = local_458;
                                local_458[0] = 0x202;
                                local_458[1] = 0x822;
                                local_454 = "Assertion failure";
                                local_44c = 0x400;
                                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                                goto LAB_1002c79c0;
                              }
                            }
                          }
                        }
                      }
                      else {
                        lVar17 = *(long *)(lVar17 + 8);
                        iVar7 = FUN_1001d40ad(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),
                                              "item","pid",*(undefined8 *)(param_1 + 0x38),
                                              "album_pid",lVar17);
                        if (iVar7 != -0x80) {
                          if (iVar7 == 0) goto LAB_1002c7c78;
                          uVar16 = FUN_1001cc310();
                          cVar4 = _os_log_type_enabled(uVar16,0x10);
                          if (cVar4 != '\0') {
                            psVar23 = local_458;
                            local_458[0] = 0x202;
                            local_458[1] = 0x822;
                            local_454 = "Assertion failure";
                            local_44c = 0x400;
                            local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                            goto LAB_1002c79c0;
                          }
                        }
                      }
                    }
                    else {
                      uVar16 = *(undefined8 *)(param_3 + 0x70);
                      uVar6 = FUN_1003e52f1(*(undefined2 *)(param_3 + 0x90));
                      uVar21 = *(undefined8 *)(param_3 + 0xf8);
                      uVar35 = *(undefined8 *)(param_3 + 0x158);
                      uVar42 = CONCAT44(uVar57,*(undefined4 *)(param_3 + 0x4c));
                      uVar39 = CONCAT44(uVar55,(uint)*(byte *)(param_3 + 0x14b));
                      uVar36 = CONCAT44(uVar8,*(undefined4 *)(param_3 + 200));
                      uVar33 = CONCAT44(uVar52,*(undefined4 *)(param_3 + 0xb8));
                      local_478 = _sqlite3_mprintf(
                                                  "INSERT INTO avformat_info (item_pid,sub_id,audio_format,bit_rate,sample_rate,duration,gapless_heuristic_info,gapless_encoding_delay,gapless_encoding_drain,gapless_last_frame_resynch,analysis_inhibit_flags,audio_fingerprint,volume_normalization_energy) VALUES (%lld,0,%u,%u,%f,%llu,%u,%u,%u,%llu,%u,%lld,%u)"
                                                  ,(double)*(float *)(param_3 + 0x88),uVar16,
                                                  (ulong)uVar6,(ulong)*(uint *)(param_3 + 0x38),
                                                  *(undefined8 *)(param_3 + 0xbc),
                                                  (ulong)*(uint *)(param_3 + 0xcc),uVar33,uVar36,
                                                  uVar21,uVar39,uVar35,uVar42);
                      uVar52 = (undefined4)((ulong)uVar33 >> 0x20);
                      uVar8 = (undefined4)((ulong)uVar36 >> 0x20);
                      uVar54 = (undefined4)((ulong)uVar21 >> 0x20);
                      uVar55 = (undefined4)((ulong)uVar39 >> 0x20);
                      uVar56 = (undefined4)((ulong)uVar35 >> 0x20);
                      uVar57 = (undefined4)((ulong)uVar42 >> 0x20);
                      iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
                      if (iVar7 != -0x80) {
                        if (iVar7 == 0) goto LAB_1002c76b2;
                        uVar16 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar16,0x10);
                        if (cVar4 != '\0') {
                          psVar23 = local_458;
                          local_458[0] = 0x202;
                          local_458[1] = 0x822;
                          local_454 = "Assertion failure";
                          local_44c = 0x400;
                          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                          goto LAB_1002c79c0;
                        }
                      }
                    }
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar4 != '\0') {
                      psVar23 = local_458;
                      local_458[0] = 0x202;
                      local_458[1] = 0x822;
                      local_454 = "Assertion failure";
                      local_44c = 0x400;
                      local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                      goto LAB_1002c79c0;
                    }
                  }
                }
              }
              else {
                uVar16 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar16,0x10);
                if (cVar4 != '\0') {
                  psVar23 = local_458;
                  local_458[0] = 0x202;
                  local_458[1] = 0x822;
                  local_454 = "Assertion failure";
                  local_44c = 0x400;
                  local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
                  goto LAB_1002c79c0;
                }
              }
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x50) = 1;
LAB_1002c663f:
        iVar7 = 0;
      }
    }
    else if (param_2 == 0x746c686d) {
      if (param_4 == 0) {
        iVar7 = 0;
        if (*(char *)(param_1 + 0x51) == '\x01') {
          iVar7 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
          if ((iVar7 != -0x80) && (iVar7 != 0)) {
            uVar16 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar16,0x10);
            if (cVar4 != '\0') {
              local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
              goto LAB_1002c7c60;
            }
          }
          goto LAB_1002c7c1d;
        }
        goto LAB_1002c7c21;
      }
      *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + (ulong)*(uint *)(param_3 + 8);
      iVar7 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
      if (iVar7 != -0x80) {
        if (iVar7 == 0) {
          *(undefined1 *)(param_1 + 0x51) = 1;
          *(undefined8 *)(param_1 + 0x58) = 0;
          goto LAB_1002c663f;
        }
        uVar16 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar16,0x10);
        if (cVar4 != '\0') {
          psVar23 = local_458;
          local_458[0] = 0x202;
          local_458[1] = 0x822;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar7);
          goto LAB_1002c79c0;
        }
      }
    }
    goto switchD_1002c65b1_caseD_7;
  }
  iVar7 = 0;
LAB_1002c6d6e:
  uVar5 = 0;
LAB_1002c6ddd:
  if ((param_4 != 0) && (iVar7 == 0)) {
    iVar7 = FUN_1002c5198(param_1,param_3,param_4,pcVar26,*(undefined8 *)(param_1 + 0x38),pcVar24,
                          uVar5);
  }
switchD_1002c65b1_caseD_7:
  _sqlite3_free(local_478);
LAB_1002c6e11:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

