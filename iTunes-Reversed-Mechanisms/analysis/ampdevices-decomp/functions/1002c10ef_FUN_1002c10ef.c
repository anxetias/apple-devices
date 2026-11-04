// name: FUN_1002c10ef
// address: 1002c10ef

undefined8 FUN_1002c10ef(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  size_t sVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "idList != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    plVar4 = (long *)*param_1;
    plVar1 = (long *)param_1[1];
    if (plVar4 == plVar1) {
LAB_1002c112e:
      if (plVar4 != plVar1) {
        sVar5 = (long)plVar1 - (long)(plVar4 + 1);
        if (sVar5 != 0) {
          _memmove(plVar4,plVar4 + 1,sVar5);
        }
        param_1[1] = (long)plVar4 + sVar5;
        uVar3 = 1;
        goto LAB_1002c1176;
      }
    }
    else {
      do {
        if (*plVar4 == param_2) goto LAB_1002c112e;
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  uVar3 = 0;
LAB_1002c1176:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

