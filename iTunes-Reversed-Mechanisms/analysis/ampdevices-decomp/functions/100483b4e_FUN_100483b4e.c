// name: FUN_100483b4e
// address: 100483b4e

undefined8 FUN_100483b4e(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_1 != 0x706c7374) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "PlaylistIsValid(playlist)";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      uVar4 = 0;
      FUN_1001782e9(0,0);
      goto LAB_100483c3d;
    }
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x1e) + 0x18);
  iVar3 = iVar1;
  if (param_2 == 0) {
LAB_100483be5:
    if (iVar3 <= iVar1 && 0 < iVar3) {
      uVar4 = FUN_10037ddf6(*(undefined8 *)(param_1 + 0xf0),1,0,iVar3 + -1);
      goto LAB_100483c3d;
    }
  }
  else {
    plVar5 = (long *)FUN_1004839f2(param_1,param_2);
    if (plVar5 != (long *)0x0) {
      uVar4 = 0;
      iVar3 = FUN_10037e1fc(*(undefined8 *)(*plVar5 + 0x3c0),plVar5,1,0);
      if (iVar3 == -1) goto LAB_100483c3d;
      goto LAB_100483be5;
    }
  }
  uVar4 = 0;
LAB_100483c3d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

