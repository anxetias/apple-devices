// name: FUN_1002bae56
// address: 1002bae56

bool FUN_1002bae56(undefined8 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  undefined2 local_438;
  undefined1 local_436 [510];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_22a = "inPlaylistItem != nullptr";
LAB_1002bb0e0:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    cVar2 = FUN_10048c3a1(*param_1);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_22a = "IsDistinguishedPodcastStylePlaylist(inPlaylistItem->playlist)";
        goto LAB_1002bb0e0;
      }
    }
    else {
      lVar4 = FUN_1002ba4fc(param_1);
      if (lVar4 != 0) {
        if (param_2 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_238 = 0x8220202;
            local_234 = "Assertion failure";
            local_22c = 0x822;
            local_22a = "inRecentEpisodeCount != 0";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
          }
          FUN_1001782e9(0,0);
        }
        cVar2 = FUN_1002bb18d(param_1,param_3);
        bVar9 = false;
        uVar8 = 0;
        if (cVar2 != '\0') {
          puVar6 = (undefined8 *)FUN_100485529(*param_1);
          if (puVar6 != (undefined8 *)0x0) {
            uVar8 = 0;
            do {
              if (((puVar6 != param_1) &&
                  (((puVar6[1] == 0 || ((*(byte *)(puVar6[1] + 0xc5) & 4) == 0)) &&
                   (lVar7 = FUN_1002ba4fc(puVar6), lVar7 == lVar4)))) &&
                 (cVar2 = FUN_1002bb18d(puVar6,param_3), cVar2 != '\0')) {
                uVar3 = *(uint *)(*(long *)(*(long *)(puVar6[1] + 0x58) + 0x10) + 0x8c);
                uVar1 = *(uint *)(*(long *)(*(long *)(param_1[1] + 0x58) + 0x10) + 0x8c);
                if (((int)param_2 < 1 || uVar3 <= uVar1) && (-1 < (int)param_2 || uVar1 <= uVar3)) {
                  if (uVar3 == uVar1) {
                    FUN_100486a59(puVar6,&local_238);
                    FUN_100486a59(param_1,&local_438);
                    uVar3 = FUN_1002dd449((long)&local_238 + 2,(undefined2)local_238,local_436,
                                          local_438);
                    uVar8 = uVar8 + ((int)(uVar3 & param_2) < 0 ||
                                    0 < (int)uVar3 && 0 < (int)param_2);
                  }
                }
                else {
                  uVar8 = uVar8 + 1;
                }
              }
              puVar6 = (undefined8 *)puVar6[3];
            } while (puVar6 != (undefined8 *)0x0);
          }
          uVar3 = -param_2;
          if ((int)-param_2 < 0) {
            uVar3 = param_2;
          }
          bVar9 = uVar8 < uVar3;
        }
        goto LAB_1002bb111;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_22a = "podcastChannelItem != nullptr";
        goto LAB_1002bb0e0;
      }
    }
  }
  bVar9 = false;
  FUN_1001782e9(0,0);
LAB_1002bb111:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar9;
}

