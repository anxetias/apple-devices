// name: FUN_10048c7a0
// address: 10048c7a0

void FUN_10048c7a0(long param_1,short *param_2,short *param_3,undefined2 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "playlistName != nullptr";
LAB_10048c999:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    *param_4 = 0;
    if (param_1 == 0) {
LAB_10048c8d3:
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_4a = "TrackDataIsValid(trackData)";
        goto LAB_10048c999;
      }
    }
    else {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_10048c8d3;
      }
      if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_4a = "firstPlaylistFormatString != nullptr && firstPlaylistFormatString[0] != 0";
          goto LAB_10048c999;
        }
      }
      else {
        if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
          iVar5 = 1;
          do {
            psVar4 = param_3;
            if (iVar5 == 1) {
              psVar4 = param_2;
            }
            FUN_1001e1c39(psVar4,param_4);
            FUN_1001e5722(param_4,param_4,iVar5);
            lVar3 = FUN_10048b91a(param_1,param_4,1);
            iVar5 = iVar5 + 1;
          } while (lVar3 != 0);
          goto LAB_10048c9c7;
        }
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_4a = "nthPlaylistFormatString != nullptr && nthPlaylistFormatString[0] != 0";
          goto LAB_10048c999;
        }
      }
    }
  }
  FUN_1001782e9(0,0);
LAB_10048c9c7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

