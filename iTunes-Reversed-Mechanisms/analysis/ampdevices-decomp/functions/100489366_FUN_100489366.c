// name: FUN_100489366
// address: 100489366

undefined8 FUN_100489366(int *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048942e:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
      goto LAB_100489593;
    }
    goto LAB_1004896c2;
  }
  if (*param_1 != 0x706c7374) {
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
    if (cVar3 == '\0') goto LAB_10048942e;
  }
  if (param_2 == (long *)0x0) {
LAB_1004895d3:
    cVar3 = FUN_10048971d(*(undefined8 *)(param_1 + 10));
    if (cVar3 != '\0') {
      FUN_100585431(param_1,*(undefined8 *)(param_1 + 10));
    }
    FUN_1002f8673(param_1);
    FUN_1002f7de0(param_1,param_2);
    cVar3 = FUN_10048971d(*(undefined8 *)(param_1 + 10));
    if (cVar3 != '\0') {
      FUN_100585003(param_1,*(undefined8 *)(param_1 + 10));
    }
    FUN_100484c95(param_1);
    uVar4 = 0;
    FUN_1001c6987(param_1 + 0x32,0x6d706c73,param_1,0,0);
    plVar2 = *(long **)(param_1 + 2);
    (**(code **)(*plVar2 + 0x10))(plVar2,0x74646d70,plVar2,param_1,0);
    goto LAB_1004896d1;
  }
  lVar1 = *param_2;
  if ((lVar1 == 0) || (*(long *)(lVar1 + 8) == *(long *)(param_1 + 2))) {
    piVar5 = (int *)param_2[1];
    if ((1 < (long)piVar5 + 1U) && (*(long *)(piVar5 + 2) != *(long *)(param_1 + 2))) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_3a = 
        "position->afterPlaylist == nullptr || position->afterPlaylist == ((Playlist *) 0xFFFFFFFFFFFFFFFF) || position->afterPlaylist->trackData == trackData"
        ;
        goto LAB_100489524;
      }
      goto LAB_100489549;
    }
    if (lVar1 == 0) {
LAB_1004895ca:
      if (piVar5 == param_1) {
        uVar4 = 0;
        goto LAB_1004896d1;
      }
      goto LAB_1004895d3;
    }
    cVar3 = FUN_100485090(param_1);
    if (cVar3 != '\0') {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 == '\0') goto LAB_1004896c2;
      local_3a = "PlaylistIsParent(playlist, newPosition->parent) == false";
      goto LAB_100489593;
    }
    if ((int *)*param_2 != param_1) {
      piVar5 = (int *)param_2[1];
      goto LAB_1004895ca;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "newPosition->parent != playlist";
      goto LAB_100489593;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "position->parent == nullptr || position->parent->trackData == trackData";
LAB_100489524:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_100489549:
    FUN_1001782e9(0,0);
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_3a = "PlaylistPositionIsValid(playlist->trackData, newPosition)";
LAB_100489593:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
LAB_1004896c2:
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1004896d1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

