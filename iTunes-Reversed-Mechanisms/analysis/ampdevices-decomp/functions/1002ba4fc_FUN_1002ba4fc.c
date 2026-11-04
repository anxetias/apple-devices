// name: FUN_1002ba4fc
// address: 1002ba4fc

long * FUN_1002ba4fc(long *param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_1002ba5d2:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_2a = "PlaylistItemIsValid(inSubscriptionPlaylistItem)";
LAB_1002ba679:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002ba5d2;
    }
    if ((int)param_1[8] == 0) goto LAB_1002ba5d2;
    cVar3 = FUN_10048c3a1(*param_1);
    if (cVar3 != '\0') {
      if ((param_1[1] == 0) || ((*(byte *)(param_1[1] + 0xc5) & 4) == 0)) {
        lVar1 = *param_1;
        lVar6 = *(long *)(lVar1 + 0x4a8);
        if (lVar6 != 0) {
          uVar2 = param_1[5];
          lVar5 = lVar1 + 0x4a8;
          do {
            bVar7 = *(ulong *)(lVar6 + 0x20) < uVar2;
            if (!bVar7) {
              lVar5 = lVar6;
            }
            lVar6 = *(long *)(lVar6 + (ulong)bVar7 * 8);
          } while (lVar6 != 0);
          if ((lVar5 != lVar1 + 0x4a8) && (*(ulong *)(lVar5 + 0x20) <= uVar2)) {
            param_1 = (long *)FUN_10048a10b(lVar1,*(undefined8 *)(lVar5 + 0x28));
            goto LAB_1002ba5f6;
          }
        }
        param_1 = (long *)0x0;
      }
      goto LAB_1002ba5f6;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_2a = "IsDistinguishedPodcastStylePlaylist(inSubscriptionPlaylistItem->playlist)";
      goto LAB_1002ba679;
    }
  }
  param_1 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_1002ba5f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

