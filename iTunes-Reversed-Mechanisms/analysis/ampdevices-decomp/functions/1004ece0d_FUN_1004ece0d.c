// name: FUN_1004ece0d
// address: 1004ece0d

/* WARNING: Removing unreachable block (ram,0x0001004ecf35) */
/* WARNING: Removing unreachable block (ram,0x0001004ecf47) */

undefined1 FUN_1004ece0d(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1004eceb6:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    goto LAB_1004ecf58;
  }
  if (*param_1 != 0x706c7374) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure (expected to be true)";
      local_2c = 0x822;
      local_2a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_1004eceb6;
  }
  if (*(int *)(*(long *)(param_1 + 2) + 0x84) == 0x646f5069) {
    uVar4 = FUN_1004de07b();
    cVar1 = FUN_1004ed02d(uVar4);
    uVar5 = param_1[0xcc];
    if (cVar1 == '\0') goto LAB_1004ecef6;
    uVar5 = uVar5 & 0xffffff0f | 0xb0;
    param_1[0xcc] = uVar5;
    uVar3 = (uint)((short)param_1[4] == 7) << 7;
  }
  else {
    uVar5 = param_1[0xcc];
LAB_1004ecef6:
    uVar5 = uVar5 | 0xf0;
    param_1[0xcc] = uVar5;
    uVar3 = 0x80;
  }
  param_1[0x90] = param_1[0x90] & 0xffffff7fU | uVar3;
  param_1[0xcc] = uVar5 & 0xffff9fff;
  uVar2 = FUN_1004903b8(param_1);
LAB_1004ecf58:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

