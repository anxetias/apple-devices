// name: FUN_1005e5a00
// address: 1005e5a00

void FUN_1005e5a00(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar2 = *(long **)(param_1 + 0x40);
    if (plVar2 != (long *)0x0) {
      if ((int)plVar2[0xb] != 0x61747369) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "inArtistInfo->mMagic == kArtistInfoMagic";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar4 = FUN_1001782e9(0,1);
        if (cVar4 == '\0') goto LAB_1005e5af4;
      }
      if (plVar2[1] != 0) {
        if ((*(int *)((long)plVar2 + 0x84) == 0) && ((*(byte *)(param_1 + 0xc5) & 0x10) == 0)) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "mNumTracks > 0 || inTrackInfo->isArtistPlaceholder";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar3 = *(long *)(param_1 + 0x50);
        if (lVar3 == 0) {
          if (plVar2[0x19] != param_1) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "mFirstTrackPrivate == inTrackInfo";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          lVar8 = *(long *)(param_1 + 0x48);
          plVar2[0x19] = lVar8;
        }
        else {
          lVar8 = *(long *)(param_1 + 0x48);
          *(long *)(lVar3 + 0x48) = lVar8;
        }
        if (lVar8 == 0) {
          if (plVar2[0x1a] != param_1) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "mLastTrackPrivate == inTrackInfo";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          plVar2[0x1a] = *(long *)(param_1 + 0x50);
        }
        else {
          *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(param_1 + 0x50);
        }
        if ((*(byte *)(param_1 + 0xc5) & 0x10) == 0) {
          *(int *)((long)plVar2 + 0x84) = *(int *)((long)plVar2 + 0x84) + -1;
        }
        uVar6 = (ushort)*(undefined4 *)((long)plVar2 + 0x5c) | 1;
        *(ushort *)((long)plVar2 + 0x5c) = uVar6;
        if (plVar2[1] != 0) {
          pbVar1 = (byte *)(plVar2[1] + 0x1bb1);
          *pbVar1 = *pbVar1 | 0x40;
          uVar6 = *(ushort *)((long)plVar2 + 0x5c);
        }
        *(ushort *)((long)plVar2 + 0x5c) = uVar6 & 0xfdf7;
        if (plVar2[10] == 0) {
          *(ushort *)((long)plVar2 + 0x5c) = uVar6 & 0xfdf7 | 2;
        }
        (**(code **)(*plVar2 + 0x10))(plVar2);
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x48) = 0;
        *(undefined8 *)(param_1 + 0x50) = 0;
        if (*(int *)((long)plVar2 + 0x84) != 0) {
          lVar8 = plVar2[1];
          uVar5 = FUN_1005e4b52(plVar2);
          cVar4 = FUN_1004cfafa(lVar8,uVar5);
          if (cVar4 == '\0') {
            *(byte *)((long)plVar2 + 0x5c) = *(byte *)((long)plVar2 + 0x5c) | 0x40;
          }
          else if (lVar3 == 0) {
            FUN_1005e36b2(plVar2,0);
          }
        }
        (**(code **)(*plVar2 + 0x80))(plVar2);
        FUN_1005e37a3(plVar2);
      }
    }
  }
LAB_1005e5af4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

