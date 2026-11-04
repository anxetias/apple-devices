// name: FUN_1005aebfe
// address: 1005aebfe

/* WARNING: Type propagation algorithm not settling */

int FUN_1005aebfe(long *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  undefined8 local_478;
  undefined4 local_46c;
  long local_468;
  uint local_460;
  uint local_45c [2];
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_478 = 0;
  cVar1 = FUN_10017cbd0(param_1 + 0x9e);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_45c[1] = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRFileSpecIsValid(&mOutputDirFileSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1005af0f1;
  }
  uVar2 = *(uint *)(param_1 + 0x2b7) & *(uint *)((long)param_1 + 0x15b4);
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 0x20) != 0) {
      iVar3 = FUN_1005a79d6(param_1,&local_478);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) goto LAB_1005aed32;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
          goto LAB_1005af365;
        }
      }
      goto LAB_1005af0da;
    }
LAB_1005aed32:
    iVar3 = FUN_1005a6584(param_1);
    if (iVar3 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
LAB_1005af365:
        local_44c = 0x400;
        local_454 = "Assertion failure";
        local_45c[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",local_45c + 1,0x12);
      }
      goto LAB_1005af0da;
    }
    uVar4 = FUN_100166c1b(local_478,&cf_Version);
    lVar5 = FUN_1001705fc(uVar4);
    FUN_10017060f(param_1[0x2bd]);
    param_1[0x2bd] = lVar5;
    uVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    FUN_100168746(uVar4,&cf_FamilyID,(int)param_1[0x2c3],1);
    FUN_100171502(uVar4,&cf_BuildID,param_1[0x2c1]);
    if (param_1[0x2c2] != 0) {
      FUN_100171502(uVar4,&cf_BuildVersion);
    }
    FUN_100171502(uVar4,&cf_Locale,param_1[0x2be]);
    FUN_100171502(uVar4,&cf_Format,param_1[0x2ae]);
    lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_44a = "dictBinningInfo != nullptr";
LAB_1005af401:
        local_44c = 0x822;
        local_454 = "Assertion failure";
        local_45c[1] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
      }
LAB_1005af137:
      FUN_1001782e9(0,0);
      lVar6 = 0;
      lVar8 = 0;
    }
    else {
      FUN_100168746(lVar5,&cf_UISS,*(undefined4 *)((long)param_1 + 0x161c),1);
      FUN_100168746(lVar5,&cf_PLSS,(int)param_1[0x2c5],1);
      FUN_100168746(lVar5,&cf_OTSS,*(undefined4 *)((long)param_1 + 0x162c),1);
      if ((char)param_1[0x2cb] == '\0') {
        FUN_100168746(lVar5,&cf_TRSS,(int)param_1[0x2c4],1);
      }
      if ((*(byte *)((long)param_1 + 0x15b4) & 4) != 0) {
        FUN_100168746(lVar5,&cf_TASS,*(undefined4 *)((long)param_1 + 0x1624),1);
      }
      FUN_100171502(uVar4,&cf_FolderBinning,lVar5);
      if ((*(char *)((long)param_1 + 0x15a2) == '\0') || (*(char *)((long)param_1 + 0x15a3) != '\0')
         ) {
        local_468 = 0;
      }
      else {
        lVar8 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        local_468 = lVar8;
        if (lVar8 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_44a = "dictChannelsInfo != nullptr";
            goto LAB_1005af401;
          }
          goto LAB_1005af137;
        }
        if (*(char *)(*param_1 + 0x14dc9) == '\0') {
          bVar9 = false;
        }
        else {
          bVar9 = *(char *)(*param_1 + 0x14dd5) != '\x02';
        }
        FUN_100168b0b(lVar8,&cf_SpokenMenus,bVar9,1);
        FUN_100168b0b(lVar8,&cf_VoiceOver,*(undefined1 *)(*param_1 + 0x14dc9),1);
        FUN_100171502(uVar4,&cf_Channels,lVar8);
      }
      lVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar6 == 0) {
        uVar7 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar7,0x10);
        if (cVar1 != '\0') {
          local_45c[1] = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "dictVoiceInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",local_45c + 1,0x16);
        }
        lVar6 = 0;
        FUN_1001782e9(0,0);
        lVar8 = local_468;
      }
      else {
        FUN_100171502(lVar6,&cf_Voice,param_1[0x2bf]);
        FUN_100168746(lVar6,&cf_Speed,(long)(int)param_1[0x2c0],1);
        FUN_100171502(uVar4,&cf_VoiceInfo,lVar6);
        if ((*(uint *)((long)param_1 + 0x15b4) & *(uint *)(param_1 + 0x2b7) & 0x21) != 0) {
          FUN_100171502(uVar4,&cf_MenuVersion,param_1[0x2bd]);
        }
        FUN_100171502(uVar4,&cf_iTunesVersion,&cf_13_5_6);
        lVar8 = local_468;
        if (*(char *)((long)param_1 + 0x15a2) != '\0') {
          cVar1 = FUN_1002f52d0(param_1[0x2b3],&local_46c,&local_460,local_45c);
          if (cVar1 == '\0') {
            FUN_100537ef0(0);
            local_46c = DAT_1008c7854;
          }
          else {
            uVar2 = FUN_1002f78b7(0x3d);
            if (uVar2 < local_460) {
              uVar2 = local_460;
            }
            if (local_460 == 0) {
              uVar2 = local_460;
            }
            local_460 = uVar2;
            uVar2 = FUN_1002f78b7(0x3c);
            if (uVar2 < local_45c[0]) {
              uVar2 = local_45c[0];
            }
            if (local_45c[0] == 0) {
              uVar2 = local_45c[0];
            }
            local_45c[0] = uVar2;
            FUN_100168746(uVar4,&cf_VoiceOverConditionerRulesVersion,local_460,0);
            FUN_100168746(uVar4,&cf_VoiceOverArtistExceptionsVersion,local_45c[0],0);
          }
          FUN_1001e2979(&local_46c,1,local_45c + 1,0x20);
          FUN_10016843e(uVar4,&cf_VoiceOverKitVersion,local_45c + 1,0);
          FUN_100168b0b(uVar4,&cf_PreferSystemVoice,*(undefined1 *)((long)param_1 + 0x15a4),1);
          lVar8 = local_468;
          if (*(char *)((long)param_1 + 0x15a5) == '\0') {
            FUN_100168b0b(uVar4,&cf_UseAlexVoice,0,1);
            lVar8 = local_468;
          }
        }
      }
    }
    FUN_10017060f(lVar5);
    FUN_10017060f(lVar8);
    FUN_10017060f(lVar6);
    iVar3 = FUN_10016a60e(uVar4,param_1 + 0x9e,"CacheInfo.plist",local_45c + 1,0,100,0);
  }
  else {
    iVar3 = FUN_1005a624a(param_1,&local_478);
    if (iVar3 != -0x80) {
      if (iVar3 == 0) goto LAB_1005aed32;
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar3);
        goto LAB_1005af365;
      }
    }
LAB_1005af0da:
    uVar4 = 0;
  }
  FUN_10017060f(uVar4);
  FUN_10017060f(local_478);
LAB_1005af0f1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

