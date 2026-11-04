// name: FUN_10037ec25
// address: 10037ec25

void FUN_10037ec25(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10037ece6:
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
      }
      cVar4 = FUN_1001782e9(0,1);
      if (cVar4 == '\0') goto LAB_10037ece6;
    }
    uVar5 = *(undefined8 *)(param_1 + 0xf0);
    plVar3 = *(long **)(param_4 + 2);
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    FUN_10037d01c(uVar5,param_2,param_3,&local_68);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

