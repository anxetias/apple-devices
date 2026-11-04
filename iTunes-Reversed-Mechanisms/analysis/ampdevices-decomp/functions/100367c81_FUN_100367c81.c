// name: FUN_100367c81
// address: 100367c81

void FUN_100367c81(undefined8 param_1,long param_2,char param_3,undefined1 param_4,
                  undefined1 *param_5,undefined4 param_6)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_1;
  local_5c = param_6;
  FUN_1001a8c1c(&local_58,&PTR_cf_syncDevice_100855940);
  FUN_100365318(&local_80,&local_58,0);
  FUN_1001ab006(&local_58);
  if (local_80 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "event != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(1,0);
  }
  else {
    local_68 = local_80;
    plVar3 = (long *)(**(code **)(*local_80 + 0x10))();
    if (*plVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "eventDict.IsValid()";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      (**(code **)(*local_68 + 0x78))(local_68,param_2);
      FUN_1001a7b90(&local_58,&PTR_cf_automaticSync_100855948);
      FUN_1001a9d34(plVar3,&local_58,param_3);
      FUN_1001ab240(&local_58);
      if (*(char *)(param_2 + 0x351) != '\0') {
        FUN_1001a7b90(&local_58,&PTR_cf_wifiSync_100855950);
        FUN_1001a9d34(plVar3,&local_58,param_4);
        FUN_1001ab240(&local_58);
      }
      if (param_3 != '\0') {
        FUN_1001a7b90(&local_58,&PTR_cf_syncMusic_100855958);
        FUN_1001a9d34(plVar3,&local_58,*param_5);
        FUN_1001ab240(&local_58);
        if (*(char *)(param_2 + 0x300) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncMusicVideos_100855960);
          FUN_1001a9d34(plVar3,&local_58,param_5[1]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x2fe) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncMovies_100855968);
          FUN_1001a9d34(plVar3,&local_58,param_5[2]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x2ff) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncTVShows_100855970);
          FUN_1001a9d34(plVar3,&local_58,param_5[3]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x313) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncPodcasts_100855978);
          FUN_1001a9d34(plVar3,&local_58,param_5[4]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x314) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncITunesU_100855980);
          FUN_1001a9d34(plVar3,&local_58,param_5[5]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x315) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncAudiobooks_100855988);
          FUN_1001a9d34(plVar3,&local_58,param_5[6]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x34c) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncBooks_100855990);
          FUN_1001a9d34(plVar3,&local_58,param_5[7]);
          FUN_1001ab240(&local_58);
        }
        if ((*(char *)(param_2 + 0x326) != '\0') || (*(char *)(param_2 + 0x327) != '\0')) {
          FUN_1001a7b90(&local_58,&PTR_cf_syncTones_100855998);
          FUN_1001a9d34(plVar3,&local_58,param_5[8]);
          FUN_1001ab240(&local_58);
        }
        if (*(char *)(param_2 + 0x2ec) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncPhotos_1008559a0);
          FUN_1001a9d34(plVar3,&local_58,param_5[10]);
          FUN_1001ab240(&local_58);
          if ((param_5[0xb] != '\0') || (param_5[10] == '\x01')) {
            FUN_1001a7b90(&local_58,&PTR_cf_photoApplication_1008559a8);
            FUN_100368258(plVar3,&local_58,param_5 + 0xb);
            FUN_1001ab240(&local_58);
          }
          if ((*(int *)(param_5 + 0xc) != 0) ||
             ((param_5[10] == '\x01' && (param_5[0xb] != '\x02')))) {
            FUN_1001a7b90(&local_58,&PTR_cf_photoApplicationVersion_1008559b0);
            FUN_1003682b6(plVar3,&local_58,param_5 + 0xc);
            FUN_1001ab240(&local_58);
          }
        }
        if (*(char *)(param_2 + 0x309) != '\0') {
          FUN_1001a7b90(&local_58,&PTR_cf_syncStructuredData_1008559b8);
          FUN_1001a9d34(plVar3,&local_58,param_5[0x10]);
          FUN_1001ab240(&local_58);
        }
      }
      FUN_1001a7b90(&local_58,&PTR_cf_opStatus_100855928);
      FUN_100365d78(plVar3,&local_58,&local_5c);
      FUN_1001ab240(&local_58);
      FUN_1001a7b90(&local_58,&PTR_cf_opDuration_100855930);
      FUN_10036799a(plVar3,&local_58);
      FUN_1001ab240(&local_58);
      (**(code **)(*local_68 + 0x20))(local_68,0);
    }
  }
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar3 = local_78 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

