// name: FUN_100630699
// address: 100630699

void FUN_100630699(long param_1,byte param_2,long param_3,ulong param_4,long *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 uVar11;
  byte bVar12;
  char cVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  int iVar26;
  bool bVar27;
  byte local_288;
  undefined *local_268;
  long local_260 [2];
  uint local_24c;
  undefined *local_248;
  long local_240;
  undefined4 local_238;
  undefined2 local_234;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                     (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  local_268 = (undefined *)_objc_retainAutoreleasedReturnValue(uVar22);
  local_24c = 0xffffffff;
  if (param_3 != 0xffffffff) {
    uVar18 = (uint)param_3;
    iVar26 = (uVar18 & 0xe00) * 0x20;
    iVar2 = iVar26 + 0x60000;
    if ((uVar18 >> 0xc & 1) == 0) {
      iVar2 = iVar26;
    }
    local_24c = (uVar18 & 0x3e000) << 7 | iVar2 + (uVar18 & 0xff) + (uVar18 & 0x100) * 4;
  }
  if ((param_4 != 0) && (param_3 == 0xb1 && (param_4 & 4) == 0)) {
    local_24c = local_24c | 8;
  }
  if (param_1 == 0) {
    uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                       (PTR__OBJC_CLASS___NSError_10082c660,
                        PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                        *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0xffffffffffffffe4,0);
    lVar23 = _objc_retainAutoreleasedReturnValue(uVar22);
    if (lVar23 != 0) {
      if ((param_5 != (long *)0x0) && (*param_5 == 0)) {
        lVar25 = _objc_retainAutorelease(lVar23);
        *param_5 = lVar25;
      }
      puVar4 = PTR__objc_release_10082c7b0;
      (*(code *)PTR__objc_release_10082c7b0)(local_268);
      (*(code *)puVar4)(lVar23);
      local_268 = PTR____NSArray0__struct_10082dfe8;
    }
  }
  else {
    lVar23 = FUN_100277149();
    puVar10 = PTR_s_numberWithUnsignedShort__10088d930;
    puVar9 = PTR_s_dictionary_10088c4a0;
    puVar8 = PTR_s_numberWithInt__10088c3d0;
    puVar7 = PTR_s_addObject__10088c218;
    puVar6 = PTR_s_numberWithUnsignedLongLong__10088be20;
    puVar5 = PTR_s_numberWithUnsignedInt__10088be18;
    puVar4 = PTR_s_numberWithBool__10088be08;
    local_288 = param_2 & 0xf;
    uVar18 = ~local_24c;
    local_248 = PTR_s_setObject_forKey__10088c000;
    for (; lVar23 != 0; lVar23 = FUN_10027728e(lVar23)) {
      bVar27 = true;
      if ((*(byte *)(param_1 + 0x1bb4) & 0x40) != 0) {
        bVar12 = FUN_1003a2088(lVar23);
        bVar27 = (local_288 & bVar12) != 0;
      }
      if (((param_3 == 0xffffffff) || (!bVar27)) ||
         ((uVar19 = FUN_1003a1ec0(lVar23), (local_24c & uVar19) != 0 &&
          ((uVar19 & uVar18 & 0x20a004) == 0)))) {
        if ((param_4 != 0) && (bVar27)) {
          cVar13 = FUN_1002be646(lVar23);
          bVar27 = cVar13 != '\0';
        }
        if (bVar27) {
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,puVar9);
          local_240 = _objc_retainAutoreleasedReturnValue(uVar22);
          FUN_1001de8ee(lVar23 + 0xb8,&local_238);
          FUN_1001b8dfc(local_260,&local_238);
          uVar22 = FUN_1001bdcb0(local_260,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_Title);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001b7a50(local_260);
          FUN_1003a0ce6(lVar23,1,&local_238);
          FUN_1001b8dfc(local_260,&local_238);
          uVar22 = FUN_1001bdcb0(local_260,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_SortTitle);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001b7a50(local_260);
          FUN_1003a1958(lVar23,0x47,0,&local_238);
          FUN_1001b8dfc(local_260,&local_238);
          uVar22 = FUN_1001bdcb0(local_260,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_AlbumArtist);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001b7a50(local_260);
          FUN_1003a1958(lVar23,0x47,1,&local_238);
          FUN_1001b8dfc(local_260,&local_238);
          uVar22 = FUN_1001bdcb0(local_260,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_SortAlbumArtist);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001b7a50(local_260);
          sVar14 = FUN_1003a1f72(lVar23,0x18,0);
          sVar15 = FUN_1003a1f72(lVar23,0x31,0);
          sVar16 = FUN_1003a1f72(lVar23,0x34,0);
          if (sVar14 != 0) {
            uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar10,sVar14);
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_DiscNumber);
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          }
          if (sVar15 != 0) {
            uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar10,sVar15);
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_DiscCount);
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          }
          if (sVar16 != 0) {
            uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar10,sVar16);
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_TrackCount);
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          }
          uVar17 = *(ushort *)(lVar23 + 0xf8);
          if ((uVar17 & 8) == 0) {
            FUN_1003a152c(lVar23);
            uVar17 = *(ushort *)(lVar23 + 0xf8);
          }
          if ((uVar17 & 0x30) == 0x10) {
            (*(code *)PTR__objc_msgSend_10082c770)
                      (local_240,local_248,PTR____kCFBooleanTrue_10082e000,&cf_Compilation);
          }
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSNumber_10082c690,puVar8,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_Rating);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSNumber_10082c690,puVar6,
                              *(undefined8 *)(lVar23 + 0x20));
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_PersistentID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          if ((*(byte *)(lVar23 + 0xf8) & 2) == 0) {
            FUN_10055ea6a(lVar23);
          }
          puVar1 = *(undefined8 **)(lVar23 + 0x60);
          if (puVar1 != (undefined8 *)0x0) {
            uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar6,*puVar1);
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            (*(code *)PTR__objc_msgSend_10082c770)
                      (local_240,local_248,uVar22,&cf_RepresentativePersistentID);
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            uVar22 = *(undefined8 *)(*(long *)(puVar1[0xb] + 0x10) + 0x40);
            FUN_10047a7b5(puVar1,&local_238);
            FUN_1001b8dfc(local_260,&local_238);
            uVar24 = FUN_1001bdcb0(local_260,0);
            uVar24 = _objc_retainAutoreleasedReturnValue(uVar24);
            FUN_1001b7a50(local_260);
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar24,&cf_GenreName);
            uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                               (PTR__OBJC_CLASS___NSNumber_10082c690,puVar6,uVar22);
            uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_GenreCloudID);
            (*(code *)PTR__objc_release_10082c7b0)(uVar22);
            (*(code *)PTR__objc_release_10082c7b0)(uVar24);
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_10082c690;
          if ((*(byte *)(lVar23 + 0xf9) & 8) == 0) {
            uVar20 = FUN_1003a4b24(lVar23);
            *(undefined4 *)(lVar23 + 0x7c) = uVar20;
            *(byte *)(lVar23 + 0xf9) = *(byte *)(lVar23 + 0xf9) | 8;
          }
          else {
            uVar20 = *(undefined4 *)(lVar23 + 0x7c);
          }
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)(puVar3,puVar5,uVar20);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_LibraryAddedDate);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          puVar3 = PTR__OBJC_CLASS___NSNumber_10082c690;
          if ((*(byte *)(lVar23 + 0xf9) & 0x10) == 0) {
            uVar20 = FUN_1003a4a76(lVar23);
            *(undefined4 *)(lVar23 + 0x80) = uVar20;
            *(byte *)(lVar23 + 0xf9) = *(byte *)(lVar23 + 0xf9) | 0x10;
          }
          else {
            uVar20 = *(undefined4 *)(lVar23 + 0x80);
          }
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)(puVar3,puVar5,uVar20);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_LastPlayedDate);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          puVar3 = PTR__OBJC_CLASS___NSNumber_10082c690;
          if ((*(byte *)(lVar23 + 0xf8) & 2) == 0) {
            FUN_10055ea6a(lVar23);
          }
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (puVar3,puVar5,
                              *(undefined4 *)
                               (*(long *)(*(long *)(*(long *)(lVar23 + 0x60) + 0x58) + 0x10) + 0x8c)
                             );
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_ReleaseDate);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1002e5742(local_260,lVar23,0,0,0);
          if (local_260[0] != 0) {
            (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,local_260[0],&cf_ArtworkUUID)
            ;
          }
          puVar3 = PTR__OBJC_CLASS___NSNumber_10082c690;
          uVar22 = FUN_1003a35b8(lVar23);
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)(puVar3,puVar6,uVar22);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_AdamID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1003a499c(&local_238,lVar23);
          uVar22 = FUN_1001bdcb0(&local_238,0);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_CloudAlbumID);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001b7a50(&local_238);
          local_234 = 0;
          local_238 = 0;
          FUN_100277fec(&local_238,lVar23);
          uVar19 = local_238 & 0xff | 2;
          if (local_238._1_1_ == '\0') {
            uVar19 = local_238 & 0xff;
          }
          uVar21 = uVar19 + 4;
          if (local_238._2_1_ == '\0') {
            uVar21 = uVar19;
          }
          uVar19 = uVar21 + 0x10;
          if (local_238._3_1_ == '\0') {
            uVar19 = uVar21;
          }
          uVar21 = uVar19 | 0x20;
          if ((char)local_234 == '\0') {
            uVar21 = uVar19;
          }
          uVar11 = local_234._1_1_;
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSNumber_10082c690,puVar10,uVar21);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_AudioCapability);
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          uVar22 = (*(code *)PTR__objc_msgSend_10082c770)
                             (PTR__OBJC_CLASS___NSNumber_10082c690,puVar4,uVar11);
          uVar22 = _objc_retainAutoreleasedReturnValue(uVar22);
          (*(code *)PTR__objc_msgSend_10082c770)(local_240,local_248,uVar22,&cf_IsMasteredForITunes)
          ;
          (*(code *)PTR__objc_release_10082c7b0)(uVar22);
          FUN_1001ab006(local_260);
          lVar25 = local_240;
          if (local_240 != 0) {
            (*(code *)PTR__objc_msgSend_10082c770)(local_268,puVar7,local_240);
          }
          (*(code *)PTR__objc_release_10082c7b0)(lVar25);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(local_268);
  return;
}

