// name: FUN_1005b00b0
// address: 1005b00b0

long FUN_1005b00b0(long param_1,char *param_2,ulong param_3,int param_4,undefined8 param_5,
                  char param_6,long param_7,long *param_8,undefined8 param_9)

{
  int iVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  ulong local_70;
  long local_68;
  char *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  char *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  local_60 = (char *)0x0;
  if (param_2 == (char *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "cfstrText != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    lVar3 = 0;
  }
  else {
    local_88 = param_9;
    if (param_8 != (long *)0x0) {
      *param_8 = 0;
    }
    if ((*(long *)(param_1 + 0x16a8) == 0) ||
       (local_80 = param_5, local_70 = param_3, lVar3 = FUN_1001737f8(), lVar3 == 0)) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        lVar3 = FUN_1001705fc(param_2);
        return lVar3;
      }
      goto LAB_1005b0696;
    }
    if ((param_6 == '\0') || (*(char *)(param_1 + 0x15a2) == '\0')) {
      pcVar4 = (char *)FUN_1001705fc(*(undefined8 *)(param_1 + 0x16a8));
      local_60 = pcVar4;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_58 = 0x8420202;
        local_4c = 0x842;
        local_54 = param_2;
        local_4a = pcVar4;
        __os_log_impl(0x100000000,uVar5,1,
                      "speech> using default language \"%{public}@\" => %{public}@",&local_58,0x16);
      }
LAB_1005b045e:
      if (local_68 == 0) goto LAB_1005b0469;
    }
    else {
      if (((int)local_70 == 4 && param_7 != 0) &&
         (lVar3 = FUN_100166c1b(param_7,&cf_language), lVar3 != 0)) {
        if (*(char *)(param_1 + 0x15a0) == '\0') {
LAB_1005b019e:
          lVar6 = 0x1590;
        }
        else {
          cVar2 = FUN_100537ef0(0);
          lVar6 = 0x1598;
          if (cVar2 == '\0') goto LAB_1005b019e;
        }
        cVar2 = (**(code **)(**(long **)(param_1 + lVar6) + 0x50))
                          (*(long **)(param_1 + lVar6),lVar3);
        if (cVar2 == '\0') goto LAB_1005b0294;
        local_90 = 0;
        local_78 = (char *)FUN_1001705fc(lVar3);
        local_60 = local_78;
        FUN_1005b06be(param_1,param_2,param_7,
                      *(undefined4 *)
                       (
                       "SSIUSSATSSRTSSLPSSTOSSYSSSIUSSATSSRTSSLPSSTO35AMPLClientLibraryChangesDataCreator"
                       + (long)param_4 * 4 + 0x14),local_80,*(undefined8 *)(param_1 + 0x15d0),
                      *(undefined8 *)(param_1 + 0x16a8),&local_90,&local_68,local_88);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_58 = 0x8420202;
          local_4c = 0x842;
          local_4a = local_78;
          local_54 = param_2;
          __os_log_impl(0x100000000,uVar5,1,
                        "speech> using override language \"%{public}@\" => %{public}@",&local_58,
                        0x16);
        }
        FUN_10017060f(local_90);
        pcVar4 = local_78;
        if (local_78 == (char *)0x0) goto LAB_1005b0294;
      }
      else {
LAB_1005b0294:
        FUN_1005b06be(param_1,param_2,param_7,
                      *(undefined4 *)
                       (
                       "SSIUSSATSSRTSSLPSSTOSSYSSSIUSSATSSRTSSLPSSTO35AMPLClientLibraryChangesDataCreator"
                       + (long)param_4 * 4 + 0x14),local_80,*(undefined8 *)(param_1 + 0x15d0),
                      *(undefined8 *)(param_1 + 0x16a8),&local_60,&local_68,local_88);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        pcVar4 = local_60;
        if (cVar2 != '\0') {
          local_4a = *(char **)(param_1 + 0x16a8);
          local_58 = 0x8420302;
          local_4c = 0x842;
          local_42 = 0x842;
          local_40 = local_60;
          local_54 = param_2;
          __os_log_impl(0x100000000,uVar5,1,
                        "speech> language detected \"%{public}@\" (%{public}@) => %{public}@",
                        &local_58,0x20);
          pcVar4 = local_60;
        }
      }
      if (((*(char *)(param_1 + 0x15a0) == '\0') || (*(char *)(param_1 + 0x15a5) == '\0')) ||
         (cVar2 = FUN_100170633(pcVar4,&cf_en_US), cVar2 == '\0')) goto LAB_1005b045e;
      FUN_10017060f(local_68);
      local_68 = 0;
LAB_1005b0469:
      lVar3 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar3 == 0) {
        uVar5 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar5,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "musicInfo != nullptr";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        iVar1 = (int)local_70;
        switch(iVar1) {
        case 1:
          pcVar7 = &cf_artist;
          break;
        case 2:
          pcVar7 = &cf_album;
          break;
        case 3:
        case 5:
        case 6:
        case 7:
switchD_1005b04aa_caseD_3:
          pcVar7 = &cf_unknown;
          break;
        case 4:
          pcVar7 = &cf_song;
          break;
        case 8:
          pcVar7 = &cf_composer;
          break;
        default:
          if (iVar1 == 0x10) {
            pcVar7 = &cf_genre;
          }
          else {
            if (iVar1 != 0x20) goto switchD_1005b04aa_caseD_3;
            pcVar7 = &cf_playlist;
          }
        }
        FUN_100171502(lVar3,pcVar7,param_2);
        FUN_100168746(lVar3,&cf_output,local_70 & 0xffffffff,1);
        FUN_100171502(lVar3,&cf_output_language,local_60);
        local_68 = FUN_100248fed(lVar3);
        FUN_10017060f(lVar3);
      }
    }
    if (param_8 == (long *)0x0) {
      FUN_10017060f();
      lVar3 = local_68;
    }
    else {
      *param_8 = (long)local_60;
      lVar3 = local_68;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar3;
  }
LAB_1005b0696:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

