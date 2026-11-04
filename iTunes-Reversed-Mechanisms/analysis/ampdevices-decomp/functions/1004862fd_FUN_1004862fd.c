// name: FUN_1004862fd
// address: 1004862fd

void FUN_1004862fd(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004864f1:
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_3a = "PlaylistIsValid(sourcePlaylist)";
LAB_10048665c:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_1004864f1;
    }
    if (param_2 != (int *)0x0) {
      if (*param_2 != 0x706c7374) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be true)";
          local_3c = 0x822;
          local_3a = "playlist->magic == \'plst\'";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar5 = FUN_1001782e9(0,1);
        if (cVar5 == '\0') goto LAB_100486533;
      }
      if (param_1[0x9a] != param_2[0x9a]) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "sourcePlaylist->playlistKind == destPlaylist->playlistKind";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = *(int *)(*(long *)(param_2 + 2) + 0x84);
      *(undefined8 *)(param_2 + 0x10c) = *(undefined8 *)(param_1 + 0x10c);
      *(char *)(param_2 + 0x110) = (char)param_1[0x110];
      if ((iVar2 == 0x646f5069) && (*(int *)(*(long *)(param_1 + 2) + 0x84) == 0x2062696c)) {
        FUN_10063b049(param_1);
      }
      FUN_100353213(param_1,param_2,0);
      *(undefined8 *)(param_2 + 0xd1) = *(undefined8 *)(param_1 + 0xd1);
      *(short *)(param_2 + 0xd3) = (short)param_1[0xd3];
      if (iVar2 != 0x646f5069) {
        *(char *)(param_2 + 0xcd) = (char)param_1[0xcd];
        *(undefined1 *)((long)param_2 + 0x335) = *(undefined1 *)((long)param_1 + 0x335);
        uVar6 = param_1[0xcc] & 0x100000;
        uVar3 = param_2[0xcc];
        param_2[0xcc] = uVar3 & 0xffefffff | uVar6;
        uVar4 = param_1[0xcc];
        param_2[0xcc] = uVar3 & 0xffcfffff | uVar6 | uVar4 & 0x200000;
        param_2[0xcc] = uVar3 & 0xff8fffff | uVar6 | uVar4 & 0x200000 | param_1[0xcc] & 0x400000U;
        goto LAB_100486559;
      }
      *(byte *)((long)param_2 + 0x332) = *(byte *)((long)param_2 + 0x332) & 0xef;
      *(undefined2 *)(param_2 + 0xcd) = 0;
      if (((*(byte *)(param_1 + 0xa6) & 1) != 0) && (*(char *)((long)param_1 + 0x2a3) != '\0')) {
        if (*param_2 != 0x706c7374) {
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "playlist->magic == \'plst\'";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          cVar5 = FUN_1001782e9(0,1);
          if (cVar5 == '\0') {
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "PlaylistIsValid(inPlaylist)";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_1004866fa;
          }
        }
        lVar8 = FUN_100353146(param_2,0);
        if (lVar8 != 0) {
          if ((*(char *)(lVar8 + 0x1c) != '\0') || (*(int *)(lVar8 + 0x18) != 1)) {
            *(undefined4 *)(lVar8 + 0x18) = 1;
            *(undefined1 *)(lVar8 + 0x1c) = 0;
          }
          FUN_100352999(lVar8);
        }
      }
LAB_1004866fa:
      sVar1 = (short)param_1[4];
      if ((sVar1 == 0x27) || (sVar1 == 0x14)) {
        *(undefined8 *)(param_2 + 0x13c) = *(undefined8 *)(param_1 + 0x13c);
      }
      else if (sVar1 == 0x13) {
        *(undefined2 *)(param_2 + 4) = 0x14;
      }
      goto LAB_100486559;
    }
LAB_100486533:
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_3a = "PlaylistIsValid(destPlaylist)";
      goto LAB_10048665c;
    }
  }
  FUN_1001782e9(0,0);
LAB_100486559:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

