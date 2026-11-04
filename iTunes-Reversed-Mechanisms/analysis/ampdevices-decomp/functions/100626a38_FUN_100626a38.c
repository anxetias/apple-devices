// name: FUN_100626a38
// address: 100626a38

void FUN_100626a38(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = &PTR_FUN_1008711d8;
  FUN_100626be2(param_1,0);
  if (param_1[0x314] != 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mDeleteList == nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (param_1[0x314] != 0) {
      FUN_100626cf6();
      param_1[0x314] = 0;
    }
  }
  lVar9 = 0;
  do {
    lVar6 = param_1[lVar9 * 2 + 0x13];
    while (lVar6 != 0) {
      lVar1 = *(long *)(lVar6 + 8);
      FUN_1001c64c1(lVar6);
      lVar6 = lVar1;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 0xfb);
  ___bzero(param_1 + 0x12,0xfb0);
  uVar7 = param_1[5];
  if (uVar7 != 0) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      pcVar2 = *(char **)(param_1[6] + lVar9);
      pcVar5 = _strrchr(pcVar2,0x2e);
      if (pcVar5 != (char *)0x0) {
        _free(pcVar2);
        uVar7 = param_1[5];
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x28;
    } while (uVar8 < uVar7);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

