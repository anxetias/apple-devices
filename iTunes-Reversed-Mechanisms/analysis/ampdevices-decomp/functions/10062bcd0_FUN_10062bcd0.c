// name: FUN_10062bcd0
// address: 10062bcd0

void FUN_10062bcd0(undefined8 *param_1,char param_2,int param_3)

{
  float fVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  cfstringStruct *pcVar14;
  undefined **ppuVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 local_290 [16];
  long local_280;
  double local_278;
  long local_270;
  int local_264;
  undefined1 local_260 [16];
  long local_250 [2];
  undefined8 local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined2 local_22c;
  char *local_22a;
  undefined2 local_222;
  char *local_220;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_264 = param_3;
  lVar8 = FUN_1005974ad(param_1,0);
  if (lVar8 == 0) {
    if (param_1 == (undefined8 *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1[0xb];
    }
  }
  local_280 = FUN_100597637(param_1,0);
  FUN_1001b7a44(local_260);
  if ((((lVar8 != 0) && ((*(uint *)((long)param_1 + 0xc2) & 0x14000800) == 0)) &&
      (param_1[0xd] != 0)) &&
     (((iVar2 = *(int *)(lVar8 + 0x3c), iVar2 == 0x46494c45 || (iVar2 == 0x53485244)) ||
      (iVar2 == 0x48545450)))) {
    local_240 = 0;
    cVar5 = FUN_10044acc3(param_1);
    if ((param_2 != '\0') || (cVar5 == '\0')) {
      local_240 = 0;
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,PTR_s_dictionary_10088c4a0)
      ;
      local_240 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSNumber_10082c690,
                         PTR_s_numberWithUnsignedLongLong__10088be20,*param_1);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_msgSend_10082c770)
                (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PersistentID);
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      iVar2 = *(int *)(lVar8 + 0x3c);
      pcVar14 = &cf_LocationType;
      if (iVar2 == 0x46494c45) {
        ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_100885738;
LAB_10062bebd:
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,ppuVar15,pcVar14);
      }
      else {
        if (iVar2 == 0x48545450) {
          ppuVar15 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_100885750;
          goto LAB_10062bebd;
        }
        if (iVar2 != 0x53485244) {
          uVar9 = FUN_1001cc310();
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_238 = 0x8220302;
            uStack_234 = 0x7a0a90;
            uStack_230 = 1;
            local_22c = 0x822;
            local_22a = "false";
            local_222 = 0x822;
            local_220 = "how did we get here, we already checked above!";
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: %{public}s (%{public}s)",
                                &local_238,0x20);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
          uVar12 = 0;
          FUN_1001782e9(0,0);
          uVar9 = local_240;
          goto LAB_10062bd50;
        }
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,
                   &PTR__OBJC_CLASS___NSConstantIntegerNumber_100885768,&cf_LocationType);
        lVar10 = FUN_100475a8c(param_1);
        if (lVar10 != 0) {
          pcVar14 = &cf_IsCloud;
          ppuVar15 = (undefined **)PTR____kCFBooleanTrue_10082e000;
          goto LAB_10062bebd;
        }
      }
      if (*(long *)(lVar8 + 0x68) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_FileSize);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(lVar8 + 100) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_TotalTime);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      lVar10 = param_1[0x10];
      if ((*(uint *)(lVar10 + 4) != 0) && (*(uint *)(lVar10 + 4) < *(uint *)(lVar8 + 100))) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_StartTime);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = param_1[0x10];
      }
      if ((*(uint *)(lVar10 + 8) != 0) && (*(uint *)(lVar10 + 8) < *(uint *)(lVar8 + 100))) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_StopTime);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = param_1[0x10];
      }
      if (*(int *)(lVar10 + 0xc) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_BookmarkTime);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)((long)param_1 + 0x13a) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,
                           *(short *)((long)param_1 + 0x13a));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumDiscNumber);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)((long)param_1 + 0x13c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,
                           *(short *)((long)param_1 + 0x13c));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumDiscCount);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)((long)param_1 + 0x136) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,
                           *(short *)((long)param_1 + 0x136));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_TrackNumber);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)(param_1 + 0x27) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,*(short *)(param_1 + 0x27));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumTrackCount);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      lVar10 = param_1[0xe];
      if (*(short *)(lVar10 + 0x10) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,*(short *)(lVar10 + 0x10));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_MovementNumber);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = param_1[0xe];
      }
      if (*(short *)(lVar10 + 0x12) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,*(short *)(lVar10 + 0x12));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_MovementCount);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)((long)param_1 + 0x142) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,
                           *(short *)((long)param_1 + 0x142));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Year);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)((long)param_1 + 0x15c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,
                           *(short *)((long)param_1 + 0x15c));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_BPM);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(short *)(lVar8 + 0x54) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,*(short *)(lVar8 + 0x54));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_BitRate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      fVar1 = *(float *)(lVar8 + 0x50);
      uVar17 = 0;
      uVar18 = 0;
      if ((fVar1 != 0.0) || (NAN(fVar1))) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18,(long)fVar1);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SampleRate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if ((*(byte *)((long)param_1 + 0xc4) & 2) != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_AlbumIsGapless);
      }
      if (*(short *)((long)param_1 + 0x12a) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInt__10088c3d0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VolumeAdjustment);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)((long)param_1 + 0x144) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PlayCount);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(param_1 + 0x2a) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SkipCount);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(char *)((long)param_1 + 300) != '\0') {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInt__10088c3d0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Rating);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanFalse_10082dff8,
                   &cf_RatingComputed);
      }
      if (*(short *)(lVar8 + 0x5a) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedShort__10088d930,*(short *)(lVar8 + 0x5a));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VolumeNormalizationEnergy);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if ((*(byte *)((long)param_1 + 0xc3) & 4) != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_AlbumIsCompilation);
      }
      lVar10 = param_1[0xf];
      if (*(int *)(lVar10 + 0xc) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoSeason);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = param_1[0xf];
      }
      if (*(int *)(lVar10 + 4) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInt__10088be18);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoEpisodeOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      lVar10 = *(long *)(lVar8 + 0x10);
      if (*(long *)(lVar10 + 0x38) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_StoreItemID);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = *(long *)(lVar8 + 0x10);
      }
      if (*(long *)(lVar10 + 0x58) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_StorePlaylistID);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if ((*(byte *)((long)param_1 + 0xc2) & 2) != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_IsUserDisabled);
      }
      if (*(char *)(param_1 + 0x17) == '\x02') {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8,2);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_LyricsContentRating);
LAB_10062c859:
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      else if (*(char *)(param_1 + 0x17) == '\x01') {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8,1);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_LyricsContentRating);
        goto LAB_10062c859;
      }
      if ((*(long *)(*(long *)(lVar8 + 0x10) + 0x10) != 0) ||
         (*(long *)(*(long *)(lVar8 + 0x10) + 0x18) != 0)) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_IsDRMProtected);
      }
      cVar5 = FUN_100481a53(param_1);
      if (cVar5 != '\0') {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_IsPlaylistOnly);
      }
      cVar5 = FUN_1004750d8(param_1);
      if (cVar5 != '\0') {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_IsParentalRestricted);
      }
      if (*(int *)(param_1 + 0x21) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_NameOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(param_1 + 0x22) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ArtistOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)((long)param_1 + 0x10c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)((long)param_1 + 0x114) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_GenreOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(param_1 + 0x23) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ComposerOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)((long)param_1 + 0x11c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumArtistOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedInteger__10088c4a8);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumArtistOrArtistOrder);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      local_240 = (*(code *)PTR__objc_retain_10082c7b8)(local_240);
      uVar7 = FUN_1004744bf(param_1,0);
      puVar4 = PTR_s_numberWithUnsignedInt__10088be18;
      uVar9 = 2;
      if ((((((((uVar7 & 1) == 0) && (uVar9 = 3, (uVar7 & 2) == 0)) && (uVar9 = 5, (uVar7 & 8) == 0)
             ) && ((uVar9 = 6, (uVar7 & 0x10) == 0 && (uVar9 = 7, (uVar7 & 0x20) == 0)))) &&
           ((uVar9 = 8, (uVar7 & 0x40) == 0 &&
            ((uVar9 = 9, -1 < (char)uVar7 && (uVar9 = 0xc, (uVar7 >> 10 & 1) == 0)))))) &&
          (uVar9 = 0xe, (uVar7 >> 0xe & 1) == 0)) &&
         ((((uVar9 = 0x10, (uVar7 & 0x60000) == 0 && (uVar9 = 0x11, (uVar7 >> 0x14 & 1) == 0)) &&
           (uVar9 = 0x13, (uVar7 >> 0x16 & 1) == 0)) &&
          ((uVar9 = 0x14, (uVar7 >> 0x17 & 1) == 0 && (uVar9 = 0x15, (uVar7 >> 0x18 & 1) == 0))))))
      {
        uVar9 = 1;
      }
      uVar12 = 4;
      if ((uVar7 & 4) == 0) {
        uVar12 = uVar9;
      }
      uVar9 = 0xf;
      if ((uVar7 >> 0x10 & 1) == 0) {
        uVar9 = uVar12;
      }
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithUnsignedInt__10088be18
                         ,uVar9);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_msgSend_10082c770)
                (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_MediaKind);
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      (*(code *)PTR__objc_release_10082c7b0)(local_240);
      cVar5 = FUN_100474d03(param_1);
      if (cVar5 != '\0') {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_IsVideo);
        if ((ushort)(*(short *)(*(long *)(lVar8 + 0x18) + 2) - 1U) < 3) {
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                     &cf_VideoIsHD);
        }
        dVar16 = (double)FUN_1002b1c1d(lVar8,1);
        local_278 = (double)CONCAT44(uVar18,uVar17);
        if ((dVar16 != 0.0) || (NAN(dVar16))) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithDouble__10088bc48)
          ;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoWidth);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        if ((local_278 != 0.0) || (NAN(local_278))) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithDouble__10088bc48)
          ;
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoHeight);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      cVar5 = FUN_100474d03(param_1);
      if ((cVar5 != '\0') || (uVar11 = FUN_100474dd0(param_1,0), (uVar11 & 0x200004) != 0)) {
        uVar9 = (*(code *)PTR__objc_retain_10082c7b8)(local_240);
        cVar5 = '\0';
        if (*(int *)((long)param_1 + 0x144) == 0) {
          cVar5 = ((*(byte *)((long)param_1 + 0xc5) & 0x20) == 0) + '\x01';
        }
        uVar12 = (*(code *)PTR__objc_msgSend_10082c770)
                           (PTR__OBJC_CLASS___NSNumber_10082c690,puVar4,cVar5);
        uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar9,PTR_s_setObject_forKey__10088c000,uVar12,&cf_PlayStatus);
        (*(code *)PTR__objc_release_10082c7b0)(uVar12);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      lVar10 = param_1[5];
      lVar3 = param_1[8];
      if (lVar3 != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20,*(undefined8 *)(lVar3 + 0x18)
                          );
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ArtistPersistentID);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        puVar13 = (undefined8 *)FUN_1005e3fda(lVar3);
        if (puVar13 != (undefined8 *)0x0) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,
                             PTR_s_numberWithUnsignedLongLong__10088be20,*puVar13);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,
                     &cf_ArtistRepresentativePersistentID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      if (lVar10 != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,
                           PTR_s_numberWithUnsignedLongLong__10088be20,
                           *(undefined8 *)(lVar10 + 0x20));
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumPersistentID);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInt__10088c3d0,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumRating);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        if ((*(byte *)(lVar10 + 0xf8) & 2) == 0) {
          FUN_10055ea6a(lVar10);
        }
        if (*(undefined8 **)(lVar10 + 0x60) != (undefined8 *)0x0) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,
                             PTR_s_numberWithUnsignedLongLong__10088be20,
                             **(undefined8 **)(lVar10 + 0x60));
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,
                     &cf_AlbumRepresentativePersistentID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
      }
      if (*(int *)(lVar8 + 0x60) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)(uint)(*(int *)(lVar8 + 0x60) - local_264) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AddedDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(lVar8 + 0x5c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)(uint)(*(int *)(lVar8 + 0x5c) - local_264) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ModifiedDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)((long)param_1 + 0x14c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)(uint)(*(int *)((long)param_1 + 0x14c) - local_264) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_LastPlayDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      if (*(int *)(param_1 + 0x2b) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)(uint)(*(int *)(param_1 + 0x2b) - local_264) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SkipDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      lVar10 = *(long *)(lVar8 + 0x10);
      if (*(uint *)(lVar10 + 0x8c) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)*(uint *)(lVar10 + 0x8c) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ReleaseDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        lVar10 = *(long *)(lVar8 + 0x10);
      }
      if (*(uint *)(lVar10 + 0x88) != 0) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)*(uint *)(lVar10 + 0x88) -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PurchaseDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      cVar5 = FUN_100474d03(param_1);
      if ((cVar5 != '\0') && (uVar7 = FUN_1003186de(param_1), uVar7 != 0)) {
        uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                          ((double)uVar7 -
                           *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008,
                           PTR__OBJC_CLASS___NSDate_10082df88,
                           PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ExpirationDate);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_100476ac1(&local_238,param_1);
      FUN_1001b80b2(local_260,&local_238);
      FUN_1001b7a50(&local_238);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Title);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1004779ac(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Artist);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_100478022(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumArtist);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047745d(&local_238,param_1);
      FUN_1001b80b2(local_260,&local_238);
      FUN_1001b7a50(&local_238);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AlbumTitle);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047a0d2(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Composer);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_100478a09(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Grouping);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047a7b5(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Genre);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047aca3(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Kind);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047b65a(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Comments);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047c1d6(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Description);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047ced8(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Category);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047dc87(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoSeries);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_10047e782(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoEpisode);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_100475454(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_ContentRating);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_100478ed2(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_Work);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1004793b3(param_1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_MovementName);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      uVar11 = FUN_100474dd0(param_1,0);
      if ((uVar11 & 4) != 0) {
        lVar10 = FUN_1002ba707(param_1);
        if ((lVar10 != 0) && (lVar10 = FUN_1002ba359(lVar10), lVar10 != 0)) {
          uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                            (PTR__OBJC_CLASS___NSNumber_10082c690,
                             PTR_s_numberWithUnsignedLongLong__10088be20,lVar10);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PodcastChannelID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        FUN_10047edcd(&local_238,param_1);
        FUN_1001b80b2(local_260,&local_238);
        FUN_1001b7a50(&local_238);
        cVar5 = FUN_1001b8428(local_260);
        if (cVar5 == '\0') {
          uVar9 = FUN_1001bdcb0(local_260,0);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PodcastEpisodeGUID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        FUN_10047d1cb(&local_238,param_1,PTR_cf_podcast_feed_url_100844b30);
        FUN_1001b80b2(local_260,&local_238);
        FUN_1001b7a50(&local_238);
        cVar5 = FUN_1001b8428(local_260);
        if (cVar5 == '\0') {
          uVar9 = FUN_1001bdcb0(local_260,0);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_PodcastFeedURL);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        FUN_10047c600(&local_238,param_1);
        FUN_1001b80b2(local_260,&local_238);
        FUN_1001b7a50(&local_238);
        cVar5 = FUN_1001b8428(local_260);
        if (cVar5 == '\0') {
          uVar9 = FUN_1001bdcb0(local_260,0);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_LongDescription);
          (*(code *)PTR__objc_release_10082c7b0)(uVar9);
        }
        if ((*(byte *)((long)param_1 + 0xc5) & 0x40) != 0) {
          (*(code *)PTR__objc_msgSend_10082c770)
                    (local_240,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                     &cf_PodcastDoNotAutoDelete);
        }
      }
      FUN_1002fb8c8(param_1,0,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SortTitle);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1002fb8c8(param_1,1,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SortAlbumTitle);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1002fb8c8(param_1,3,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SortAlbumArtist);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1002fb8c8(param_1,2,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SortArtist);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1002fb8c8(param_1,4,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_SortComposer);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1002fb8c8(param_1,5,&local_238);
      FUN_1001b8dfc(local_250,&local_238);
      FUN_1001b80b2(local_260,local_250);
      FUN_1001b7a50(local_250);
      cVar5 = FUN_1001b8428(local_260);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(local_260,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (local_240,PTR_s_setObject_forKey__10088c000,uVar9,&cf_VideoSortSeries);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      uVar12 = (*(code *)PTR__objc_retain_10082c7b8)(local_240);
      FUN_1002b4b5e(&local_238,lVar8);
      cVar5 = FUN_1001b8428(&local_238);
      if ((cVar5 != '\0') && (*(int *)(lVar8 + 0x3c) == 0x46494c45)) {
        FUN_1002b486a(local_250,lVar8);
        if (local_250[0] != 0) {
          uVar9 = FUN_100170214(0,local_250[0],0);
          FUN_1001ab218(&local_270,uVar9);
          if (local_270 != 0) {
            FUN_1001ab3ce(local_290,&local_270);
            FUN_1001b80b2(&local_238,local_290);
            FUN_1001b7a50(local_290);
          }
          FUN_1001ab3c4(&local_270);
        }
        FUN_1001a85d4(local_250);
      }
      cVar5 = FUN_1001b8428(&local_238);
      if (cVar5 == '\0') {
        uVar9 = FUN_1001bdcb0(&local_238,0);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar12,PTR_s_setObject_forKey__10088c000,uVar9,&cf_URL);
        (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      }
      FUN_1001b7a50(&local_238);
      (*(code *)PTR__objc_release_10082c7b0)(uVar12);
      if (local_280 != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar12,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_Downloadable);
      }
      FUN_1002e4079(&local_238,param_1);
      lVar10 = CONCAT44(uStack_234,local_238);
      if (lVar10 == 0) {
        if (param_1[5] != 0) {
          FUN_1002e5742(local_250,param_1[5],0,0,0);
          FUN_1001aaadc(&local_238,local_250);
          FUN_1001ab006(local_250);
          lVar10 = CONCAT44(uStack_234,local_238);
          if (lVar10 != 0) goto LAB_10062e2aa;
        }
      }
      else {
LAB_10062e2aa:
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar12,PTR_s_setObject_forKey__10088c000,lVar10,&cf_ArtworkUUID);
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar12,PTR_s_setObject_forKey__10088c000,PTR____kCFBooleanTrue_10082e000,
                   &cf_HasArtwork);
      }
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSNumber_10082c690,
                         PTR_s_numberWithUnsignedLongLong__10088be20,
                         *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x40));
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar12,PTR_s_setObject_forKey__10088c000,uVar9,&cf_GenreCloudID);
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      sVar6 = *(short *)(lVar8 + 0xec);
      if (sVar6 == 0) {
        if (*(long *)(lVar8 + 8) == 0) {
          sVar6 = 0;
        }
        else {
          sVar6 = *(short *)(*(long *)(lVar8 + 8) + 0x140);
        }
      }
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSNumber_10082c690,
                         PTR_s_numberWithUnsignedShort__10088d930,sVar6);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar12,PTR_s_setObject_forKey__10088c000,uVar9,&cf_AudioCapability);
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      uVar9 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithBool__10088be08,
                         **(byte **)(lVar8 + 0x10) >> 5 & 1);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar12,PTR_s_setObject_forKey__10088c000,uVar9,&cf_IsMasteredForITunes);
      (*(code *)PTR__objc_release_10082c7b0)(uVar9);
      FUN_1001ab006(&local_238);
      uVar9 = 0;
      goto LAB_10062bd50;
    }
  }
  uVar12 = 0;
  uVar9 = 0;
LAB_10062bd50:
  FUN_1001b7a50(local_260);
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(uVar12);
  return;
}

