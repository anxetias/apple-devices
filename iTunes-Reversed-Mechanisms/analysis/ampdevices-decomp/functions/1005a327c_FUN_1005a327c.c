// name: FUN_1005a327c
// address: 1005a327c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1005a327c(long *param_1)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined4 local_658;
  char *local_654;
  undefined2 local_64c;
  int local_64a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar10 = *(undefined8 *)(*param_1 + 0x66d8);
  uVar7 = _CFDictionaryGetTypeID();
  lVar8 = FUN_10059ca0a(uVar10,&cf_Speakable,uVar7);
  if (lVar8 == 0) {
    uVar10 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar10,0x10);
    if (cVar1 != '\0') {
      local_44a = "dictValue != nullptr";
LAB_1005a3aab:
      local_44c = 0x822;
      local_454 = "Assertion failure";
      local_458 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  else {
    lVar8 = FUN_1001705fc(lVar8);
    FUN_10017060f(param_1[2]);
    param_1[2] = lVar8;
    lVar8 = FUN_100166c1b(lVar8,&cf_Format);
    if (lVar8 != 0) {
      lVar9 = FUN_1001705fc(lVar8);
      FUN_10017060f(param_1[0x2ae]);
      param_1[0x2ae] = lVar9;
      cVar1 = FUN_100167740(param_1[2],&cf_SampleRate,param_1 + 0x2b6);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x2b6) = 0x5622;
        (**(code **)(*(long *)param_1[0x2b3] + 0x48))((long *)param_1[0x2b3],0x5622);
        (**(code **)(*(long *)param_1[0x2b2] + 0x48))((long *)param_1[0x2b2],0x5622);
      }
      cVar1 = FUN_100170633(lVar8,&cf_IMA);
      lVar9 = s_4amiCFIA_10075a8f0._0_8_;
      if (((cVar1 != '\0') ||
          (cVar1 = FUN_100170633(lVar8,&cf_PCM), lVar9 = s_mcplEVAW_10075a900._0_8_, cVar1 != '\0'))
         || (cVar1 = FUN_100170633(lVar8,&cf_WAV), lVar9 = s_mcplEVAW_10075a900._0_8_, cVar1 != '\0'
            )) {
        param_1[0x2b5] = lVar9;
      }
      if (param_1[2] == 0) {
        uVar10 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar10,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "mSpeakableCheckpointDict != nullptr";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -0x32;
      }
      else {
        lVar8 = FUN_100166c1b(param_1[2],&cf_UICombinedStringMapFile);
        if ((lVar8 == 0) &&
           (lVar8 = FUN_100166c1b(param_1[2],&cf_UISpeakableStringMapFile), lVar8 == 0)) {
          iVar4 = FUN_1002441f8(*(undefined4 *)(*param_1 + 0x66b0),*param_1 + 0x6b40,0x73706368,1,
                                param_1 + 0x9e);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xfe;
LAB_1005a362b:
              iVar4 = FUN_1005a50dc(param_1);
            }
            else {
              uVar10 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar10,0x10);
              if (cVar1 != '\0') {
                puVar12 = &local_458;
                local_458 = 0x8220202;
                local_454 = "Assertion failure";
                local_44c = 0x400;
                local_44a = (char *)CONCAT44(local_44a._4_4_,iVar4);
LAB_1005a35d8:
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",puVar12,0x12);
              }
            }
          }
        }
        else {
          iVar4 = FUN_1002441f8(*(undefined4 *)(*param_1 + 0x66b0),*param_1 + 0x6b40,0x726f6f74,1,
                                &local_458);
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 1;
              FUN_1001e115f(lVar8,&local_658);
              lVar8 = (long)&local_658 + 2;
              if (((short)local_658 != 0) && (local_658._2_2_ == 0x2f)) {
                uVar3 = (short)local_658 - 1;
                local_658 = CONCAT22(0x2f,uVar3);
                FUN_1001c631b(&local_654,lVar8,(uint)uVar3 * 2);
              }
              FUN_100184e7f(lVar8,(short)local_658,0x2f);
              iVar4 = FUN_10017d64f(&local_458,lVar8,(short)local_658,param_1 + 0x1a,0,0);
              if (iVar4 == 0) {
                FUN_10017d5ba(param_1 + 0x1a,param_1 + 0x9e);
              }
              goto LAB_1005a362b;
            }
            uVar10 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar10,0x10);
            if (cVar1 != '\0') {
              puVar12 = &local_658;
              local_658 = 0x8220202;
              local_654 = "Assertion failure";
              local_64c = 0x400;
              local_64a = iVar4;
              goto LAB_1005a35d8;
            }
          }
        }
      }
      lVar8 = FUN_100166c1b(param_1[2],&cf_TRSS);
      if (lVar8 == 0) {
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xfd;
      }
      else {
        uVar5 = FUN_1005b0056(lVar8);
        *(uint *)((long)param_1 + 0x157c) = uVar5;
        if ((uVar5 | 2) != 3) {
          uVar10 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar10,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "mTrackBinMethod == BinMethodWithID || mTrackBinMethod == BinMethodWithHash"
            ;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 2;
      }
      lVar8 = FUN_100166c1b(param_1[2],&cf_TASS);
      if (lVar8 == 0) {
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xfb;
      }
      else {
        iVar6 = FUN_1005b0056(lVar8);
        *(int *)(param_1 + 0x2b0) = iVar6;
        if (iVar6 != 1) {
          uVar10 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar10,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "mTrackArtistBinMethod == BinMethodWithID";
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 4;
      }
      lVar8 = FUN_100166c1b(param_1[2],&cf_PLSS);
      if (lVar8 == 0) {
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xf7;
      }
      else {
        iVar6 = FUN_1005b0056(lVar8);
        *(int *)((long)param_1 + 0x1584) = iVar6;
        if (iVar6 != 1) {
          uVar10 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar10,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "mPlaylistBinMethod == BinMethodWithID";
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 8;
      }
      lVar8 = FUN_100166c1b(param_1[2],&cf_OTSS);
      if (lVar8 == 0) {
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) & 0xef;
      }
      else {
        iVar6 = FUN_1005b0056(lVar8);
        *(int *)(param_1 + 0x2b1) = iVar6;
        if (iVar6 != 3) {
          uVar10 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar10,0x10);
          if (cVar1 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "mOthersBinMethod == BinMethodWithHash";
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 0x10;
        *(undefined4 *)(param_1 + 0x2af) = 0;
        lVar8 = FUN_100166844(param_1[2],&cf_OtherTagSpeakableStrings);
        if ((lVar8 != 0) && (lVar9 = FUN_10017076e(lVar8), 0 < lVar9)) {
          lVar13 = 0;
          do {
            uVar10 = FUN_100164a01(lVar8,lVar13);
            lVar14 = 8;
            do {
              cVar1 = FUN_100170633(uVar10,*(undefined8 *)((long)&DAT_10086f050 + lVar14));
              if (cVar1 != '\0') {
                uVar5 = *(uint *)(&UNK_10086f048 + lVar14);
                *(uint *)(param_1 + 0x2af) = *(uint *)(param_1 + 0x2af) | uVar5;
                if (uVar5 == 0x40) {
                  *(byte *)((long)param_1 + 0x15b4) = *(byte *)((long)param_1 + 0x15b4) | 2;
                }
                break;
              }
              lVar14 = lVar14 + 0x10;
            } while (lVar14 != 0x78);
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar9);
        }
      }
      if ((*(byte *)(param_1 + 0x2af) & 0x40) != 0) {
        *(undefined1 *)(param_1 + 0x2cb) = 1;
      }
      FUN_10017060f(param_1[0x2be]);
      lVar8 = FUN_100172473(DAT_1008c4d90,*param_1 + 0x438,0x600);
      param_1[0x2be] = lVar8;
      uVar2 = FUN_100167dd2(param_1[2],&cf_UseCategoryFolders,0);
      *(undefined1 *)((long)param_1 + 0x15a1) = uVar2;
      uVar2 = FUN_100167dd2(param_1[2],&cf_iPodVoices,0);
      *(undefined1 *)((long)param_1 + 0x15a2) = uVar2;
      *(undefined1 *)(param_1 + 0x2b4) = uVar2;
      FUN_10017060f(param_1[0x2d5]);
      param_1[0x2d5] = 0;
      if (*(char *)((long)param_1 + 0x15a2) == '\0') {
        lVar8 = FUN_1001737e5(DAT_1008c4d90,0,param_1[0x2be]);
        auVar16 = FUN_100173d62(param_1[0x2be],&cf__,0);
        FUN_100173dea(lVar8,auVar16._0_8_,auVar16._8_8_,&cf__);
      }
      else {
        lVar8 = FUN_10053855c(param_1[0x2be]);
      }
      param_1[0x2d5] = lVar8;
      cVar1 = FUN_100171439(param_1[2],&cf_Messages);
      *(char *)((long)param_1 + 0x15a3) = cVar1;
      iVar6 = (int)param_1[0x2b5];
      if ((iVar6 != 0x696d6134) && (iVar6 != 0x6c70636d)) {
        uVar10 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar10,0x10);
        if (cVar1 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "mAudioCodec == kAudioFormatAppleIMA4 || mAudioCodec == kAudioFormatLinearPCM"
          ;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        iVar6 = (int)param_1[0x2b5];
        cVar1 = *(char *)((long)param_1 + 0x15a3);
      }
      dVar15 = (double)*(uint *)(param_1 + 0x2b6) + (double)*(uint *)(param_1 + 0x2b6);
      if (iVar6 == 0x696d6134) {
        dVar15 = dVar15 * DAT_100700b00;
      }
      else {
        dVar15 = dVar15 * ram0x00010075a920 * _DAT_10074b3f0;
      }
      uVar11 = ((int)(long)dVar15 + *(uint *)(*param_1 + 0x6f60)) - 1;
      uVar11 = uVar11 - uVar11 % *(uint *)(*param_1 + 0x6f60);
      uVar5 = uVar11 * 3 >> 1;
      *(uint *)(param_1 + 0x2b8) = uVar5;
      if (cVar1 == '\0') {
        uVar5 = uVar11;
      }
      *(uint *)((long)param_1 + 0x15bc) = uVar5;
      *(uint *)((long)param_1 + 0x15c4) = uVar11;
      *(uint *)(param_1 + 0x2b9) = uVar11;
      *(uint *)((long)param_1 + 0x15cc) = uVar11;
      goto LAB_1005a3a5e;
    }
    uVar10 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar10,0x10);
    if (cVar1 != '\0') {
      local_44a = "strValue != nullptr";
      goto LAB_1005a3aab;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1005a3a5e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

