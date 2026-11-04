// name: FUN_10048a5e2
// address: 10048a5e2

undefined8 FUN_10048a5e2(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (long *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_10048a6e6:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "PlaylistItemIsValid(playlistItem)";
LAB_10048a794:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10048a6e6;
    }
    if ((int)param_1[8] == 0) goto LAB_10048a6e6;
    cVar2 = FUN_1003a77fe(*param_1,param_2);
    if (cVar2 != '\0') {
      if (((param_2 == (long *)0x0) || (*param_2 != param_1[2])) ||
         (((plVar1 = (long *)param_2[1], plVar1 != param_1 && (plVar1 != (long *)param_1[4])) &&
          ((plVar1 != (long *)0xffffffffffffffff || (param_1[3] != 0)))))) {
        auVar4 = FUN_1003a89a4(param_1);
        uVar3 = 0;
        FUN_1003a5e8f(param_1,0);
        FUN_1003a66f6(param_1,param_2,0);
        auVar5 = FUN_1003a89a4(param_1);
        if (auVar4 != auVar5) {
          FUN_100484f45(*param_1);
          FUN_1001c6987(*param_1 + 200,0x6d706c69,param_1,0,0);
          uVar3 = 1;
        }
      }
      else {
        uVar3 = 0;
      }
      goto LAB_10048a70b;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_4a = "PlaylistItemPositionIsValid(playlistItem->playlist, newItemPosition)";
      goto LAB_10048a794;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10048a70b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

