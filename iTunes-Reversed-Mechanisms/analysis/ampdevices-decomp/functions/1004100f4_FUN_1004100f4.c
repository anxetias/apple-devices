// name: FUN_1004100f4
// address: 1004100f4

char FUN_1004100f4(void)

{
  undefined *puVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)();
  puVar1 = PTR_s_isEqualToString__10088bb98;
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar4,PTR_s_isEqualToString__10088bb98,&cf_com_apple_Photos_Album);
  cVar3 = '\x02';
  if (cVar2 != '\0') goto LAB_10041018f;
  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_Photos_SmartAlbum);
  if (cVar3 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_Photos_FolderAlbum);
    cVar3 = '\x11';
    if (cVar2 != '\0') goto LAB_10041018f;
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_Photos_Folder);
    if (cVar2 != '\0') goto LAB_10041018f;
    cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (uVar4,puVar1,&cf_com_apple_Photos_LastImportGroup);
    cVar3 = '\x04';
    if (cVar2 != '\0') goto LAB_10041018f;
    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_Photos_FavoritesGroup)
    ;
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar1,&cf_com_apple_Photos_VideosGroup);
      if (cVar3 == '\0') {
        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                          (uVar4,puVar1,&cf_com_apple_Photos_PanoramasGroup);
        if (cVar3 == '\0') {
          cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                            (uVar4,puVar1,&cf_com_apple_Photos_SloMoGroup);
          if (cVar3 == '\0') {
            cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                              (uVar4,puVar1,&cf_com_apple_Photos_TimelapseGroup);
            if (cVar3 == '\0') {
              cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                (uVar4,puVar1,&cf_com_apple_Photos_BurstGroup);
              if (cVar3 == '\0') {
                cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                  (uVar4,puVar1,&cf_com_apple_Photos_FrontCameraGroup);
                if (cVar3 == '\0') {
                  cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                    (uVar4,puVar1,&cf_com_apple_Photos_ScreenshotGroup);
                  if (cVar3 == '\0') {
                    cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                      (uVar4,puVar1,&cf_com_apple_Photos_DepthEffectGroup);
                    if (cVar3 == '\0') {
                      cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                        (uVar4,puVar1,&cf_com_apple_Photos_LivePhotosGroup);
                      if (cVar3 == '\0') {
                        cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                          (uVar4,puVar1,&cf_com_apple_Photos_LongExposureGroup);
                        if (cVar3 == '\0') {
                          cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                                            (uVar4,puVar1,&cf_com_apple_Photos_AnimatedGroup);
                          cVar3 = '\x03';
                          if (cVar2 == '\0') {
                            cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                                              (uVar4,puVar1,&cf_com_apple_Photos_FacesAlbum);
                            cVar3 = '\x0f';
                            if (cVar2 == '\0') {
                              cVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                                                (uVar4,puVar1,&cf_com_apple_Photos_RootGroup);
                              cVar3 = '\x01';
                              if (cVar2 == '\0') {
                                cVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                                                  (uVar4,puVar1,
                                                   &cf_com_apple_Photos_AllMediaTypesGroup);
                                cVar3 = (cVar3 != '\0') * '\x03';
                              }
                            }
                          }
                          goto LAB_10041018f;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cVar3 = '\x03';
LAB_10041018f:
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return cVar3;
}

