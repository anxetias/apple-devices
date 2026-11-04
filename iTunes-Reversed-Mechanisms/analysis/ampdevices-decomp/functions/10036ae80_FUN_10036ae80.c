// name: FUN_10036ae80
// address: 10036ae80

undefined1 FUN_10036ae80(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  ushort local_28;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (int *)0x0) {
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
      if (cVar1 == '\0') goto LAB_10036af4d;
    }
    if (((*(byte *)(param_1 + 0xa6) & 1) != 0) && (*(char *)((long)param_1 + 0x2a3) != '\0')) {
      FUN_100314020(param_1);
      FUN_1005814bd(param_1 + 0xa8);
      *(byte *)(param_1 + 0xa6) = *(byte *)(param_1 + 0xa6) & 0xfe;
      FUN_100489136(param_1,&local_48);
      local_28 = local_28 | 0xe9f;
      FUN_10049089c(param_1,&local_48);
      FUN_1001c6987(param_1 + 0x32,0x6477706c,param_1,0,0);
      FUN_1003142ca(param_1);
      uVar3 = 1;
      goto LAB_10036af71;
    }
  }
LAB_10036af4d:
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "IsGeniusPlaylist(playlist)";
    __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_10036af71:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

