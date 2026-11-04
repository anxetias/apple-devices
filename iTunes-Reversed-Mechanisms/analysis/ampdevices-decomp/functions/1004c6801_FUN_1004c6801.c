// name: FUN_1004c6801
// address: 1004c6801

undefined8 * FUN_1004c6801(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  bool bVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be not NULL)";
      local_4c = 0x822;
      local_4a = "pState";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 == '\0') goto LAB_1004c6941;
  }
  lVar5 = *param_2;
  uVar3 = (uint)(short)((short)((uint)(*(int *)(lVar5 + 0x28) - *(int *)(lVar5 + 0x20)) >> 4) *
                        -0x5555 +
                       (short)((uint)(*(int *)(lVar5 + 0x10) - *(int *)(lVar5 + 8)) >> 4) * -0x5555)
  ;
  if (1 < (int)uVar3) {
    uVar7 = 2;
    do {
      lVar5 = *param_2;
      lVar6 = *(long *)(lVar5 + 0x28) - *(long *)(lVar5 + 0x20) >> 4;
      uVar1 = uVar7 - 1;
      if (uVar1 < (ulong)(lVar6 * -0x5555555555555555)) {
        lVar5 = *(long *)(lVar5 + 0x20) + uVar1 * 0x30;
      }
      else {
        lVar5 = (uVar1 + lVar6 * 0x5555555555555555) * 0x30 + *(long *)(lVar5 + 8);
      }
      if (lVar5 != 0) {
        FUN_1001b7a5c(&local_58);
        uVar1 = param_1[1];
        if (uVar1 < (ulong)param_1[2]) {
          FUN_1001b7a88(uVar1,&local_58);
          lVar5 = uVar1 + 0x10;
        }
        else {
          lVar5 = FUN_1001de980(param_1,&local_58);
        }
        param_1[1] = lVar5;
        FUN_1001b7a50(&local_58);
      }
      bVar8 = uVar7 != uVar3;
      uVar7 = uVar7 + 1;
    } while (bVar8);
  }
LAB_1004c6941:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

