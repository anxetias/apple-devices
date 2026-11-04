// name: FUN_1003a6ecc
// address: 1003a6ecc

undefined8 FUN_1003a6ecc(long *param_1)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != (long *)0x0) && ((int *)*param_1 != (int *)0x0)) {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1003a6f9b;
    }
    if ((int)param_1[8] != 0) {
      lVar1 = *param_1;
      if (param_1[1] == 0) {
        FUN_1001c6987(lVar1 + 200,0x64706c69,param_1,0,0);
      }
      else {
        lVar5 = FUN_1002e2e73(param_1);
        FUN_1001c6987(lVar1 + 200,0x64706c69,param_1,0,0);
        if ((lVar5 != 0) &&
           (((byte)(*(char *)(lVar5 + 0x45) - 6U) < 4 ||
            ((*(long *)(lVar5 + 8) != 0 && ((*(byte *)(*(long *)(lVar5 + 8) + 0xc3) & 0x40) != 0))))
           )) {
          FUN_1004afab9(param_1);
        }
      }
      if (((*(byte *)(lVar1 + 0x298) & 1) != 0) && (*(char *)(lVar1 + 0x2a0) != '\0')) {
        FUN_1005821b3(lVar1,1);
      }
      if (param_1[2] != 0) {
        FUN_1003a5e8f(param_1,1);
      }
      cVar3 = FUN_100489d0a(lVar1);
      if ((cVar3 != '\0') && (*(short *)(lVar1 + 0x10) != 10)) {
        FUN_100489e7b(lVar1);
      }
      if (*(short *)(lVar1 + 0x10) == 7) {
        FUN_10044b064(*(undefined8 *)(lVar1 + 8));
      }
      if (((*(byte *)(lVar1 + 0x241) & 2) != 0) && (*(int *)(*(long *)(lVar1 + 0x78) + 0x18) == 0))
      {
        FUN_1001c6987(lVar1 + 200,0x63706864,lVar1,0,0);
        plVar2 = *(long **)(lVar1 + 8);
        (**(code **)(*plVar2 + 0x10))(plVar2,0x74647068,plVar2,lVar1,0);
      }
      if (param_1[2] != 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "playlistItem->parent == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_1[3] != 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "playlistItem->nextSibling == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_1[4] != 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "playlistItem->prevSibling == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if ((int *)*param_1 != (int *)0x0) {
        if (*(int *)*param_1 != 0x706c7374) {
          uVar4 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar4,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure (expected to be true)";
            local_3c = 0x822;
            local_3a = "playlist->magic == \'plst\'";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          cVar3 = FUN_1001782e9(0,1);
          if (cVar3 == '\0') goto LAB_1003a71cc;
        }
        if ((int)param_1[8] != 0) {
          if (param_1[2] != 0) {
            uVar4 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar4,0x10);
            if (cVar3 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "playlistItem->parent == nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          FUN_1003a746e(param_1,1);
          lVar1 = *param_1;
          *param_1 = 0;
          FUN_1001c5aec(*(undefined8 *)(lVar1 + 0x70),param_1);
          uVar4 = 0;
          goto LAB_1003a6fc6;
        }
      }
LAB_1003a71cc:
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "PlaylistItemIsValid(playlistItem)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1003a6fc6;
    }
  }
LAB_1003a6f9b:
  uVar4 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar4,0x10);
  if (cVar3 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1003a6fc6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

