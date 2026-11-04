// name: FUN_1004ed1a5
// address: 1004ed1a5

undefined1 FUN_1004ed1a5(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004ed2a4:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004ed2a4;
    }
    uVar4 = 0;
    bVar5 = false;
    if (*(int *)(*(long *)(param_1 + 2) + 0x84) == 0x646f5069) {
      uVar3 = FUN_1004de07b();
      cVar1 = FUN_1004ed388(uVar3);
      bVar5 = cVar1 == '\0';
    }
    *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0xcc) & 0x3f;
    cVar1 = FUN_100586027(param_1);
    if (cVar1 != '\0') {
      uVar4 = (uint)((short)param_1[4] != 0x1a) << 4;
    }
    param_1[0xcc] = (param_1[0xcc] & 0xffffffcfU | uVar4) + (param_1[0x90] & 4U) * 8;
    uVar4 = 0x80;
    if (!bVar5) {
      uVar4 = (uint)((short)param_1[4] == 7) << 7;
    }
    param_1[0x90] = param_1[0x90] & 0xffffff7fU | uVar4;
    uVar2 = FUN_10049052a(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

