// name: FUN_1002ca316
// address: 1002ca316

void FUN_1002ca316(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  char local_78 [4];
  char *local_74;
  undefined2 local_6c;
  char local_58 [4];
  char *local_54;
  undefined2 local_4c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x928) != 0) {
    lVar3 = FUN_100166b7f(*(long *)(param_1 + 0x928),&cf_UserVersionCommandSets);
    lVar4 = FUN_100166b7f(*(undefined8 *)(param_1 + 0x928),&cf_SQLCommands);
    *(long *)(param_1 + 0x930) = lVar4;
    if (lVar3 == 0 || lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        pcVar8 = local_78;
        builtin_strncpy(local_78,"\x02\x02\"\b",4);
        local_74 = "Assertion failure";
        local_6c = 0x822;
        pcVar7 = "mSQLPostProcessingStatements != __null and commandSets != __null";
LAB_1002ca542:
        *(char **)(pcVar8 + 0xe) = pcVar7;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",pcVar8,0x16);
      }
LAB_1002ca461:
      FUN_1001782e9(0,0);
    }
    else {
      uVar9 = 0x1a;
      do {
        iVar2 = (int)uVar9;
        _snprintf(local_78,0x20,"%d",uVar9);
        lVar4 = FUN_100172473(0,local_78,0x600);
        if (lVar4 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 == '\0') goto LAB_1002ca461;
          pcVar8 = local_58;
          builtin_strncpy(local_58,"\x02\x02\"\b",4);
          local_54 = "Assertion failure";
          local_4c = 0x822;
          pcVar7 = "versionString != __null";
          goto LAB_1002ca542;
        }
        lVar5 = FUN_100166b7f(lVar3,lVar4);
        FUN_10017060f(lVar4);
        if ((lVar5 != 0) && (lVar4 = FUN_100166844(lVar5,&cf_Commands), lVar4 != 0)) {
          lVar3 = FUN_10017076e(lVar4);
          if (lVar3 != 0) {
            lVar3 = *(long *)(param_1 + 8);
            iVar2 = *(int *)(lVar3 + 0x1040);
            if (iVar2 == 0) {
              iVar2 = FUN_1001d357f(*(undefined8 *)(lVar3 + 0x68),1);
              if (iVar2 == 0) {
                iVar2 = *(int *)(lVar3 + 0x1040);
                goto LAB_1002ca4b0;
              }
            }
            else {
LAB_1002ca4b0:
              *(int *)(lVar3 + 0x1040) = iVar2 + 1;
            }
            uVar6 = FUN_10017076e(lVar4);
            _CFArrayApplyFunction(lVar4,0,uVar6,FUN_1002ca1de,param_1);
            lVar3 = *(long *)(param_1 + 8);
            iVar2 = *(int *)(lVar3 + 0x1040);
            *(int *)(lVar3 + 0x1040) = iVar2 + -1;
            if (iVar2 < 2) {
              FUN_1001d3605(*(undefined8 *)(lVar3 + 0x68));
            }
          }
          break;
        }
        uVar9 = (ulong)(iVar2 - 1);
      } while (iVar2 != 0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

