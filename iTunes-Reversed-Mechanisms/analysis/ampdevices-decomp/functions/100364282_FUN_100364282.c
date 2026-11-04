// name: FUN_100364282
// address: 100364282

undefined1 *
FUN_100364282(long param_1,long param_2,undefined8 param_3,int param_4,undefined4 param_5,
             undefined8 *param_6)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  int local_78;
  byte local_71;
  int local_70;
  byte local_69;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  byte local_52;
  undefined4 local_50;
  byte local_4c;
  char local_4b;
  undefined1 local_4a;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a4 = param_5;
  lVar6 = FUN_10016aa24(DAT_1008c4d90,param_3,0,0);
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c._0_2_ = 0x822;
      local_5c._2_2_ = 0x4cce;
      uStack_58 = 0x1007c;
      uStack_54 = 0;
      uStack_53 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    puVar12 = &DAT_ffffff30;
    goto LAB_100364f40;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_1 == 0) {
LAB_100364712:
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c._0_2_ = 0x822;
      local_5c._2_2_ = 0xe894;
      uStack_58 = 0x1007a;
      uStack_54 = 0;
      uStack_53 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    puVar12 = (undefined1 *)0xffffffce;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c._0_2_ = 0x822;
        local_5c._2_2_ = 0xec03;
        uStack_58 = 0x1007a;
        uStack_54 = 0;
        uStack_53 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100364712;
    }
    local_a0 = param_3;
    local_80 = lVar6;
    local_78 = param_4;
    lVar6 = FUN_100166844(lVar6,&cf_tracks);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      param_3 = local_a0;
      if (cVar2 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure";
        local_5c._0_2_ = 0x822;
        local_5c._2_2_ = 0x4d62;
        uStack_58 = 0x1007c;
        uStack_54 = 0;
        uStack_53 = 0;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(0);
      puVar12 = &DAT_ffffff30;
      lVar6 = local_80;
    }
    else {
      FUN_100177cff(&local_a8);
      local_a8 = local_a8 + 0x15180;
      FUN_100313e0b(param_1);
      lVar8 = FUN_10017076e(lVar6);
      local_88 = param_1;
      if (lVar8 < 1) {
        local_90 = 0;
        local_98 = 0;
        lVar9 = local_80;
      }
      else {
        local_90 = 0;
        lVar13 = 0;
        local_98 = 0;
        do {
          lVar9 = FUN_10016499b(lVar6,lVar13);
          if (lVar9 == 0) {
            uVar7 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar7,0x10);
            if (cVar2 != '\0') {
              local_68 = 0x8220202;
              local_64 = "Assertion failure";
              local_5c._0_2_ = 0x822;
              local_5c._2_2_ = 0x4d7c;
              uStack_58 = 0x1007c;
              uStack_54 = 0;
              uStack_53 = 0;
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            pcVar10 = (char *)FUN_100167d88(lVar9,&cf_persistentID);
            if (pcVar10 != (char *)0x0) {
              lVar11 = FUN_100300729(param_1,pcVar10);
              if (lVar11 == 0) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar7 = DAT_1008c75b8;
                cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar2 != '\0') {
                  local_68 = 0x8000200;
                  local_5c._0_2_ = 0x800;
                  local_5c._2_2_ = SUB82(pcVar10,0);
                  uStack_58 = (undefined4)((ulong)pcVar10 >> 0x10);
                  uStack_54 = (undefined1)((ulong)pcVar10 >> 0x30);
                  uStack_53 = (undefined1)((ulong)pcVar10 >> 0x38);
                  local_64 = pcVar10;
                  __os_log_impl(0x100000000,uVar7,1,
                                "sync> could not find track with persistent id %lld (0x%016llX)",
                                &local_68,0x16);
                }
                param_1 = local_88;
                if (param_6 != (undefined8 *)0x0) {
                  if (local_90 == 0) {
                    local_90 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
                  }
                  FUN_1001709a5(local_90,lVar9);
                }
              }
              else {
                local_71 = FUN_100474865(lVar11);
                FUN_1001c62d9(&local_68,0x28);
                local_68 = FUN_100167d66(lVar9,&cf_playCount);
                iVar4 = FUN_1003652a2(lVar9,&cf_playMacOSDate);
                iVar1 = local_78;
                local_64 = (char *)CONCAT44(local_64._4_4_,iVar4 + local_78);
                uVar5 = FUN_100167d66(lVar9,&cf_skipCount);
                local_64 = (char *)CONCAT44(uVar5,(undefined4)local_64);
                iVar4 = FUN_1003652a2(lVar9,&cf_skipMacOSDate);
                local_5c = iVar4 + iVar1;
                uStack_58 = FUN_100167d66(lVar9,&cf_bookmarkTimeInMS);
                uStack_54 = FUN_100167bbd(lVar9,&cf_userRating);
                cVar2 = FUN_10016769f(lVar9,&cf_likedState,&local_69);
                uVar5 = 0;
                local_52 = -(cVar2 == '\0') | local_69;
                cVar2 = FUN_100167740(lVar9,&cf_likedMacOSDate,&local_70);
                if (cVar2 != '\0') {
                  uVar5 = FUN_100177e79(local_70 + iVar1);
                }
                local_50 = uVar5;
                cVar2 = FUN_10016769f(lVar9,&cf_albumLikedState,&local_69);
                local_4c = -(cVar2 == '\0') | local_69;
                local_4a = FUN_100167c17(lVar9,&cf_playedState);
                local_4b = FUN_100167dd2(lVar9,&cf_deleted,0);
                if (((param_2 != 0) && (local_4b != '\0')) && (*(long *)(lVar11 + 0x188) != 0)) {
                  local_48 = FUN_100300729(param_2);
                }
                cVar2 = FUN_100363c1b(lVar11,&local_68,local_a8,local_a4,0);
                bVar3 = local_71;
                if (cVar2 == '\0') {
                  bVar3 = 0;
                }
                local_98 = (ulong)(bVar3 | (byte)local_98);
                param_1 = local_88;
              }
            }
          }
          lVar9 = local_80;
          lVar11 = local_90;
          lVar13 = lVar13 + 1;
        } while (lVar8 != lVar13);
        if (local_90 != 0 && param_6 != (undefined8 *)0x0) {
          uVar7 = FUN_100171413(DAT_1008c4d90,0,local_80);
          *param_6 = uVar7;
          FUN_10017152e(uVar7,&cf_tracks,lVar11);
        }
      }
      lVar6 = FUN_100166844(lVar9,&cf_artists);
      if (lVar6 != 0) {
        lVar8 = FUN_10017076e(lVar6);
        if (0 < lVar8) {
          lVar9 = 0;
          do {
            lVar13 = FUN_10016499b(lVar6,lVar9);
            if (lVar13 == 0) {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                pcVar10 = "artistPlayData != nullptr";
LAB_100364a0b:
                local_5c._0_2_ = 0x822;
                local_64 = "Assertion failure";
                local_68 = 0x8220202;
                local_5c._2_2_ = SUB82(pcVar10,0);
                uStack_58 = (undefined4)((ulong)pcVar10 >> 0x10);
                uStack_54 = 0;
                uStack_53 = 0;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16
                                   );
              }
LAB_100364a34:
              FUN_1001782e9(0,0);
            }
            else {
              lVar11 = FUN_100167d88(lVar13,&cf_persistentID);
              if (lVar11 == 0) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  pcVar10 = "persistentID != 0";
                  goto LAB_100364a0b;
                }
                goto LAB_100364a34;
              }
              lVar11 = FUN_1004cfdd1(local_88,lVar11);
              if (lVar11 != 0) {
                cVar2 = FUN_10016769f(lVar13,&cf_likedState,&local_69);
                if (cVar2 == '\0') {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt8(artistPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedState\" \"\")), &likedState)"
                    ;
                    goto LAB_100364a0b;
                  }
                }
                else if (local_69 < 4) {
                  cVar2 = FUN_100167740(lVar13,&cf_likedMacOSDate,&local_70);
                  if (cVar2 != '\0') {
                    local_70 = FUN_100177e79(local_70 + local_78);
                    if (local_69 != 0) {
                      FUN_1005e650c(lVar11,local_69,local_70);
                    }
                    goto LAB_100364a3d;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt32(artistPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedMacOSDate\" \"\")), &likedModDate)"
                    ;
                    goto LAB_100364a0b;
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "likedState >= kITLikedState_Unknown && likedState <= kITLikedState_Disliked";
                    goto LAB_100364a0b;
                  }
                }
                goto LAB_100364a34;
              }
            }
LAB_100364a3d:
            lVar9 = lVar9 + 1;
          } while (lVar8 != lVar9);
        }
      }
      lVar6 = FUN_100166844(local_80,&cf_albums);
      if (lVar6 != 0) {
        lVar8 = FUN_10017076e(lVar6);
        if (0 < lVar8) {
          lVar9 = 0;
          do {
            lVar13 = FUN_10016499b(lVar6,lVar9);
            if (lVar13 == 0) {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                pcVar10 = "albumPlayData != nullptr";
LAB_100364c64:
                local_5c._0_2_ = 0x822;
                local_64 = "Assertion failure";
                local_68 = 0x8220202;
                local_5c._2_2_ = SUB82(pcVar10,0);
                uStack_58 = (undefined4)((ulong)pcVar10 >> 0x10);
                uStack_54 = 0;
                uStack_53 = 0;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16
                                   );
              }
LAB_100364c8d:
              FUN_1001782e9(0,0);
            }
            else {
              lVar11 = FUN_100167d88(lVar13,&cf_persistentID);
              if (lVar11 == 0) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  pcVar10 = "persistentID != 0";
                  goto LAB_100364c64;
                }
                goto LAB_100364c8d;
              }
              lVar11 = FUN_1003a3354(local_88,lVar11);
              if (lVar11 != 0) {
                cVar2 = FUN_10016769f(lVar13,&cf_likedState,&local_69);
                if (cVar2 == '\0') {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt8(albumPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedState\" \"\")), &likedState)"
                    ;
                    goto LAB_100364c64;
                  }
                }
                else if (local_69 < 4) {
                  cVar2 = FUN_100167740(lVar13,&cf_likedMacOSDate,&local_70);
                  if (cVar2 != '\0') {
                    local_70 = FUN_100177e79(local_70 + local_78);
                    if (local_69 != 0) {
                      FUN_1003a2e74(lVar11,local_69,local_70);
                    }
                    goto LAB_100364c96;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt32(albumPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedMacOSDate\" \"\")), &likedModDate)"
                    ;
                    goto LAB_100364c64;
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "likedState >= kITLikedState_Unknown && likedState <= kITLikedState_Disliked";
                    goto LAB_100364c64;
                  }
                }
                goto LAB_100364c8d;
              }
            }
LAB_100364c96:
            lVar9 = lVar9 + 1;
          } while (lVar8 != lVar9);
        }
      }
      lVar6 = FUN_100166844(local_80,&cf_playlists);
      if (lVar6 != 0) {
        lVar8 = FUN_10017076e(lVar6);
        if (0 < lVar8) {
          lVar9 = 0;
          do {
            lVar13 = FUN_10016499b(lVar6,lVar9);
            if (lVar13 == 0) {
              uVar7 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar7,0x10);
              if (cVar2 != '\0') {
                pcVar10 = "playlistPlayData != nullptr";
LAB_100364ec2:
                local_5c._0_2_ = 0x822;
                local_64 = "Assertion failure";
                local_68 = 0x8220202;
                local_5c._2_2_ = SUB82(pcVar10,0);
                uStack_58 = (undefined4)((ulong)pcVar10 >> 0x10);
                uStack_54 = 0;
                uStack_53 = 0;
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16
                                   );
              }
LAB_100364eeb:
              FUN_1001782e9(0,0);
            }
            else {
              lVar11 = FUN_100167d88(lVar13,&cf_persistentID);
              if (lVar11 == 0) {
                uVar7 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar7,0x10);
                if (cVar2 != '\0') {
                  pcVar10 = "persistentID != 0";
                  goto LAB_100364ec2;
                }
                goto LAB_100364eeb;
              }
              lVar11 = FUN_10048b5ec(local_88,lVar11);
              if (lVar11 != 0) {
                cVar2 = FUN_10016769f(lVar13,&cf_likedState,&local_69);
                if (cVar2 == '\0') {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt8(playlistPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedState\" \"\")), &likedState)"
                    ;
                    goto LAB_100364ec2;
                  }
                }
                else if (local_69 < 4) {
                  cVar2 = FUN_100167740(lVar13,&cf_likedMacOSDate,&local_70);
                  if (cVar2 != '\0') {
                    local_70 = FUN_100177e79(local_70 + local_78);
                    if (local_69 != 0) {
                      FUN_1004885dd(lVar11,local_69,local_70,1);
                    }
                    goto LAB_100364ef4;
                  }
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "JRCFDictionaryGetUInt32(playlistPlayData, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"likedMacOSDate\" \"\")), &likedModDate)"
                    ;
                    goto LAB_100364ec2;
                  }
                }
                else {
                  uVar7 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar2 != '\0') {
                    pcVar10 = 
                    "likedState >= kITLikedState_Unknown && likedState <= kITLikedState_Disliked";
                    goto LAB_100364ec2;
                  }
                }
                goto LAB_100364eeb;
              }
            }
LAB_100364ef4:
            lVar9 = lVar9 + 1;
          } while (lVar8 != lVar9);
        }
      }
      lVar8 = local_88;
      FUN_1002fbbfc(local_88);
      FUN_10017060f(local_90);
      puVar12 = (undefined1 *)0x0;
      param_3 = local_a0;
      lVar6 = local_80;
      if ((char)local_98 != '\0') {
        FUN_100316867(lVar8,local_98 & 0xff,1);
        param_3 = local_a0;
        lVar6 = local_80;
      }
    }
  }
LAB_100364f40:
  FUN_10017060f(lVar6);
  FUN_100182d4d(param_3);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar12;
}

