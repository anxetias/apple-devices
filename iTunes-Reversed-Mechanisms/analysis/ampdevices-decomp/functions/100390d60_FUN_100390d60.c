// name: FUN_100390d60
// address: 100390d60

int FUN_100390d60(long param_1,char param_2,char param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  cfstringStruct *pcVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined8 local_cf0;
  undefined8 local_ce8;
  undefined1 local_ce0 [16];
  long local_cd0;
  long local_cc8;
  long local_cc0;
  long local_cb8;
  long local_cb0;
  undefined8 local_ca8;
  long local_ca0;
  long local_c98;
  long local_c90;
  long local_c88;
  long local_c80;
  undefined1 local_c78 [1056];
  uint local_858;
  char *local_854;
  undefined2 local_84c;
  char *local_84a;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_cc8 = 0;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_100391feb;
  }
  if (*(long *)(param_1 + 0x16688) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "handlerData->airTrafficHostConnection != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x484;
    goto LAB_100391feb;
  }
  if ((*(byte *)(param_1 + 0x166d8) & 0x40) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = "(handlerData->airTrafficSyncDataclasses & kAirTrafficDataclass_Photo) != 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x485;
    goto LAB_100391feb;
  }
  if (*(long *)(param_1 + 0x16860) == 0 && param_2 == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_858 = 0x8220202;
      local_854 = "Assertion failure";
      local_84c = 0x822;
      local_84a = 
      "handlerData->airTrafficDesktopPhotoLibrary != nullptr || makeEmptyPLSRepresentation";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0x486;
    goto LAB_100391feb;
  }
  iVar5 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x73796e70,1,local_c78);
  if (iVar5 == -0x80) {
LAB_100390f7b:
    lVar7 = 0;
  }
  else {
    if (iVar5 != 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_858 = 0x8220202;
        local_854 = "Assertion failure";
        local_84c = 0x400;
        local_84a = (char *)CONCAT44(local_84a._4_4_,iVar5);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_858,0x12);
      }
      goto LAB_100390f7b;
    }
    if ((((param_2 == '\0') && (param_3 != -1)) && (*(char *)(param_1 + 0x340) == '\0')) &&
       (iVar5 = FUN_1003d1639(*(undefined8 *)(param_1 + 0x16860),0,param_3,&local_cc8), iVar5 == 0))
    {
      *(undefined4 *)(local_cc8 + 0xbc) = 100;
    }
    local_cb0 = *(long *)(param_1 + 0x16860);
    cVar4 = FUN_100495380();
    if (cVar4 == '\0' && param_2 == '\0') {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_858 = 0x8220202;
        local_854 = "Assertion failure";
        local_84c = 0x822;
        local_84a = "ITImageLibraryIsValid(optionalImageLibrary) || makeEmptyPLSRepresentation";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x32;
      lVar7 = 0;
LAB_100391fb5:
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_84a = (char *)CONCAT44(local_84a._4_4_,iVar5);
LAB_100392092:
        local_84c = 0x400;
        local_854 = "Assertion failure";
        local_858 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_858,0x12);
      }
    }
    else {
      local_c90 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (local_c90 == 0) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_858 = 0x8220202;
          local_854 = "Assertion failure";
          local_84c = 0x822;
          local_84a = "dictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
        }
        FUN_1001782e9(0,0);
LAB_1003911e9:
        local_cc0 = 0;
LAB_1003911fe:
        iVar5 = -0x6c;
        local_ca8 = 0;
        lVar8 = 0;
        lVar7 = 0;
      }
      else {
        if (param_2 == '\0') {
          uVar6 = *(undefined8 *)(local_cb0 + 0x1448);
        }
        else {
          uVar6 = 0;
        }
        FUN_100169968(uVar6,&local_cf0);
        local_cc0 = FUN_100169885(local_cf0,local_ce8);
        if (local_cc0 == 0) {
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_858 = 0x8220202;
            local_854 = "Assertion failure";
            local_84c = 0x822;
            local_84a = "libraryUUIDString != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003911e9;
        }
        FUN_100171502(local_c90,PTR_cf_libraryUUID_10086f4a0);
        pcVar12 = &cf___;
        if (local_cb0 != 0) {
          switch(*(undefined4 *)(local_cb0 + 0x13c0)) {
          case 1:
            pcVar12 = (cfstringStruct *)PTR_cf_iPhoto_10086f4c0;
            break;
          case 2:
            pcVar12 = (cfstringStruct *)PTR_cf_Folder_10086f4d8;
            break;
          case 3:
            pcVar12 = (cfstringStruct *)PTR_cf_PhotoshopAlbum_10086f4e8;
            break;
          case 4:
            pcVar12 = (cfstringStruct *)PTR_cf_PhotoshopElements_10086f4e0;
            break;
          case 6:
            pcVar12 = (cfstringStruct *)PTR_cf_Aperture_10086f4c8;
            break;
          case 7:
            pcVar12 = (cfstringStruct *)PTR_cf_PhotosApp_10086f4d0;
          }
        }
        FUN_100171502(local_c90,PTR_cf_libraryKind_10086f4b8,pcVar12);
        FUN_100132900(&local_858);
        iVar5 = 0;
        FUN_10016865a(local_c90,PTR_cf_iTunesUserAgent_10086f4b0,&local_858,0);
        uVar6 = FUN_1001b7a50(&local_858);
        local_ca8 = CONCAT71((int7)((ulong)uVar6 >> 8),1);
        if (param_2 == '\0') {
          local_c88 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
          if (local_c88 != 0) {
            for (lVar7 = FUN_100496019(local_cb0); lVar7 != 0; lVar7 = FUN_1004960d0(lVar7)) {
              if (*(char *)(lVar7 + 0xb0) != '\0') {
                *(undefined4 *)(lVar7 + 0xa4) = 0;
              }
            }
            lVar7 = FUN_100496019(local_cb0);
            while (lVar7 != 0) {
              if (*(int *)(lVar7 + 0xa4) != 0) {
                FUN_1001b7a44(local_ce0);
                local_c80 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                if (local_c80 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar4 != '\0') {
                    local_58._0_4_ = 0x8220202;
                    local_58._4_4_ = 0x7a0a90;
                    uStack_50 = 1;
                    uStack_4c = 0x822;
                    uStack_4a = 0x12e8;
                    uStack_48 = 0x7a;
                    uStack_46 = 1;
                    uStack_44 = 0;
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  FUN_100168b0b(local_c80,PTR_cf_isVideo_10086f540,*(undefined1 *)(lVar7 + 0xb2),1);
                  FUN_100168b0b(local_c80,PTR_cf_isFavorite_10086f548,*(undefined1 *)(lVar7 + 0xd5),
                                1);
                  FUN_100168b0b(local_c80,PTR_cf_hasVideoComplement_10086f550,
                                *(undefined1 *)(lVar7 + 0xd6),1);
                  local_cd0 = FUN_100169885(*(undefined8 *)(lVar7 + 0x28),
                                            *(undefined8 *)(lVar7 + 0x30));
                  if (local_cd0 == 0) {
                    uVar6 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar4 != '\0') {
                      local_58._0_4_ = 0x8220202;
                      local_58._4_4_ = 0x7a0a90;
                      uStack_50 = 1;
                      uStack_4c = 0x822;
                      uStack_4a = 0x2912;
                      uStack_48 = 0x7a;
                      uStack_46 = 1;
                      uStack_44 = 0;
                      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                    bVar3 = true;
                    local_c98 = 0;
                    local_ca0 = 0;
                  }
                  else {
                    FUN_100171502(local_c80,PTR_cf_uuid_10086f4a8);
                    iVar5 = FUN_10058ef54(lVar7,&local_858,0x800);
                    if ((iVar5 != -0x80) && (iVar5 != 0)) {
                      uVar6 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar4 != '\0') {
                        local_58._0_4_ = 0x8220202;
                        local_58._4_4_ = 0x7a0a90;
                        uStack_50 = 1;
                        uStack_4c = 0x400;
                        uStack_4a = (undefined2)iVar5;
                        uStack_48 = (undefined2)((uint)iVar5 >> 0x10);
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                            &local_58,0x12);
                      }
                    }
                    if ((char)local_858 == '\0') {
LAB_100391568:
                      local_ca0 = 0;
                    }
                    else {
                      local_ca0 = FUN_100169bb7(0,&local_858);
                      if (local_ca0 == 0) {
                        uVar6 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          local_58._0_4_ = 0x8220202;
                          local_58._4_4_ = 0x7a168c;
                          uStack_50 = 1;
                          uStack_4c = 0x822;
                          uStack_4a = 0x75f4;
                          uStack_48 = 0x7c;
                          uStack_46 = 1;
                          uStack_44 = 0;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        cVar4 = FUN_1001782e9(0,0);
                        if (cVar4 == '\0') goto LAB_100391568;
                      }
                      FUN_100171502(local_c80,PTR_cf_caption_10086f508,local_ca0);
                    }
                    cVar4 = FUN_10058f971(lVar7);
                    if (cVar4 == '\0') {
                      iVar5 = FUN_10058f16e(lVar7,local_ce0);
                      if (iVar5 == 0) {
                        FUN_10016865a(local_c80,PTR_cf_originalFileName_10086f510,local_ce0,0);
                      }
                    }
                    iVar5 = *(int *)(*(long *)(lVar7 + 0x10) + 0x13c0);
                    if ((iVar5 == 6) || (iVar5 == 1)) {
                      lVar8 = FUN_10049aa6e(*(long *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x38),1)
                      ;
                      if (lVar8 == 0) goto LAB_10039160e;
                      local_c98 = FUN_100169885(*(undefined8 *)(lVar8 + 0x38),
                                                *(undefined8 *)(lVar8 + 0x40));
                      if (local_c98 == 0) {
                        uVar6 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          local_58._0_4_ = 0x8220202;
                          local_58._4_4_ = 0x7a0a90;
                          uStack_50 = 1;
                          uStack_4c = 0x822;
                          uStack_4a = 0x7602;
                          uStack_48 = 0x7c;
                          uStack_46 = 1;
                          uStack_44 = 0;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        bVar3 = true;
                        local_c98 = 0;
                        goto LAB_100391a5f;
                      }
                      FUN_100171502(local_c80,PTR_cf_eventUUID_10086f518);
                    }
                    else {
LAB_10039160e:
                      local_c98 = 0;
                    }
                    FUN_100168746(local_c80,PTR_cf_modificationDate_10086f520,
                                  *(undefined4 *)(lVar7 + 0x8c),1);
                    FUN_100168746(local_c80,PTR_cf_exposureDate_10086f528,
                                  *(undefined4 *)(lVar7 + 0x58),1);
                    FUN_100168d20((int)*(undefined8 *)(lVar7 + 0xb8),local_c80,
                                  PTR_cf_latitude_10086f538,1);
                    FUN_100168d20((int)*(undefined8 *)(lVar7 + 0xc0),local_c80,
                                  PTR_cf_longitude_10086f530,1);
                    if (*(long *)(lVar7 + 0x78) == 0) {
LAB_100391a1d:
                      FUN_100171502(local_c80,PTR_cf_itemType_10086f4f0,PTR_cf_Asset_10086f4f8);
                      bVar3 = false;
                    }
                    else {
                      lVar8 = FUN_100170720(0,0,PTR__kCFTypeArrayCallBacks_10082e130);
                      if (lVar8 == 0) {
                        uVar6 = FUN_1001cc310();
                        cVar4 = _os_log_type_enabled(uVar6,0x10);
                        if (cVar4 != '\0') {
                          local_58._0_4_ = 0x8220202;
                          local_58._4_4_ = 0x7a0a90;
                          uStack_50 = 1;
                          uStack_4c = 0x822;
                          uStack_4a = 0x173c;
                          uStack_48 = 0x7a;
                          uStack_46 = 1;
                          uStack_44 = 0;
                          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                      }
                      else {
                        local_cb8 = lVar8;
                        for (puVar13 = *(undefined8 **)(lVar7 + 0x78); lVar8 = local_cb8,
                            puVar13 != (undefined8 *)0x0; puVar13 = (undefined8 *)*puVar13) {
                          lVar8 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
                          if (lVar8 == 0) {
                            uVar6 = FUN_1001cc310();
                            lVar8 = local_cb8;
                            cVar4 = _os_log_type_enabled(uVar6,0x10);
                            if (cVar4 != '\0') {
                              pcVar11 = "faceDictionary != nullptr";
LAB_100391c5b:
                              uStack_4c = 0x822;
                              uStack_50 = 1;
                              local_58._4_4_ = 0x7a0a90;
                              local_58._0_4_ = 0x8220202;
                              uStack_4a = SUB82(pcVar11,0);
                              uStack_48 = (undefined2)((ulong)pcVar11 >> 0x10);
                              uStack_46 = (undefined2)((ulong)pcVar11 >> 0x20);
                              uStack_44 = 0;
                              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                  &local_58,0x16);
                            }
LAB_100391a06:
                            bVar3 = false;
                            FUN_1001782e9(0,0);
                            goto LAB_100391a11;
                          }
                          if (*(int *)(puVar13 + 1) == 0) {
                            FUN_10016826a(lVar8,PTR_cf_faceAlbumUUID_10086f560,0,1);
                            lVar9 = 0;
LAB_100391755:
                            dVar16 = (double)(float)puVar13[3];
                            dVar1 = (double)(float)((ulong)puVar13[3] >> 0x20);
                            uVar14 = SUB84(dVar1,0);
                            uStack_4c = (undefined2)((ulong)dVar1 >> 0x20);
                            uStack_4a = (undefined2)((ulong)dVar1 >> 0x30);
                            dVar1 = (double)(float)puVar13[4];
                            dVar2 = (double)(float)((ulong)puVar13[4] >> 0x20);
                            uVar15 = SUB84(dVar2,0);
                            uStack_3c = (undefined4)((ulong)dVar2 >> 0x20);
                            uStack_48 = SUB82(dVar1,0);
                            uStack_46 = (undefined2)((ulong)dVar1 >> 0x10);
                            uStack_44 = (undefined2)((ulong)dVar1 >> 0x20);
                            uStack_42 = (undefined2)((ulong)dVar1 >> 0x30);
                            uVar17 = SUB84(dVar1,0);
                            uStack_50 = uVar14;
                            uStack_40 = uVar15;
                            local_58 = dVar16;
                            lVar10 = _CGRectCreateDictionaryRepresentation();
                            if (lVar10 == 0) {
                              uVar6 = FUN_1001cc310();
                              cVar4 = _os_log_type_enabled(uVar6);
                              if (cVar4 != '\0') {
                                local_58._0_4_ = 0x8220202;
                                local_58._4_4_ = 0x7a0a90;
                                uStack_50 = 1;
                                uStack_4c = 0x822;
                                uStack_4a = 0x7699;
                                uStack_48 = 0x7c;
                                uStack_46 = 1;
                                uStack_44 = 0;
                                __os_log_error_impl(0x100000000,uVar6,0x10,
                                                    "%{public}s: (%{public}s)",&local_58,0x16,dVar16
                                                    ,uVar14,uVar17,uVar15);
                              }
                              FUN_1001782e9(0);
                              goto LAB_100391809;
                            }
                            FUN_100171502(lVar8,PTR_cf_faceRectangle_10086f570,lVar10);
                            FUN_100168746(lVar8,PTR_cf_faceIndex_10086f568,
                                          *(undefined2 *)((long)puVar13 + 0xc),1);
                            FUN_1001709a5(local_cb8);
                          }
                          else {
                            lVar9 = FUN_10049a863(*(undefined8 *)(lVar7 + 0x10),
                                                  *(int *)(puVar13 + 1),1);
                            if (lVar9 != 0) {
                              lVar9 = FUN_100169885(*(undefined8 *)(lVar9 + 0x38),
                                                    *(undefined8 *)(lVar9 + 0x40));
                              if (lVar9 == 0) {
                                uVar6 = FUN_1001cc310();
                                lVar8 = local_cb8;
                                cVar4 = _os_log_type_enabled(uVar6,0x10);
                                if (cVar4 != '\0') {
                                  pcVar11 = "faceAlbumUUIDString != nullptr";
                                  goto LAB_100391c5b;
                                }
                                goto LAB_100391a06;
                              }
                              FUN_1001714de(lVar8,PTR_cf_faceAlbumUUID_10086f560,lVar9);
                              goto LAB_100391755;
                            }
                            uVar6 = FUN_1001cc310();
                            cVar4 = _os_log_type_enabled(uVar6);
                            if (cVar4 != '\0') {
                              local_58._0_4_ = 0x8220202;
                              local_58._4_4_ = 0x7a0a90;
                              uStack_50 = 1;
                              uStack_4c = 0x822;
                              uStack_4a = 0x8240;
                              uStack_48 = 0x7b;
                              uStack_46 = 1;
                              uStack_44 = 0;
                              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                                  &local_58,0x16);
                            }
                            FUN_1001782e9(0);
                            lVar9 = 0;
LAB_100391809:
                            lVar10 = 0;
                          }
                          FUN_10017060f(lVar10);
                          FUN_10017060f(lVar9);
                          FUN_10017060f();
                        }
                        bVar3 = true;
                        FUN_1001714de(local_c80,PTR_cf_faces_10086f558,local_cb8);
LAB_100391a11:
                        FUN_10017060f(lVar8);
                        if (bVar3) goto LAB_100391a1d;
                      }
                      uVar6 = FUN_1001cc310();
                      cVar4 = _os_log_type_enabled(uVar6,0x10);
                      if (cVar4 != '\0') {
                        local_58._0_4_ = 0x8220202;
                        local_58._4_4_ = 0x7a0a90;
                        uStack_50 = 1;
                        uStack_4c = 0x822;
                        uStack_4a = 0x761d;
                        uStack_48 = 0x7c;
                        uStack_46 = 1;
                        uStack_44 = 0;
                        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      bVar3 = true;
                      FUN_1001782e9(0,0);
                    }
                  }
LAB_100391a5f:
                  FUN_10017060f(local_c98);
                  FUN_10017060f(local_ca0);
                  FUN_10017060f(local_cd0);
                  if (!bVar3) {
                    FUN_1001b7a50(local_ce0);
                    FUN_1001709a5(local_c88);
                    FUN_10017060f(local_c80);
                    goto LAB_100391ab6;
                  }
                  FUN_10017060f(local_c80);
                }
                FUN_1001b7a50(local_ce0);
                uVar6 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar6,0x10);
                if (cVar4 != '\0') {
                  local_858 = 0x8220202;
                  local_854 = "Assertion failure";
                  local_84c = 0x822;
                  local_84a = "imageDictionary != nullptr";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                goto LAB_100391e3b;
              }
LAB_100391ab6:
              lVar7 = FUN_1004960d0(lVar7);
            }
            lVar7 = FUN_100496392(local_cb0);
LAB_100391c95:
            if (lVar7 == 0) {
              if (*(int *)(local_cb0 + 0x13c0) == 2) {
                lVar7 = FUN_1003954f7();
                if (lVar7 == 0) {
                  uVar6 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar6,0x10);
                  if (cVar4 != '\0') {
                    local_858 = 0x8220202;
                    local_854 = "Assertion failure";
                    local_84c = 0x822;
                    local_84a = "rootPhotosAlbumDictionary != nullptr";
                    __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                else {
                  FUN_100395408(lVar7,local_c88);
                  FUN_10017060f(lVar7);
                }
              }
              FUN_100171502(local_c90,PTR_cf_updates_10086f498,local_c88);
              iVar5 = 0;
              lVar8 = local_c88;
              lVar7 = local_c90;
            }
            else {
              if ((*(int *)(lVar7 + 0xbc) == 0) && (*(char *)(lVar7 + 0x11) != '\x01'))
              goto LAB_100391cd9;
              lVar8 = FUN_100394c21(lVar7,0);
              if (lVar8 != 0) {
                FUN_100395408(lVar8);
                FUN_10017060f(lVar8);
                goto LAB_100391cd9;
              }
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_858 = 0x8220202;
                local_854 = "Assertion failure";
                local_84c = 0x822;
                local_84a = "albumDictionary != nullptr";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,
                                    0x16);
              }
              FUN_1001782e9(0,0);
LAB_100391e3b:
              iVar5 = -0x6c;
              local_ca8 = 0;
              lVar8 = local_c88;
              lVar7 = 0;
            }
            goto LAB_100391ef4;
          }
          uVar6 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_858 = 0x8220202;
            local_854 = "Assertion failure";
            local_84c = 0x822;
            local_84a = "updatesArray != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_858,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1003911fe;
        }
        lVar8 = 0;
        lVar7 = local_c90;
      }
LAB_100391ef4:
      FUN_10017060f(lVar8);
      FUN_10017060f(local_cc0);
      if ((char)local_ca8 == '\0') {
        FUN_10017060f(local_c90);
        goto LAB_100391fb5;
      }
      iVar5 = FUN_10016a60e(lVar7,local_c78,"PhotoLibrary.plist",0,1,200,0);
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar6 = DAT_1008c75b8;
          cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
          iVar5 = 0;
          if (cVar4 != '\0') {
            local_858 = local_858 & 0xffff0000;
            __os_log_impl(0x100000000,uVar6,1,"airtraffic> Wrote PhotoLibrary.plist",&local_858,2);
          }
          goto LAB_100391fd2;
        }
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 == '\0') goto LAB_100391fd2;
        local_84a = (char *)CONCAT44(local_84a._4_4_,iVar5);
        goto LAB_100392092;
      }
    }
  }
LAB_100391fd2:
  if (local_cc8 != 0) {
    FUN_100496508();
  }
  FUN_10017060f(lVar7);
LAB_100391feb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100391cd9:
  lVar7 = FUN_100496449(lVar7);
  goto LAB_100391c95;
}

