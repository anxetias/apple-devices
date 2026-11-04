// name: FUN_1002dc2ba
// address: 1002dc2ba

undefined8 FUN_1002dc2ba(ID param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  bool bVar8;
  objc_super local_38;
  
  local_38.super_class = (class_t *)PTR__OBJC_CLASS___AMPDeviceInfo_1008856d8;
  local_38.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_38,PTR_s_init_10088c4d0);
  lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(IVar3);
  (*(code *)PTR__objc_release_10082c7b0)(lVar4);
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsAudio__10088c678,(int)*(char *)(param_3 + 0x2eb));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsVideo__10088c680,(int)*(char *)(param_3 + 0x2f6));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsAudiobooks__10088c688,(int)*(char *)(param_3 + 0x315));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsBooks__10088c690,(int)*(char *)(param_3 + 0x34c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsAPubBooks__10088c698,(int)*(char *)(param_3 + 0x34d));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsPDFBooks__10088c6a0,(int)*(char *)(param_3 + 0x34e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsSupplementalPDFs__10088c6a8,(int)*(char *)(param_3 + 0x34f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsMovies__10088c6b0,(int)*(char *)(param_3 + 0x2fe));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsTVShows__10088c6b8,(int)*(char *)(param_3 + 0x2ff));
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsPodcasts__10088c6c0,1);
    bVar8 = true;
    if (*(char *)(param_3 + 0x326) == '\0') {
      bVar8 = *(char *)(param_3 + 0x327) != '\0';
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsTones__10088c6c8,bVar8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsRentals__10088c6d0,(int)*(char *)(param_3 + 0x329));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsHDVideos__10088c6d8,(int)*(char *)(param_3 + 0x2f7));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsPlaylistFolders__10088c6e0,(int)*(char *)(param_3 + 0x322));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsFileSharing__10088c6e8,(int)*(char *)(param_3 + 0x350));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsWifiSyncing__10088c6f0,(int)*(char *)(param_3 + 0x351));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsAutofill__10088c6f8,(int)*(char *)(param_3 + 0x33f));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsTranscoding__10088c700,(int)*(char *)(param_3 + 0x340));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsFlashUIForShuffle__10088c708,(int)*(char *)(param_3 + 0x30c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsSoundCheckForShuffle__10088c710,
               (int)*(char *)(param_3 + 0x316));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsVolumeLimitForShuffle_10088c718,
               (int)*(char *)(param_3 + 0x317));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsHighVolumeWarningForS_10088c720,
               (int)*(char *)(param_3 + 0x318));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsGenius__10088c728,(int)*(char *)(param_3 + 0x338));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsGeniusMixes__10088c730,(int)*(char *)(param_3 + 0x33a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsAccessibility__10088c738,(int)*(char *)(param_3 + 0x349));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsSpeechClips__10088c740,(int)*(char *)(param_3 + 0x33b));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsVoiceOverKit__10088c748,(int)*(char *)(param_3 + 0x33c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsVoiceOverLanguageMenu_10088c750,
               (int)*(char *)(param_3 + 0x33d));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsCloudMusicLibrary__10088c758,(int)*(char *)(param_3 + 0x35c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsPhotos__10088c760,(int)*(char *)(param_3 + 0x2ec));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsPhotoVideos__10088c768,(int)*(char *)(param_3 + 0x2ee));
    bVar8 = true;
    if (*(char *)(param_3 + 0x6658) == '\0') {
      bVar8 = *(char *)(param_3 + 0x6659) != '\0';
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsCameraRoll__10088c770,bVar8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsCloudPhotos__10088c778,(int)*(char *)(param_3 + 0x2f5));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsMusicVideos__10088c780,(int)*(char *)(param_3 + 0x300));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsDigitalBooklets__10088c788,(int)*(char *)(param_3 + 0x34b));
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsVoiceMemos__10088c790,0);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsManualMode__10088c798,(int)*(char *)(param_3 + 0x31c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsDiskMode__10088c7a0,(int)*(char *)(param_3 + 0x2db));
    if (*(char *)(param_3 + 0x309) == '\0') {
      bVar1 = 0;
    }
    else {
      bVar1 = *(byte *)(param_3 + 0x660c) & 1;
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsContacts__10088c7a8,bVar1);
    if (*(char *)(param_3 + 0x309) == '\0') {
      bVar1 = 0;
    }
    else {
      bVar1 = (*(byte *)(param_3 + 0x660c) & 2) >> 1;
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSupportsCalendars__10088c7b0,bVar1);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsOverTheAirSync__10088c7b8,(int)*(char *)(param_3 + 0x662c));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsMultipleSyncSources__10088c7c0,
               (int)*(char *)(param_3 + 0x6632));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsClearingSyncData__10088c7c8,(int)*(char *)(param_3 + 0x6634));
    if (*(char *)(param_3 + 0x662c) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar4,PTR_s_setSyncingContactsOverTheAir__10088c7d0,*(uint *)(param_3 + 0x6614) & 1
                );
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar4,PTR_s_setSyncingCalendarsOverTheAir__10088c7d8,
                 *(byte *)(param_3 + 0x6614) >> 1 & 1);
      cVar2 = ((*(byte *)(param_3 + 0x6618) & 1) == 0 & *(byte *)(param_3 + 0x6620)) * '\x02';
      cVar7 = '\x01';
      if ((*(byte *)(param_3 + 0x6620) & 1) != 0) {
        cVar7 = cVar2;
      }
      if ((*(byte *)(param_3 + 0x6618) & 1) == 0) {
        cVar7 = cVar2;
      }
      if ((*(byte *)(param_3 + 0x6624) & 1) != 0) {
        cVar7 = '\x03';
      }
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar4,PTR_s_setContactsOverTheAirSyncSource__10088c7e0,cVar7);
      bVar1 = (byte)((*(uint *)(param_3 + 0x6620) & 2) >> 1);
      cVar2 = ((*(byte *)(param_3 + 0x6618) & 2) == 0 & bVar1) * '\x02';
      cVar7 = '\x01';
      if (bVar1 != 0) {
        cVar7 = cVar2;
      }
      if ((*(byte *)(param_3 + 0x6618) & 2) == 0) {
        cVar7 = cVar2;
      }
      cVar2 = '\x03';
      if ((*(byte *)(param_3 + 0x6624) & 2) == 0) {
        cVar2 = cVar7;
      }
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar4,PTR_s_setCalendarsOverTheAirSyncSource_10088c7e8,cVar2);
    }
    lVar5 = FUN_1002796f8(1,0);
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(lVar5 + 0xad);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsCheckedSongs__10088c7f0,(int)cVar2);
    lVar5 = FUN_1002796f8(2,0);
    if (lVar5 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(lVar5 + 0xad);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsCheckedVideos__10088c7f8,(int)cVar2);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsBackupRestore__10088c800,(int)*(char *)(param_3 + 0x30a));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsEncryptedBackups__10088c808,(int)*(char *)(param_3 + 0x662e));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setWillEncryptBackups__10088c810,(int)*(char *)(param_3 + 0x662f));
    bVar8 = true;
    if (*(char *)(param_3 + 0x6630) == '\0') {
      lVar5 = FUN_100279b99();
      bVar8 = *(char *)(lVar5 + 0x22) != '\0';
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setRequiresEncryptedBackups__10088c818,bVar8)
    ;
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setSupportsCloudBackup__10088c820,(int)*(char *)(param_3 + 0x353));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setRequiresActivation__10088c828,(int)*(char *)(param_3 + 0x362));
    lVar5 = FUN_100279b99();
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setDisableAutomaticSync__10088c830,(int)*(char *)(lVar5 + 0x1c));
    lVar5 = FUN_100279b99();
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setDisableCheckForUpdates__10088c838,(int)*(char *)(lVar5 + 0x1b));
    lVar5 = FUN_100279b99();
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setDisableFileSharing__10088c840,(int)*(char *)(lVar5 + 0x25));
    if (*(char *)(param_3 + 0x33c) == '\0') {
      bVar8 = false;
    }
    else {
      cVar2 = FUN_100537ef0(0);
      bVar8 = cVar2 != '\0';
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setHasVoiceOverKit__10088c848,bVar8);
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setScreenHeight__10088c850,*(undefined2 *)(param_3 + 0x6652));
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setScreenWidth__10088c858,*(undefined2 *)(param_3 + 0x6650));
    cVar2 = *(char *)(param_3 + 25000);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithFormat_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                         &cf__s_s,param_3 + 25000,param_3 + 0x61b8);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setModelNumber__10088c860,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0xb6);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0xb6);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setProductType__10088c868,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x16);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x16);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setProductVersion__10088c870,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x76);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x76);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setBuildVersion__10088c878,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0xf4);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0xf4);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setSerialNumber__10088c880,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    lVar5 = *(long *)(param_3 + 0x6198);
    if (lVar5 == 0) {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithFormat_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,PTR_s_stringWithFormat__10088c038,
                         &cf__llX,lVar5);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setUniqueChipIdentifier__10088c888,uVar6);
    if (lVar5 != 0) {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 500);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 500);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setUniqueDeviceIdentifier__10088c890,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x61e0);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x61e0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setInternationalMobileEquipmentI_10088c898,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x6280);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x6280);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setInternationalMobileEquipmentI_10088c8a0,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x6200);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x6200);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setIntegratedCircuitCardIdentity_10088c8a8,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x62a0);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x62a0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setIntegratedCircuitCardIdentity_10088c8b0,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x6220);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x6220);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setInternationalMobileSubscriber_10088c8b8,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x62c0);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x62c0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setInternationalMobileSubscriber_10088c8c0,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x6240);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x6240);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setMobileEquipmentIdentifier__10088c8c8,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x62e0);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x62e0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)
              (lVar4,PTR_s_setEmbeddedIntegratedCircuitCard_10088c8d0,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x61c0);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x61c0);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setPhoneNumber__10088c8d8,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
    cVar2 = *(char *)(param_3 + 0x6260);
    if (cVar2 == '\0') {
      uVar6 = 0;
    }
    else {
      IVar3 = NSString::stringWithUTF8String_
                        ((ID)PTR__OBJC_CLASS___NSString_10082c6b8,
                         PTR_s_stringWithUTF8String__10088bfc8,param_3 + 0x6260);
      uVar6 = _objc_retainAutoreleasedReturnValue(IVar3);
    }
    (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_setPhoneNumber2__10088c8e0,uVar6);
    if (cVar2 != '\0') {
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
    }
  }
  uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(lVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  return uVar6;
}

