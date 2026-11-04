// name: FUN_1002426dc
// address: 1002426dc

ulong FUN_1002426dc(int *param_1,long param_2,int param_3,uint param_4,long *param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1003698f1(param_2);
  if (lVar2 == 0) {
LAB_100242926:
    uVar8 = 0;
    goto LAB_100242996;
  }
  if (param_1 == (int *)0x0) {
LAB_10024292b:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "PlaylistIsValid(inSrcPlaylist)";
LAB_100242a6d:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10024292b;
    }
    if ((param_2 == 0) || (*(long *)(param_2 + 0x10) == 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "TrackInfoIsValid(inSeedTrackInfo)";
        goto LAB_100242a6d;
      }
    }
    else {
      if (*param_5 != 0) {
        lVar2 = *(long *)(*(long *)(param_1 + 2) + 0x2cc8);
        if (lVar2 != 0) {
          lVar4 = FUN_10048584d(param_2,param_1,0);
          uVar5 = FUN_1003698f1(param_2);
          if (lVar4 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be not NULL)";
              local_4c = 0x822;
              local_4a = "seedPlaylistItem";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            uVar8 = 0;
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 == '\0') goto LAB_100242996;
          }
          pvVar6 = (void *)FUN_1002ed376(lVar2,uVar5);
          if (pvVar6 == (void *)0x0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be not NULL)";
              local_4c = 0x822;
              local_4a = "echoPlaylistContext";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            uVar8 = 0;
            cVar1 = FUN_1001782e9(0x400,0);
            if (cVar1 == '\0') goto LAB_100242996;
          }
          local_5c._0_1_ = (char)param_4;
          if ((char)local_5c != '\0') {
            FUN_10037b52e(*param_5,lVar4);
          }
          local_5c = (uint)((char)local_5c != '\0');
          uVar8 = (ulong)param_4;
          if (pvVar6 != (void *)0x0) {
            uVar7 = FUN_1002ed8e2(pvVar6);
            if (uVar7 != 0) {
              do {
                if ((((uVar7 != uVar5) &&
                     (lVar2 = FUN_1003075bc(*(undefined8 *)(param_1 + 2),uVar7), uVar8 = uVar5,
                     lVar2 != 0)) &&
                    ((cVar1 = FUN_1004746c0(lVar2), lVar2 == param_2 || (cVar1 == '\0')))) &&
                   (((*(byte *)(lVar2 + 0xc3) & 0x80) == 0 &&
                    (lVar2 = FUN_10048584d(lVar2,param_1,0), lVar2 != 0)))) {
                  local_5c = local_5c + 1;
                  FUN_10037b52e(*param_5,lVar2);
                  if (param_3 - 1U < local_5c) break;
                }
                uVar7 = FUN_1002ed8e2(pvVar6);
              } while (uVar7 != 0);
            }
            uVar8 = CONCAT71((int7)(uVar8 >> 8),local_5c != 0);
            FUN_1002edf16(pvVar6);
            operator_delete(pvVar6);
          }
          goto LAB_100242996;
        }
        goto LAB_100242926;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = "ioLookupTable != __null";
        goto LAB_100242a6d;
      }
    }
  }
  uVar8 = 0;
  FUN_1001782e9(0,0);
LAB_100242996:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8 & 0xffffffff;
}

