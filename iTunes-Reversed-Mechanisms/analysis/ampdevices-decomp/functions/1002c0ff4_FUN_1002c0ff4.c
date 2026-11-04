// name: FUN_1002c0ff4
// address: 1002c0ff4

void FUN_1002c0ff4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "idList != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar1 = (long *)param_2[1];
    for (plVar6 = (long *)*param_2; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar4 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      if (plVar4 == plVar2) {
LAB_1002c1042:
        if (plVar4 == plVar2) goto LAB_1002c1047;
      }
      else {
        do {
          if (*plVar4 == *plVar6) goto LAB_1002c1042;
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar2);
LAB_1002c1047:
        FUN_1002c0d86(param_1);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

