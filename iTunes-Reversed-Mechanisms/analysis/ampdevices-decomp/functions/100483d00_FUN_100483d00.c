// name: FUN_100483d00
// address: 100483d00

bool FUN_100483d00(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  bool bVar5;
  undefined1 local_88 [16];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulong uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  if (param_1 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "playlistLocation != nullptr";
LAB_100483eb1:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (((undefined8 *)*param_1 != (undefined8 *)0x0) &&
       (piVar4 = *(int **)*param_1, piVar4 != (int *)0x0)) {
      if (*piVar4 != 0x706c7374) {
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
        if (cVar1 == '\0') goto LAB_100483dfb;
        piVar4 = *(int **)*param_1;
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,param_2);
      local_78 = param_1;
      local_68 = param_3;
      iVar2 = FUN_100483f95(piVar4,0x706c6169);
      if ((uStack_60 & 0xffff8fff) != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "(params.u.canAcceptLocation.addFileOptions & ~(kTrackDataAddFileTranscodeFile | kTrackDataAddFileUnzipFile | kTrackDataAddFileZipFile)) == 0"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (undefined4)uStack_60;
      }
      bVar5 = iVar2 == 0;
      goto LAB_100483e5e;
    }
LAB_100483dfb:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "PlaylistItemFolderIsValid(playlistLocation->parent)";
      goto LAB_100483eb1;
    }
  }
  bVar5 = false;
  FUN_1001782e9(0,0);
LAB_100483e5e:
  FUN_1001b7a50(local_88);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

