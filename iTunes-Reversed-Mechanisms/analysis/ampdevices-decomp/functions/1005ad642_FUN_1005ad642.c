// name: FUN_1005ad642
// address: 1005ad642

undefined8 FUN_1005ad642(long param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_240;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != (long *)0x0) && ((int *)*param_2 != (int *)0x0)) {
    if (*(int *)*param_2 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_238 = 0x8220202;
        local_234 = "Assertion failure (expected to be true)";
        local_22c = 0x822;
        local_22a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1005ad731;
    }
    if ((int)param_2[8] != 0) {
      cVar1 = FUN_10030e2f7(*(undefined8 *)(*param_2 + 8));
      uVar2 = 0;
      if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 8) != 0))
      {
        cVar1 = FUN_1005aa5ca(param_1,param_2,&local_240);
        if (cVar1 != '\0') {
          FUN_1005a4672(param_1);
          FUN_10048687f(param_2,&local_238);
          FUN_1005ac748(param_1,4,local_240,&local_238);
          FUN_1005a4ae0(param_1);
          uVar2 = 0;
        }
      }
      goto LAB_1005ad759;
    }
  }
LAB_1005ad731:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_238 = 0x8220202;
    local_234 = "Assertion failure";
    local_22c = 0x822;
    local_22a = "PlaylistItemIsValid(playlistItem)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1005ad759:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

