// name: FUN_100483f95
// address: 100483f95

undefined8 FUN_100483f95(int *param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100484034:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "PlaylistIsValid(playlist)";
LAB_1004840b4:
      local_5c = 0x822;
      local_60 = 1;
      uStack_64 = 0x7a0a90;
      local_68 = 0x8220202;
      uStack_5a = SUB82(pcVar3,0);
      local_58 = (undefined6)((ulong)pcVar3 >> 0x10);
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7ab58c;
        local_60 = 1;
        local_5c = 0x822;
        uStack_5a = 0x2d50;
        local_58 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100484034;
    }
    if (*(long *)(param_1 + 0x94) != 0) {
      FUN_1001c62d9(&local_68,0x38);
      local_68 = SUB84(param_1,0);
      uStack_64 = (undefined4)((ulong)param_1 >> 0x20);
      local_58 = (undefined6)param_3;
      uStack_52 = (undefined2)((ulong)param_3 >> 0x30);
      local_60 = param_2;
      uVar2 = FUN_1002fc1ae(*(undefined8 *)(param_1 + 2),0x74647070,&local_68);
      goto LAB_1004840e7;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      pcVar3 = "playlist->handlerProc != nullptr";
      goto LAB_1004840b4;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_1004840e7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

