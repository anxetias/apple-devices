// name: FUN_10031e1d6
// address: 10031e1d6

void FUN_10031e1d6(long param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031e384:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
LAB_10031e404:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10031e384;
    }
    if (param_2 != (uint *)0x0) {
      FUN_1001c62d9(param_2,0x18);
      for (lVar5 = FUN_1002f9fc5(param_1); lVar5 != 0; lVar5 = FUN_1002fa118(lVar5)) {
        cVar1 = FUN_1002b17c0(lVar5);
        if ((((cVar1 != '\0') && (*(long *)(*(long *)(lVar5 + 0x10) + 0x10) == 0)) &&
            (*(long *)(*(long *)(lVar5 + 0x10) + 0x18) == 0)) &&
           ((iVar2 = FUN_1002b1325(lVar5), iVar2 == 0x41415820 || (iVar2 == 0x41412020)))) {
          if ((ulong)*param_2 != 0) {
            uVar6 = 0;
            do {
              if (*(long *)(param_2 + uVar6 * 2 + 2) == *(long *)(*(long *)(lVar5 + 0x10) + 8))
              goto LAB_10031e297;
              uVar6 = uVar6 + 1;
            } while (*param_2 != uVar6);
          }
          cVar1 = FUN_1002b14bd(lVar5);
          if (cVar1 != '\0') {
            uVar3 = *param_2;
            if (1 < uVar3) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure (expected to be true)";
                local_4c = 0x822;
                local_4a = "userIDList->numValidIDs >= 0 && userIDList->numValidIDs < 2";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar1 = FUN_1001782e9(0,0);
              if (cVar1 == '\0') goto LAB_10031e297;
              uVar3 = *param_2;
            }
            *(undefined8 *)(param_2 + (ulong)uVar3 * 2 + 2) =
                 *(undefined8 *)(*(long *)(lVar5 + 0x10) + 8);
            *param_2 = uVar3 + 1;
            if (uVar3 + 1 == 2) break;
          }
        }
LAB_10031e297:
      }
      goto LAB_10031e432;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "userIDList != nullptr";
      goto LAB_10031e404;
    }
  }
  FUN_1001782e9(0,0);
LAB_10031e432:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

