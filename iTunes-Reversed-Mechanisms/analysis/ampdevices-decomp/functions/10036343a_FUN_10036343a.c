// name: FUN_10036343a
// address: 10036343a

void FUN_10036343a(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure";
      local_6c = 0x822;
      local_6a = "TrackInfoIsValid( trackInfo )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10036360b;
  }
  if (*(int *)(lVar5 + 0x80) != 0x74646174) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      local_74 = "Assertion failure (expected to be true)";
      local_6c = 0x822;
      local_6a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10036360b;
  }
  if ((*(int *)(lVar5 + 0x84) == 0x646f5069) && (*(long *)(param_1 + 0x188) != 0)) {
    uVar2 = FUN_1003070df();
    lVar3 = FUN_100300729(uVar2,*(undefined8 *)(param_1 + 0x188));
    if (lVar3 != 0) {
      lVar5 = *(long *)(lVar3 + 0x10);
      if (lVar5 == 0) goto LAB_10036360b;
      param_1 = lVar3;
      if (*(int *)(lVar5 + 0x80) != 0x74646174) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure (expected to be true)";
          local_6c = 0x822;
          local_6a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_10036360b;
      }
    }
  }
  if ((*(byte *)(lVar5 + 0x1bb0) & 1) != 0) {
    uVar4 = FUN_1004744bf(param_1,0);
    if ((((uVar4 & 0x21) != 0) && (*(long *)(param_1 + 0xa0) - 1U < 0xfffffffffffffffc)) &&
       (*(int *)(param_1 + 0x98) == 2)) {
      FUN_1001c62d9(&local_78,0x20);
                    /* WARNING: Could not recover jumptable at 0x00010036358b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_100363858 + *(int *)(&DAT_100363858 + (ulong)(param_2 - 1) * 4)))();
      return;
    }
  }
LAB_10036360b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

