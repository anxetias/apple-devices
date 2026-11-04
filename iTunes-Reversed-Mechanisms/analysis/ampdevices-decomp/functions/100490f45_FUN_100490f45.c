// name: FUN_100490f45
// address: 100490f45

void FUN_100490f45(long *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "objectSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100491070;
  }
  if ((param_1 == (long *)0x0) || ((int *)*param_1 == (int *)0x0)) {
LAB_100490ff3:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistItemIsValid(playlistItem)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar7 = 0;
    FUN_1001782e9(0,0);
    uVar5 = 0;
    uVar2 = 0;
    uVar6 = 0;
    iVar8 = 0;
  }
  else {
    if (*(int *)*param_1 != 0x706c7374) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "playlist->magic == \'plst\'";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100490ff3;
    }
    iVar8 = (int)param_1[8];
    if (iVar8 == 0) goto LAB_100490ff3;
    uVar7 = *(undefined4 *)(*(long *)(*param_1 + 8) + 0x88);
    uVar6 = *(undefined4 *)(*param_1 + 0x58);
    uVar5 = *(undefined4 *)(param_1[1] + 8);
    lVar4 = FUN_10024093e(param_1);
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(lVar4 + 0x30);
    }
  }
  *param_2 = uVar7;
  param_2[1] = uVar5;
  param_2[2] = uVar2;
  param_2[3] = uVar6;
  param_2[4] = iVar8;
  *(undefined8 *)(param_2 + 5) = 0;
  *(undefined8 *)(param_2 + 7) = 0;
  *(undefined8 *)(param_2 + 9) = 0;
LAB_100491070:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

