// name: FUN_100488b31
// address: 100488b31

void FUN_100488b31(int *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100488ba9:
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100488c63;
  }
  if (*param_1 != 0x706c7374) {
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
    if (cVar2 == '\0') goto LAB_100488ba9;
  }
  if (param_2 == -2) {
    uVar4 = 2;
    param_3 = 0;
    param_2 = 0;
  }
  else if (param_2 == 0) {
    param_3 = 0;
    param_2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  lVar1 = *(long *)(param_1 + 2);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x26f0) == 0)) {
LAB_100488c2b:
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x74) = 0;
      *(undefined1 *)(param_1 + 0x7c) = 0;
      param_1[0x7d] = 0;
      *(undefined1 *)((long)param_1 + 0x1d2) = 0;
    }
  }
  else {
    if (*(long *)(param_1 + 0x76) - 1U < 0xfffffffffffffffc) {
      FUN_1002f8e0e();
    }
    if (0xfffffffffffffffb < param_2 - 1U) goto LAB_100488c2b;
    FUN_1002f8572(*(undefined8 *)(lVar1 + 0x26f0),param_2,param_1);
  }
  *(long *)(param_1 + 0x76) = param_2;
  *(undefined8 *)(param_1 + 0x78) = param_3;
  *(undefined1 *)((long)param_1 + 0x1d3) = uVar4;
LAB_100488c63:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

