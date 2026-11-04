// name: FUN_100577774
// address: 100577774

ID FUN_100577774(ID param_1,undefined8 param_2,undefined1 *param_3,long param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  objc_super local_60;
  undefined1 *local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_4 == 0 || param_3 == (undefined1 *)0x0) {
    IVar3 = 0;
  }
  else {
    local_60.super_class = (class_t *)PTR__OBJC_CLASS___AMPPhotoSyncPrefs_100885710;
    local_60.receiver = param_1;
    IVar3 = _objc_msgSendSuper2(&local_60,PTR_s_init_10088c4d0);
    if (IVar3 != 0) {
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setSyncPhotos__10088d758,(int)*(char *)(param_4 + 0x34));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoSyncSource__10088d760,*(undefined1 *)(param_4 + 0x35));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoSyncMode__10088d768,*(undefined1 *)(param_4 + 0x36));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setCopyOriginalPhotos__10088d770,(int)*(char *)(param_4 + 0x37));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoEventCount__10088d778,*(undefined1 *)(param_4 + 0xf4));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setAutoIncludePhotosEnabled__10088d780,(int)*(char *)(param_4 + 0x130))
      ;
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setOnlyFavoritePhotos__10088d788,(int)*(char *)(param_4 + 0x131));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoSyncAllAlbums__10088d790,(int)*(char *)(param_4 + 0x132));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoSyncAllFaces__10088d798,(int)*(char *)(param_4 + 0x133));
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotoSyncPhotoVideos__10088d7a0,(int)*(char *)(param_4 + 0x116));
      (*(code *)PTR__objc_msgSend_10082c770)(IVar3,PTR_s_setPhotosAppSyncMode__10088d7a8,*param_3);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppEventCount__10088d7b0,param_3[1]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppCopyOriginalPhotos__10088d7b8,(int)(char)param_3[2]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppSyncPhotoVideos__10088d7c0,(int)(char)param_3[3]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppSyncAllAlbums__10088d7c8,(int)(char)param_3[4]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppSyncAllFaces__10088d7d0,(int)(char)param_3[5]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppAutoIncludeEnabled__10088d7d8,(int)(char)param_3[6]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppOnlyFavorites__10088d7e0,(int)(char)param_3[7]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosAppCustomAlbumOrder__10088d7e8,param_3[8]);
      puVar6 = PTR_s_array_10088c210;
      local_50 = param_3;
      local_48 = IVar3;
      if (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x18)) {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSArray_10082df78,PTR_s_array_10088c210);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)PTR__objc_msgSend_10082c770)(IVar3,PTR_s_setPhotosAppAlbums__10088d7f0,uVar4);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        puVar7 = PTR_s_set_10088cad8;
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSSet_10082dfc8,PTR_s_set_10088cad8);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar3,PTR_s_setPhotosAppSelectedAlbums__10088d7f8,uVar4);
      }
      else {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
        local_40 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSMutableSet_10082dfb8,PTR_s_set_10088cad8);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        puVar7 = PTR_s_addObject__10088c218;
        puVar6 = PTR__objc_msgSend_10082c770;
        pcVar1 = *(char **)(param_3 + 0x18);
        IVar3 = local_48;
        uVar4 = local_40;
        for (pcVar8 = *(char **)(param_3 + 0x10); local_48 = IVar3, local_40 = uVar4,
            local_38 = uVar5, pcVar8 != pcVar1; pcVar8 = pcVar8 + 0xc) {
          uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,
                             PTR_s_numberWithUnsignedLongLong__10088be20,*(undefined8 *)(pcVar8 + 4)
                            );
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          (*(code *)puVar6)(local_40,puVar7,uVar4);
          if (*pcVar8 != '\0') {
            (*(code *)puVar6)(local_38,puVar7,uVar4);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar4);
          uVar5 = local_38;
          IVar3 = local_48;
          uVar4 = local_40;
        }
        (*(code *)PTR__objc_msgSend_10082c770)(IVar3,PTR_s_setPhotosAppAlbums__10088d7f0,uVar4);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar3,PTR_s_setPhotosAppSelectedAlbums__10088d7f8,uVar5);
        (*(code *)PTR__objc_release_10082c7b0)(uVar5);
        puVar6 = PTR_s_array_10088c210;
        param_3 = local_50;
        puVar7 = PTR_s_set_10088cad8;
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosFolderSyncMode__10088d800,param_3[0x68]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosFolderCopyOriginalPhoto_10088d808,(int)(char)param_3[0x69]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosFolderSyncPhotoVideos__10088d810,(int)(char)param_3[0x6a]);
      (*(code *)PTR__objc_msgSend_10082c770)
                (IVar3,PTR_s_setPhotosFolderCustomAlbumOrder__10088d818,param_3[0x6b]);
      if ((param_3[0x70] != '\0') && (param_3[0x71] != '\0')) {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,puVar6);
        local_40 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSMutableSet_10082dfb8,puVar7);
        local_38 = _objc_retainAutoreleasedReturnValue(uVar4);
        puVar7 = PTR_s_addObject__10088c218;
        puVar6 = PTR__objc_msgSend_10082c770;
        pcVar1 = *(char **)(param_3 + 0x4b0);
        IVar3 = local_48;
        for (pcVar8 = *(char **)(param_3 + 0x4a8); local_48 = IVar3, pcVar8 != pcVar1;
            pcVar8 = pcVar8 + 0x204) {
          uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSString_10082c6b8,
                             PTR_s_stringWithCharacters_length__10088d820,pcVar8 + 6,
                             *(undefined2 *)(pcVar8 + 4));
          uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
          (*(code *)puVar6)(local_40,puVar7,uVar4);
          if (*pcVar8 != '\0') {
            (*(code *)puVar6)(local_38,puVar7,uVar4);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar4);
          IVar3 = local_48;
        }
        (*(code *)PTR__objc_msgSend_10082c770)(IVar3,PTR_s_setPhotosFolderNames__10088d828,local_40)
        ;
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar3,PTR_s_setPhotosFolderSelectedNames__10088d830,local_38);
        uVar4 = FUN_10016ff43(0,puVar2 + 0x88);
        (*(code *)PTR__objc_msgSend_10082c770)(IVar3,PTR_s_setPhotosFolderURL__10088d838,uVar4);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (IVar3,PTR_s_setPhotosFolderBookmark__10088d840,*(undefined8 *)(puVar2 + 0x78));
        puVar6 = PTR__objc_release_10082c7b0;
        (*(code *)PTR__objc_release_10082c7b0)(local_38);
        (*(code *)puVar6)(local_40);
      }
    }
    IVar3 = (*(code *)PTR__objc_retain_10082c7b8)(IVar3);
    param_1 = IVar3;
  }
  (*(code *)PTR__objc_release_10082c7b0)(param_1);
  return IVar3;
}

