// name: FUN_1002f1f37
// address: 1002f1f37

long FUN_1002f1f37(undefined8 param_1,char param_2)

{
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  size_t sVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  cfstringStruct *pcVar20;
  long local_4c8;
  long local_4b8;
  uint local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined2 local_49c;
  int local_49a;
  char local_2a8 [4];
  char *local_2a4;
  undefined2 local_29c;
  char *local_29a;
  undefined1 local_a8 [72];
  undefined1 local_60 [4];
  undefined4 local_5c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_1002f418d(param_1,"iTunesMetadata.plist");
  if (lVar5 == 0) {
    lVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  }
  else {
    local_4a8 = 0;
    uStack_4a4 = 0;
    lVar6 = FUN_10016a9bd(DAT_1008c4d90,lVar5,1);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
        local_2a4 = "Assertion failure";
        local_29c = 0x822;
        local_29a = "metadataDict != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
      }
      FUN_1001782e9(0,0);
    }
    FUN_10017060f(CONCAT44(uStack_4a4,local_4a8));
    local_4a8 = 0;
    uStack_4a4 = 0;
    FUN_10017060f(lVar5);
  }
  if (lVar6 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
      local_2a4 = "Assertion failure";
      local_29c = 0x822;
      local_29a = "metadataDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002f2c80;
  }
  if (((param_2 == '\0') && (lVar5 = FUN_100166b7f(lVar6,&cf_book_info), lVar5 != 0)) &&
     (uVar3 = FUN_100167d66(lVar5,&cf_update_level), 1 < uVar3)) goto LAB_1002f2c80;
  lVar5 = FUN_1002f418d(param_1,"META-INF/container.xml");
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar7,0x10);
    if (cVar2 != '\0') {
      local_29a = "containerFile != nullptr";
LAB_1002f2852:
      local_29c = 0x822;
      local_2a4 = "Assertion failure";
      builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
    }
LAB_1002f2212:
    lVar8 = 0;
LAB_1002f2215:
    local_4c8 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar8 = FUN_100174f4e(DAT_1008c4d90,lVar5,0,0xe,1);
    if (lVar8 == 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_29a = "xmlTree != nullptr";
        goto LAB_1002f2852;
      }
      goto LAB_1002f2212;
    }
    lVar9 = FUN_1002f348c(lVar8,&cf_container,0,0);
    if (((lVar9 == 0) || (lVar9 = FUN_1002f348c(lVar9,&cf_rootfiles,0,0), lVar9 == 0)) ||
       (lVar9 = FUN_1002f348c(lVar9,&cf_rootfile,&cf_media_type,&cf_application_oebps_package_xml),
       lVar9 == 0)) {
LAB_1002f20e2:
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
        local_2a4 = "Assertion failure";
        local_29c = 0x822;
        local_29a = "result != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
      }
      goto LAB_1002f2215;
    }
    uVar7 = FUN_100174e82(lVar9);
    uVar7 = FUN_1002f3c5d(uVar7,&cf_full_path);
    local_4c8 = FUN_1001705fc(uVar7);
    if (local_4c8 == 0) goto LAB_1002f20e2;
  }
  FUN_10017060f(lVar5);
  FUN_10017060f(lVar8);
  if (local_4c8 == 0) goto LAB_1002f2c80;
  lVar5 = FUN_1002f3414(param_1,local_4c8);
  if (lVar5 != 0) {
    uVar7 = FUN_100172752(DAT_1008c4d90,lVar6,0);
    local_60[0] = 0;
    local_5c = 0;
    lVar8 = FUN_100174f4e(DAT_1008c4d90,lVar5,0,0xe,1);
    if (lVar8 == 0) {
      uVar16 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar16,0x10);
      if (cVar2 != '\0') {
        local_29a = "xmlTree != nullptr";
LAB_1002f28a3:
        local_29c = 0x822;
        local_2a4 = "Assertion failure";
        builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
      }
LAB_1002f2652:
      FUN_1001782e9(0,0);
      lVar10 = 0;
      local_4b8 = 0;
    }
    else {
      lVar9 = FUN_1002f348c(lVar8,&cf_package,0,0);
      if (lVar9 == 0) {
        uVar16 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar16,0x10);
        if (cVar2 != '\0') {
          local_29a = "packageElement != nullptr";
          goto LAB_1002f28a3;
        }
        goto LAB_1002f2652;
      }
      lVar10 = FUN_1002f348c(lVar9,&cf_metadata,0,0);
      if (lVar10 == 0) {
        uVar16 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar16,0x10);
        if (cVar2 != '\0') {
          local_29a = "metadataElement != nullptr";
LAB_1002f27e4:
          local_29c = 0x822;
          local_2a4 = "Assertion failure";
          builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x16);
        }
LAB_1002f2809:
        local_4b8 = 0;
        FUN_1001782e9(0,0);
        lVar10 = 0;
      }
      else {
        lVar11 = FUN_1002f348c(lVar9,&cf_manifest,0,0);
        if (lVar11 == 0) {
          uVar16 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar16,0x10);
          if (cVar2 != '\0') {
            local_29a = "manifestElement != nullptr";
            goto LAB_1002f27e4;
          }
          goto LAB_1002f2809;
        }
        lVar12 = FUN_1002f348c(lVar10,&cf_dc_metadata,0,0);
        if (lVar12 == 0) {
          lVar12 = lVar10;
        }
        lVar13 = FUN_1002f348c(lVar10,&cf_x_metadata,0,0);
        if (lVar13 == 0) {
          lVar13 = lVar10;
        }
        lVar14 = FUN_1002f1b0a(lVar6);
        puVar1 = PTR_cf_itemName_100852750;
        if (lVar14 == 0) {
          uVar16 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar16,0x10);
          if (cVar2 != '\0') {
            local_29a = "bookInfoDict != nullptr";
            goto LAB_1002f27e4;
          }
          goto LAB_1002f2809;
        }
        lVar10 = FUN_100171475(lVar6,PTR_cf_itemName_100852750);
        if (lVar10 == 0) {
          FUN_1002f3e34(lVar6,lVar12,puVar1,&cf_title);
          FUN_1002f3e34(lVar6,lVar12,PTR_cf_playlistName_100852778,&cf_title);
          FUN_1002f3e34(lVar6,lVar12,PTR_cf_genre_100852800,&cf_subject);
          lVar10 = FUN_1002f348c(lVar12,&cf_creator,&cf_opf_role,&cf_aut);
          if (((lVar10 != 0) || (lVar10 = FUN_1002f348c(lVar12,&cf_creator,0,0), lVar10 != 0)) &&
             (lVar15 = FUN_1002f3636(lVar10), lVar15 != 0)) {
            FUN_100171502(lVar6,PTR_cf_artistName_100852788,lVar15);
            FUN_10017060f(lVar15);
            uVar16 = FUN_100174e82(lVar10);
            lVar10 = FUN_1002f3c5d(uVar16,&cf_opf_file_as);
            if (lVar10 != 0) {
              FUN_100171502(lVar6,PTR_cf_sort_artist_100852898,lVar10);
              FUN_100168746(lVar6,PTR_cf_sort_artist_status_1008528a0,3,0);
            }
          }
          lVar10 = FUN_1002f348c(lVar12,&cf_date,&cf_opf_event,&cf_publication);
          if ((((lVar10 != 0) ||
               (lVar10 = FUN_1002f348c(lVar12,&cf_date,&cf_opf_event,&cf_original_publication),
               lVar10 != 0)) || (lVar10 = FUN_1002f348c(lVar12,&cf_date,0,0), lVar10 != 0)) &&
             (lVar10 = FUN_1002f3636(lVar10), lVar10 != 0)) {
            FUN_100171502(lVar6,PTR_cf_releaseDate_100852858,lVar10);
            FUN_10017060f(lVar10);
          }
        }
        iVar4 = FUN_10017991d(1,lVar5,local_60);
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar16 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar16,0x10);
          if (cVar2 != '\0') {
            builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
            local_2a4 = "Assertion failure";
            local_29c = 0x400;
            local_29a = (char *)CONCAT44(local_29a._4_4_,iVar4);
            __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x12);
          }
        }
        FUN_100179ae2(local_60,local_a8,0,0x40);
        uVar16 = FUN_100174e82(lVar9);
        lVar10 = FUN_1002f3c5d(uVar16,&cf_unique_identifier);
        if (((lVar10 == 0) ||
            (lVar10 = FUN_1002f348c(lVar12,&cf_identifier,&cf_id,lVar10), lVar10 == 0)) ||
           (lVar10 = FUN_1002f3636(lVar10), lVar10 == 0)) {
LAB_1002f294b:
          lVar12 = FUN_100179c47(local_60);
        }
        else {
          iVar4 = FUN_1001e5e36(lVar10,local_2a8,0x200);
          if (iVar4 == 0) {
            local_4a8 = local_4a8 & 0xffffff00;
            uStack_4a4 = 0;
            sVar17 = _strlen(local_2a8);
            iVar4 = FUN_1001798b8(1,local_2a8,sVar17,&local_4a8);
            if (iVar4 != 0) goto LAB_1002f290f;
            lVar12 = FUN_100179c47(&local_4a8);
            FUN_100171502(lVar14,&cf_publisher_unique_id,lVar10);
          }
          else {
LAB_1002f290f:
            lVar12 = 0;
          }
          if ((iVar4 != -0x80) && (iVar4 != 0)) {
            uVar16 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar16,0x10);
            if (cVar2 != '\0') {
              local_4a8 = 0x8220202;
              uStack_4a4 = 0x7a0a90;
              uStack_4a0 = 1;
              local_49c = 0x400;
              local_49a = iVar4;
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_4a8,0x12)
              ;
            }
          }
          FUN_10017060f(lVar10);
          if (lVar12 == 0) goto LAB_1002f294b;
        }
        local_4b8 = 0;
        FUN_100168746(lVar14,&cf_unique_id,lVar12,0);
        FUN_10016843e(lVar14,&cf_package_file_hash,local_a8,0);
        lVar10 = FUN_100171475(lVar6,PTR_cf_itemId_100852748);
        if (lVar10 == 0) {
          pcVar20 = &cf_cover;
          lVar10 = FUN_1002f348c(lVar13,&cf_meta,&cf_cover,0);
          if (lVar10 == 0) {
            lVar10 = FUN_1002f348c(lVar13,&cf_meta,&cf_name,&cf_cover);
            if (lVar10 != 0) {
              pcVar20 = &cf_content;
              goto LAB_1002f2b5a;
            }
            pcVar20 = &cf_cover_image;
          }
          else {
LAB_1002f2b5a:
            uVar16 = FUN_100174e82(lVar10);
            pcVar20 = (cfstringStruct *)FUN_1002f3c5d(uVar16,pcVar20);
          }
          lVar10 = FUN_1002f348c(lVar11,&cf_item,&cf_id,pcVar20);
          if (((lVar10 == 0) &&
              (lVar10 = FUN_1002f348c(lVar11,&cf_item,&cf_properties,pcVar20), lVar10 == 0)) ||
             (local_4b8 = FUN_1002f3f47(lVar10,local_4c8), local_4b8 == 0)) {
LAB_1002f2d36:
            lVar10 = FUN_1002f348c(lVar9,&cf_guide,0,0);
            if (((lVar10 != 0) &&
                (lVar10 = FUN_1002f348c(lVar10,&cf_reference,&cf_type,&cf_cover), lVar10 != 0)) &&
               (local_4b8 = FUN_1002f3f47(lVar10,local_4c8), local_4b8 != 0)) {
              lVar10 = FUN_1002f4030(param_1,local_4b8);
              if (lVar10 != 0) goto LAB_1002f2eec;
              uVar16 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar16,0x10);
              if (cVar2 != '\0') {
                builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
                local_2a4 = "Assertion failure";
                local_29c = 0x822;
                local_29a = "coverData != nullptr";
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              FUN_10017060f(local_4b8);
            }
            FUN_1001e115f(local_4c8,local_2a8);
            FUN_1001e3e43(local_2a8,0);
            FUN_1001e1c39(local_2a8,&local_4a8);
            FUN_1001e26e1(".png",&local_4a8);
            lVar10 = FUN_1002f40e6(param_1,&local_4a8);
            if (lVar10 == 0) {
              FUN_1001e1c39(local_2a8,&local_4a8);
              FUN_1001e26e1(".jpg",&local_4a8);
              lVar10 = FUN_1002f40e6(param_1,&local_4a8);
              if (lVar10 == 0) {
                FUN_1001e1c39(local_2a8,&local_4a8);
                FUN_1001e26e1(".tif",&local_4a8);
                lVar10 = FUN_1002f40e6(param_1,&local_4a8);
                if (lVar10 == 0) {
                  local_4b8 = 0;
                  lVar10 = 0;
                  goto LAB_1002f29b7;
                }
              }
            }
            local_4b8 = FUN_1001e5b1d(&local_4a8);
          }
          else {
            lVar10 = FUN_1002f4030(param_1,local_4b8);
            if (lVar10 == 0) {
              uVar16 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar16,0x10);
              if (cVar2 != '\0') {
                builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
                local_2a4 = "Assertion failure";
                local_29c = 0x822;
                local_29a = "coverData != nullptr";
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              FUN_10017060f(local_4b8);
              goto LAB_1002f2d36;
            }
          }
LAB_1002f2eec:
          local_4a8 = local_4a8 & 0xffffff00;
          uStack_4a4 = 0;
          iVar4 = FUN_10017991d(1,lVar10);
          if (iVar4 != -0x80) {
            if (iVar4 != 0) {
              uVar16 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar16,0x10);
              if (cVar2 != '\0') {
                builtin_strncpy(local_2a8,"\x02\x02\"\b",4);
                local_2a4 = "Assertion failure";
                local_29c = 0x400;
                local_29a = (char *)CONCAT44(local_29a._4_4_,iVar4);
                __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",local_2a8,0x12
                                   );
              }
              if (iVar4 != 0) goto LAB_1002f29b7;
            }
            FUN_100179ae2(&local_4a8,local_2a8,0,0x40);
            FUN_10016843e(lVar14,&cf_cover_image_hash,local_2a8,0);
            cVar2 = FUN_1001df957("A059007E7A2E86F2BF92E4070B3E5C73",local_2a8,1);
            if (cVar2 == '\0') {
              FUN_100171502(lVar14,&cf_cover_image_path,local_4b8);
            }
          }
        }
        else {
          lVar10 = 0;
        }
LAB_1002f29b7:
        lVar11 = FUN_100166c1b(lVar6,PTR_cf_page_progression_direction_100852988);
        if (lVar11 == 0) {
          lVar11 = 0;
          lVar9 = FUN_1002f348c(lVar9,&cf_spine,0,0);
          if (lVar9 != 0) {
            uVar16 = FUN_100174e82(lVar9);
            lVar11 = FUN_1002f3c5d(uVar16,&cf_page_progression_direction);
          }
        }
        FUN_100171502(lVar14,&cf_page_progression_direction,lVar11);
        lVar9 = FUN_1002f418d(param_1,"mimetype");
        uVar16 = DAT_1008c4d90;
        if (lVar9 != 0) {
          uVar18 = FUN_100170f3b(lVar9);
          uVar19 = FUN_100170ef7(lVar9);
          uVar16 = FUN_100169334(uVar16,uVar18,uVar19);
          FUN_100171502(lVar14,&cf_mime_type,uVar16);
          FUN_10017060f(uVar16);
          FUN_10017060f(lVar9);
        }
        uVar16 = FUN_100166b7f(lVar6,PTR_cf_asset_info_1008529a0);
        FUN_100171502(lVar14,&cf_asset_info,uVar16);
        uVar16 = FUN_100166c1b(lVar6,PTR_cf_artwork_template_name_100852978);
        FUN_100171502(lVar14,&cf_artwork_template_name,uVar16);
        lVar9 = FUN_100171475(lVar6,PTR_cf_publication_version_100852990);
        if (lVar9 == 0) {
          lVar11 = 0;
        }
        else {
          lVar12 = _CFNumberGetTypeID();
          lVar13 = _CFGetTypeID(lVar9);
          lVar11 = 0;
          if (lVar12 == lVar13) {
            lVar11 = lVar9;
          }
        }
        FUN_100171502(lVar14,&cf_publication_version,lVar11);
        uVar16 = FUN_100166c1b(lVar6,PTR_cf_human_friendly_publication_version_100852998);
        FUN_100171502(lVar14,&cf_human_friendly_publication_version,uVar16);
        uVar16 = FUN_100166844(lVar6,PTR_cf_languages_100852980);
        FUN_100171502(lVar14,&cf_languages,uVar16);
        FUN_100168746(lVar14,&cf_update_level,2,0);
      }
    }
    FUN_10017060f(lVar8);
    FUN_10017060f(local_4b8);
    FUN_10017060f(lVar10);
    cVar2 = FUN_100170633(lVar6,uVar7);
    if (cVar2 == '\0') {
      FUN_1002f379e(param_1,lVar6);
    }
    FUN_10017060f(uVar7);
    FUN_10017060f(lVar5);
  }
  FUN_10017060f(local_4c8);
LAB_1002f2c80:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}

