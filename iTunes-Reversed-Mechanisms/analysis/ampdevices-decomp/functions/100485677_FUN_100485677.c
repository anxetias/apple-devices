// name: FUN_100485677
// address: 100485677

undefined8 FUN_100485677(int *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100485723:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "PlaylistIsValid(inPlaylist)";
LAB_1004857a3:
      local_3c = 0x822;
      uStack_40 = 1;
      uStack_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100485723;
    }
    if (*(long *)(param_2 + 0x20) != 0) {
      lVar5 = FUN_100485529(param_1);
      do {
        if (lVar5 == 0) {
          uVar4 = 0;
          break;
        }
        lVar1 = *(long *)(lVar5 + 0x18);
        local_48 = (undefined4)lVar5;
        uStack_44 = (undefined4)((ulong)lVar5 >> 0x20);
        plVar2 = *(long **)(param_2 + 0x20);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        uVar4 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_48);
        lVar5 = lVar1;
      } while ((int)uVar4 == 0);
      goto LAB_1004857d6;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "inCallbackFunction != nullptr";
      goto LAB_1004857a3;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1004857d6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

