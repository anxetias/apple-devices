// name: FUN_10048a83d
// address: 10048a83d

undefined8 FUN_10048a83d(int *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_88;
  long lStack_80;
  undefined **local_78 [4];
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_10048a8bf:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistIsValid(playlist)";
LAB_10048a93f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
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
      if (cVar1 == '\0') goto LAB_10048a8bf;
    }
    cVar1 = FUN_1003a77fe(param_1,param_2);
    if (cVar1 != '\0') {
      if (param_2 == (long *)0x0) {
        local_88 = *(long *)(param_1 + 0x1e);
        lStack_80 = *(long *)(local_88 + 0x10);
      }
      else {
        local_88 = *param_2;
        lStack_80 = param_2[1];
      }
      local_78[0] = &PTR_FUN_10085c708;
      local_58 = local_78;
      FUN_100485677(param_1,local_78);
      if (local_58 == local_78) {
        lVar3 = 0x20;
LAB_10048a9bf:
        (**(code **)((long)*local_58 + lVar3))();
      }
      else {
        lVar3 = 0x28;
        if (local_58 != (undefined ***)0x0) goto LAB_10048a9bf;
      }
      uVar2 = 0;
      if (*(long *)(*(long *)(param_1 + 0x28) + 8) != 0) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        do {
          lVar4 = lVar3;
          FUN_10048a5e2(lVar4,&local_88);
          lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
          lStack_80 = lVar4;
        } while (*(long *)(*(long *)(param_1 + 0x28) + 8) != 0);
      }
      goto LAB_10048a9fb;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_3a = "PlaylistItemPositionIsValid(playlist, newTrackPosition)";
      goto LAB_10048a93f;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10048a9fb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

