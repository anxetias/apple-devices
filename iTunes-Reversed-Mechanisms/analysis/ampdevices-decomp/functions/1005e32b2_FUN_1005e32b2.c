// name: FUN_1005e32b2
// address: 1005e32b2

void FUN_1005e32b2(long *param_1,long param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  long lVar5;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 0x10) == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((*(long *)(param_2 + 0x48) != 0) || (*(long *)(param_2 + 0x50) != 0)) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = 
        "(inTrackInfo->nextTrackInArtistInfoPrivate == nullptr) && (inTrackInfo->prevTrackInArtistInfoPrivate == nullptr)"
        ;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(long **)(param_2 + 0x40) = param_1;
    *(undefined8 *)(param_2 + 0x48) = 0;
    lVar5 = param_1[0x1a];
    *(long *)(param_2 + 0x50) = lVar5;
    if (lVar5 == 0) {
      if (param_1[0x19] != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "mFirstTrackPrivate == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      plVar4 = param_1 + 0x19;
      if (*(int *)((long)param_1 + 0x84) != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "mNumTracks == 0";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (*(long *)(lVar5 + 0x48) != 0) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "mLastTrackPrivate->nextTrackInArtistInfoPrivate == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        lVar5 = param_1[0x1a];
      }
      plVar4 = (long *)(lVar5 + 0x48);
    }
    *plVar4 = param_2;
    if ((*(byte *)(param_2 + 0xc5) & 0x10) == 0) {
      *(int *)((long)param_1 + 0x84) = *(int *)((long)param_1 + 0x84) + 1;
    }
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) | 1;
    if (param_1[1] != 0) {
      pbVar1 = (byte *)(param_1[1] + 0x1bb1);
      *pbVar1 = *pbVar1 | 0x40;
    }
    (**(code **)(*param_1 + 0x10))(param_1);
    param_1[0x1a] = param_2;
    *(byte *)((long)param_1 + 0x5c) = *(byte *)((long)param_1 + 0x5c) & 0xf3;
    FUN_1005e35f0(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

