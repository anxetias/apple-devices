// name: FUN_100473c15
// address: 100473c15

void FUN_100473c15(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x80) != 0x74646174) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar2 = FUN_1001782e9(0,1);
        if (cVar2 == '\0') goto LAB_100473e49;
      }
      uVar1 = *(uint *)(DAT_1008c76a0 + 0x1a54);
      if (uVar1 < *(uint *)(param_1 + 0xd0)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInfo->revision <= revision";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(uint *)(param_1 + 0xd0) = uVar1;
      if (uVar1 < *(uint *)(lVar4 + 0x2ca8)) {
        uVar3 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar3,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackData->revision <= revision";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *(uint *)(lVar4 + 0x2ca8) = uVar1;
      plVar5 = *(long **)(param_1 + 0x68);
      if (plVar5 != (long *)0x0) {
        do {
          if (uVar1 < *(uint *)(plVar5 + 9)) {
            uVar3 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar3,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "playlistItem->revision <= revision";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          *(uint *)(plVar5 + 9) = uVar1;
          lVar4 = *plVar5;
          if (uVar1 < *(uint *)(lVar4 + 0x3b8)) {
            uVar3 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar3,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "playlistItem->playlist->revision <= revision";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            lVar4 = *plVar5;
          }
          *(uint *)(lVar4 + 0x3b8) = uVar1;
          plVar5 = (long *)plVar5[10];
        } while (plVar5 != (long *)0x0);
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_10039ffa2();
      }
      goto LAB_100473e7b;
    }
  }
LAB_100473e49:
  uVar3 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar3,0x10);
  if (cVar2 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "TrackDataIsValid(trackData)";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_100473e7b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

