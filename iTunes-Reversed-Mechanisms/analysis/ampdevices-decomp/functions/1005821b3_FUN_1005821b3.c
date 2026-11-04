// name: FUN_1005821b3
// address: 1005821b3

void FUN_1005821b3(int *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  undefined2 local_32;
  char *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100582240:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid( inPlaylist )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100582240;
    }
    if ((*(byte *)(param_1 + 0xa6) & 1) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "inPlaylist->isSmartPlaylist";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (((*(byte *)(param_1 + 0xa6) & 4) == 0) == (bool)param_2) {
      if (DAT_1008c2618 != -1) {
        _dispatch_once(&DAT_1008c2618,&PTR___NSConcreteGlobalBlock_10086a960);
      }
      uVar2 = DAT_1008c2610;
      cVar1 = _os_log_type_enabled(DAT_1008c2610,1);
      if (cVar1 != '\0') {
        FUN_100486ef1(local_58,param_1);
        local_44 = (char *)FUN_1001b83ae(local_58);
        local_3a = "false";
        if (param_2 != '\0') {
          local_3a = "true";
        }
        local_48 = 0x8220302;
        local_3c = 0x820;
        local_32 = 0x820;
        local_30 = "application";
        __os_log_impl(0x100000000,uVar2,1,
                      "spl> SetSmartPlaylistNeedsUpdate(): playlist = \"%{public}s\", needsUpdate = %s, context = %s"
                      ,&local_48,0x20);
        FUN_1001b7a50(local_58);
      }
      *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & 0xfb | param_2 * '\x04';
      if (param_2 != '\0') {
        FUN_10031a3b1(*(undefined8 *)(param_1 + 2));
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

