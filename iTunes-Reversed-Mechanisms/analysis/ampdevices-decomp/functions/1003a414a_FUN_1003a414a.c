// name: FUN_1003a414a
// address: 1003a414a

void FUN_1003a414a(long *param_1,char param_2)

{
  byte *pbVar1;
  long lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  ushort uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || (param_1[2] == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = param_1[5];
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 8) != 0x616c6269) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "inAlbumInfo->mMagic == kAlbumInfoMagic";
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar3 = FUN_1001782e9(0,1);
        if (cVar3 == '\0') goto LAB_1003a4230;
      }
      if (*(long *)(lVar2 + 0x48) != 0) {
        if (*(int *)(lVar2 + 0x14) == 0) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "albumInfo->GetNumTracks() > 0";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (param_1[7] == 0) {
          if (*(long **)(lVar2 + 0x60) != param_1) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "albumInfo->mFirstTrackPrivate == inTrackInfo";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          lVar6 = param_1[6];
          *(long *)(lVar2 + 0x60) = lVar6;
        }
        else {
          lVar6 = param_1[6];
          *(long *)(param_1[7] + 0x30) = lVar6;
        }
        if (lVar6 == 0) {
          if (*(long **)(lVar2 + 0x68) != param_1) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "albumInfo->mLastTrackPrivate == inTrackInfo";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          *(long *)(lVar2 + 0x68) = param_1[7];
        }
        else {
          *(long *)(lVar6 + 0x38) = param_1[7];
        }
        *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + -1;
        uVar7 = (ushort)*(undefined4 *)(lVar2 + 0xf8) | 1;
        *(ushort *)(lVar2 + 0xf8) = uVar7;
        if (*(long *)(lVar2 + 0x48) != 0) {
          pbVar1 = (byte *)(*(long *)(lVar2 + 0x48) + 0x1bb1);
          *pbVar1 = *pbVar1 | 0x10;
          uVar7 = *(ushort *)(lVar2 + 0xf8);
        }
        *(ushort *)(lVar2 + 0xf8) = uVar7 & 0xad7d;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        if (param_2 == '\0') {
          uVar5 = *(undefined8 *)(lVar2 + 0x48);
          uVar4 = FUN_1003a2088(lVar2);
          cVar3 = FUN_100276fe0(uVar5,uVar4);
          if (*(int *)(lVar2 + 0x14) != 0) {
            *(byte *)(lVar2 + 0xf8) = *(byte *)(lVar2 + 0xf8) & 0xf7;
            if (cVar3 == '\0') {
              *(byte *)(lVar2 + 0xfa) = *(byte *)(lVar2 + 0xfa) | 2;
            }
            else {
              FUN_1003a2334(lVar2);
              if (*param_1 == *(long *)(lVar2 + 0x70)) {
                FUN_1003a3ffe(lVar2);
              }
            }
          }
          if ((*(byte *)(lVar2 + 0xfa) & 1) != 0) {
            FUN_1003a3f50(lVar2);
          }
          FUN_10039ffa2(lVar2);
        }
        FUN_1003a04c8(lVar2);
      }
    }
  }
LAB_1003a4230:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

