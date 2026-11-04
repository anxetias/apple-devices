// name: FUN_1003cea85
// address: 1003cea85

int FUN_1003cea85(long param_1,int *param_2,undefined1 *param_3,long param_4,long param_5,
                 long param_6,long *param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined1 local_538 [84];
  undefined4 local_4e4;
  int *local_4e0;
  long local_4d8;
  long local_4d0;
  long local_4c8;
  long local_4c0;
  byte local_4b8 [4];
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined2 uStack_4ac;
  undefined2 uStack_4aa;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined2 uStack_4a4;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_7 != (long *)0x0) {
    *param_7 = 0;
  }
  local_4e0 = param_2;
  local_4d8 = param_6;
  local_4c8 = param_1;
  if (param_5 == 0 || param_4 != 0) {
    local_4c0 = 0;
LAB_1003ceb3b:
    lVar10 = local_4c0;
    if (param_4 == 0) goto LAB_1003ceb69;
    local_4e4 = 0;
    lVar8 = FUN_1003003ff(*(undefined8 *)(local_4c8 + 0x30),param_4,0);
  }
  else {
    lVar8 = FUN_1003c7696(param_5,0);
    lVar10 = 0;
    if ((lVar8 != 0) &&
       (lVar9 = FUN_100166b7f(lVar8,&cf_com_apple_iTunesStore_downloadInfo), lVar10 = lVar8,
       lVar9 != 0)) {
      local_4c0 = lVar8;
      param_4 = FUN_100167d88(lVar9,&cf_trackPersistentID);
      goto LAB_1003ceb3b;
    }
LAB_1003ceb69:
    FUN_1001c62d9(local_4b8,0x460);
    _memcpy((void *)((long)&local_490 + 4),local_4e0,0x420);
    lVar8 = FUN_100301c98(*(undefined8 *)(local_4c8 + 0x30),0x46494c45,local_4b8);
    local_4e4 = (undefined4)CONCAT71((int7)((ulong)lVar8 >> 8),1);
    param_4 = 0;
    local_4c0 = lVar10;
  }
  if (lVar8 == 0) {
    iVar7 = 0;
    if (param_3 == (undefined1 *)0x0) {
      iVar7 = FUN_10017d477(local_4e0,local_538,0);
      param_3 = (undefined1 *)0x0;
      if (iVar7 == 0) {
        param_3 = local_538;
      }
    }
    if (local_4c0 == 0 && param_5 != 0) {
      local_4c0 = FUN_1003c7696(param_5,0);
    }
    if (iVar7 == 0) {
      local_4d8 = FUN_100489eef(local_4d8,0,local_4e0,param_3,0,0x21a,0);
      if (local_4d8 == 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4b8[0] = 2;
          local_4b8[1] = 2;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          uStack_4b4 = 0x7a0a90;
          uStack_4b0 = 1;
          uStack_4ac = 0x822;
          uStack_4aa = 0xfbaa;
          uStack_4a8 = 0x7b;
          uStack_4a6 = 1;
          uStack_4a4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
        }
        FUN_1001782e9(0,0);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        iVar7 = -0x2b;
        if (cVar6 == '\0') goto LAB_1003ceeb2;
        pcVar13 = "sync> AddFileToPlaylist failed for device purchased track";
LAB_1003cf1f6:
        local_4b8[1] = 0;
        local_4b8[0] = 0;
        __os_log_impl(0x100000000,uVar11,0x10,pcVar13,local_4b8,2);
        iVar7 = -0x2b;
        goto LAB_1003ceeb2;
      }
      lVar10 = FUN_100597ce2(local_4d8,*(undefined8 *)(local_4c8 + 0x30));
      if (lVar10 == 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4b8[0] = 2;
          local_4b8[1] = 2;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          uStack_4b4 = 0x7a0a90;
          uStack_4b0 = 1;
          uStack_4ac = 0x822;
          uStack_4aa = 0x8e77;
          uStack_4a8 = 0x7b;
          uStack_4a6 = 1;
          uStack_4a4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        lVar8 = *(long *)(lVar10 + 8);
        if (lVar8 != 0) {
LAB_1003cef4f:
          local_4d0 = lVar8;
          if (*local_4e0 == 0x41464350) {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar11 = DAT_1008c75b8;
            cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar6 != '\0') {
              FUN_100476ac1(&local_58,lVar8);
              uVar12 = FUN_1001b83ae(&local_58);
              piVar14 = local_4e0 + 7;
              local_4b8[0] = 2;
              local_4b8[1] = 2;
              local_4b8[2] = 0x22;
              local_4b8[3] = 8;
              uStack_4b4 = (undefined4)uVar12;
              uStack_4b0 = (undefined4)((ulong)uVar12 >> 0x20);
              uStack_4ac = 0x822;
              uStack_4aa = SUB82(piVar14,0);
              uStack_4a8 = (undefined2)((ulong)piVar14 >> 0x10);
              uStack_4a6 = (undefined2)((ulong)piVar14 >> 0x20);
              uStack_4a4 = (undefined2)((ulong)piVar14 >> 0x30);
              __os_log_impl(0x100000000,uVar11,1,
                            "sync> adding device purchased track \"%{public}s\", path \"%{public}s\""
                            ,local_4b8,0x16);
              FUN_1001b7a50(&local_58);
              lVar8 = local_4d0;
            }
          }
          if (-1 < *(int *)(lVar8 + 0xc2)) {
            uVar11 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            if (cVar6 != '\0') {
              local_4b8[0] = 2;
              local_4b8[1] = 2;
              local_4b8[2] = 0x22;
              local_4b8[3] = 8;
              uStack_4b4 = 0x7a0a90;
              uStack_4b0 = 1;
              uStack_4ac = 0x822;
              uStack_4aa = 0x9ff4;
              uStack_4a8 = 0x7c;
              uStack_4a6 = 1;
              uStack_4a4 = 0;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            lVar8 = local_4d0;
          }
          if (param_7 != (long *)0x0) {
            *param_7 = lVar8;
          }
          FUN_100474ebf(lVar8,0);
          if ((char)local_4e4 == '\0') {
            lVar8 = FUN_100300729(*(undefined8 *)(local_4c8 + 0x30),param_4);
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = uStack_4b0;
            uVar2 = uStack_4b4;
            uVar11 = DAT_1008c75b8;
            uStack_4b4 = (undefined4)param_4;
            uVar3 = uStack_4b4;
            uStack_4b0 = (undefined4)((ulong)param_4 >> 0x20);
            uVar5 = uStack_4b0;
            uStack_4b4 = uVar2;
            uStack_4b0 = uVar4;
            if (lVar8 == 0) {
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar6 != '\0') {
                FUN_100476ac1(&local_58);
                uVar12 = FUN_1001b83ae(&local_58);
                local_4b8[0] = 2;
                local_4b8[1] = 2;
                local_4b8[2] = 0;
                local_4b8[3] = 8;
                uStack_4ac = 0x822;
                uStack_4aa = (undefined2)uVar12;
                uStack_4a8 = (undefined2)((ulong)uVar12 >> 0x10);
                uStack_4a6 = (undefined2)((ulong)uVar12 >> 0x20);
                uStack_4a4 = (undefined2)((ulong)uVar12 >> 0x30);
                uStack_4b4 = uVar3;
                uStack_4b0 = uVar5;
                __os_log_impl(0x100000000,uVar11,1,
                              "sync> setting persistent id %llu for track \"%{public}s\"",local_4b8,
                              0x16);
                FUN_1001b7a50(&local_58);
              }
              FUN_100472588(local_4d0,param_4,1);
            }
            else {
              cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
              if (cVar6 != '\0') {
                FUN_100476ac1(&local_58,local_4d0);
                uVar12 = FUN_1001b83ae(&local_58);
                local_4b8[0] = 2;
                local_4b8[1] = 2;
                local_4b8[2] = 0;
                local_4b8[3] = 8;
                uStack_4ac = 0x822;
                uStack_4aa = (undefined2)uVar12;
                uStack_4a8 = (undefined2)((ulong)uVar12 >> 0x10);
                uStack_4a6 = (undefined2)((ulong)uVar12 >> 0x20);
                uStack_4a4 = (undefined2)((ulong)uVar12 >> 0x30);
                uStack_4b4 = uVar3;
                uStack_4b0 = uVar5;
                __os_log_impl(0x100000000,uVar11,0x10,
                              "sync> ignoring duplicate persistent id %llu for track \"%{public}s\""
                              ,local_4b8,0x16);
                FUN_1001b7a50(&local_58);
              }
            }
          }
          if ((((local_4c0 != 0) && (cVar6 = FUN_1003203ad(local_4d0), cVar6 != '\0')) &&
              (lVar8 = FUN_100166b7f(local_4c0,&cf_com_apple_iTunesStore_downloadInfo), lVar8 != 0))
             && (cVar6 = FUN_100166fc8(lVar8,&cf_ringtone_guid,local_4b8), cVar6 != '\0')) {
            if (0x10 < local_4b8[0]) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "ringtoneGUID[0] <= 16";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            uVar11 = FUN_1001e1030(local_4b8);
            *(undefined8 *)(lVar10 + 200) = uVar11;
          }
          if (*(char *)(lVar10 + 0x45) != '\n') {
            *(undefined1 *)(lVar10 + 0x45) = 0;
            iVar7 = FUN_1002fc027(lVar10);
            if (iVar7 == -0x80) goto LAB_1003ceeb2;
            if (iVar7 != 0) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 == '\0') goto LAB_1003ceeb2;
              uStack_4aa = (undefined2)iVar7;
              uStack_4a8 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_1003cf5b3;
            }
          }
          iVar15 = 0;
          if (local_4c0 == 0) {
            local_4c0 = 0;
            iVar7 = iVar15;
            goto LAB_1003ceeb2;
          }
          if (*(char *)(lVar10 + 0x45) != '\n') {
            iVar7 = FUN_10032d276(lVar10,local_4c0,2,0);
            if (iVar7 == -0x80) goto LAB_1003ceeb2;
            if (iVar7 != 0) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_4b8[0] = 2;
                local_4b8[1] = 2;
                local_4b8[2] = 0x22;
                local_4b8[3] = 8;
                uStack_4b4 = 0x7a0a90;
                uStack_4b0 = 1;
                uStack_4ac = 0x400;
                uStack_4aa = (undefined2)iVar7;
                uStack_4a8 = (undefined2)((uint)iVar7 >> 0x10);
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_4b8,0x12
                                   );
              }
              goto LAB_1003ceeb2;
            }
          }
          lVar8 = FUN_1002b5390(lVar10);
          iVar7 = iVar15;
          if (((lVar8 != 0) && (cVar6 = FUN_10044acc3(local_4d0), cVar6 == '\0')) &&
             (lVar8 = FUN_1003ca0fa(local_4c8), lVar8 != 0)) {
            cVar6 = FUN_100485bb5(*(undefined8 *)(lVar10 + 8),lVar8,0);
            iVar7 = 0;
            if (cVar6 == '\0') {
              FUN_1003a790f(local_4d8,0,lVar8,0,0);
              iVar7 = 0;
            }
          }
          goto LAB_1003ceeb2;
        }
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4b8[0] = 2;
          local_4b8[1] = 2;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          uStack_4b4 = 0x7a0a90;
          uStack_4b0 = 1;
          uStack_4ac = 0x822;
          uStack_4aa = 0x581f;
          uStack_4a8 = 0x7b;
          uStack_4a6 = 1;
          uStack_4a4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (local_4c0 == 0 || *(char *)(local_4c8 + 0x3a2) == '\0') goto LAB_1003ceeb2;
      local_4a0 = 0;
      local_490 = 0;
      local_488 = 0;
      local_4b8[0] = 0;
      local_4b8[1] = 0;
      local_4b8[2] = 0;
      local_4b8[3] = 0;
      uStack_4b4 = 0;
      uStack_4b0 = 0;
      uStack_4ac = 0;
      uStack_4aa = 0;
      uStack_4a8 = 0;
      uStack_4a6 = 0;
      local_498 = 0x46494c45;
      lVar8 = FUN_100472d20(*(undefined8 *)(local_4c8 + 0x30),0);
      if (lVar8 == 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4b8[0] = 2;
          local_4b8[1] = 2;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          uStack_4b4 = 0x7a0a90;
          uStack_4b0 = 1;
          uStack_4ac = 0x822;
          uStack_4aa = 0x581f;
          uStack_4a8 = 0x7b;
          uStack_4a6 = 1;
          uStack_4a4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        *(byte *)(lVar8 + 0xc5) = *(byte *)(lVar8 + 0xc5) | 0x80;
        lVar10 = *(long *)(lVar8 + 0x58);
        if (lVar10 != 0) {
          iVar7 = FUN_10032d276(lVar10,local_4c0,2,0x20);
          if (iVar7 == -0x80) goto LAB_1003ceeb2;
          if (iVar7 != 0) {
            uVar11 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            if (cVar6 == '\0') goto LAB_1003ceeb2;
            uStack_4aa = (undefined2)iVar7;
            uStack_4a8 = (undefined2)((uint)iVar7 >> 0x10);
            goto LAB_1003cf5b3;
          }
          *(undefined1 *)(lVar10 + 0x45) = 10;
          (**(code **)(**(long **)(local_4c8 + 0x30) + 0x10))
                    (*(long **)(local_4c8 + 0x30),0x61747269,lVar8,0,0);
          local_4d8 = FUN_100489951(local_4d8,lVar10,0);
          if (local_4d8 != 0) goto LAB_1003cef4f;
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_4b8[0] = 2;
            local_4b8[1] = 2;
            local_4b8[2] = 0x22;
            local_4b8[3] = 8;
            uStack_4b4 = 0x7a0a90;
            uStack_4b0 = 1;
            uStack_4ac = 0x822;
            uStack_4aa = 0xfbaa;
            uStack_4a8 = 0x7b;
            uStack_4a6 = 1;
            uStack_4a4 = 0;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
          }
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar11 = DAT_1008c75b8;
          cVar6 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          iVar7 = -0x2b;
          if (cVar6 == '\0') goto LAB_1003ceeb2;
          pcVar13 = "sync> AddTrackToPlaylist failed for device purchased track";
          goto LAB_1003cf1f6;
        }
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4b8[0] = 2;
          local_4b8[1] = 2;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          uStack_4b4 = 0x7a0a90;
          uStack_4b0 = 1;
          uStack_4ac = 0x822;
          uStack_4aa = 0x8e77;
          uStack_4a8 = 0x7b;
          uStack_4a6 = 1;
          uStack_4a4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  else {
    if (*(long *)(lVar8 + 8) != 0) {
      pbVar1 = (byte *)(*(long *)(lVar8 + 8) + 0xc3);
      *pbVar1 = *pbVar1 & 0xfe;
      if ((*(char *)(lVar8 + 0x45) != '\0') &&
         (iVar7 = FUN_10017d477(local_4e0,local_538,0), iVar7 == 0)) {
        FUN_1002b0f56(lVar8);
        iVar7 = FUN_1003cc55b(lVar8,local_4e0);
        if (iVar7 == -0x80) goto LAB_1003ceeb2;
        if (iVar7 != 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 == '\0') goto LAB_1003ceeb2;
          uStack_4aa = (undefined2)iVar7;
          uStack_4a8 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003cf5b3:
          uStack_4ac = 0x400;
          uStack_4b0 = 1;
          uStack_4b4 = 0x7a0a90;
          local_4b8[2] = 0x22;
          local_4b8[3] = 8;
          local_4b8[1] = 2;
          local_4b8[0] = 2;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",local_4b8,0x12);
          goto LAB_1003ceeb2;
        }
      }
      iVar7 = 0;
      if (((((*(uint *)(local_4c8 + 0x69d0) & 0xff) * 0x100 + (uint)*(byte *)(local_4c8 + 0x69d4)) -
            0x141 < 6) && ((**(byte **)(lVar8 + 0x10) & 8) != 0)) &&
         (lVar10 = FUN_1002b44c2(lVar8), lVar10 != 0)) {
        lVar10 = local_4c0;
        if ((local_4c0 == 0 && param_5 != 0) && (lVar10 = FUN_1003c7696(param_5,0), lVar10 == 0)) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_4b8[0] = 2;
            local_4b8[1] = 2;
            local_4b8[2] = 0x22;
            local_4b8[3] = 8;
            uStack_4b4 = 0x7a0a90;
            uStack_4b0 = 1;
            uStack_4ac = 0x822;
            uStack_4aa = 0xd88e;
            uStack_4a8 = 0x7b;
            uStack_4a6 = 1;
            uStack_4a4 = 0;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
          }
          FUN_1001782e9(0,0);
          lVar10 = 0;
        }
        local_4c0 = lVar10;
        cVar6 = FUN_100171439(lVar10,&cf_dateAdded);
        iVar7 = 0;
        if (cVar6 != '\0') {
          **(byte **)(lVar8 + 0x10) = **(byte **)(lVar8 + 0x10) | 0x10;
        }
      }
      goto LAB_1003ceeb2;
    }
    uVar11 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4b8[0] = 2;
      local_4b8[1] = 2;
      local_4b8[2] = 0x22;
      local_4b8[3] = 8;
      uStack_4b4 = 0x7a0a90;
      uStack_4b0 = 1;
      uStack_4ac = 0x822;
      uStack_4aa = 0x581f;
      uStack_4a8 = 0x7b;
      uStack_4a6 = 1;
      uStack_4a4 = 0;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",local_4b8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar7 = -0x32;
LAB_1003ceeb2:
  FUN_10017060f(local_4c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

