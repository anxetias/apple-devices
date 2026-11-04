// name: FUN_1001e8c09
// address: 1001e8c09

void FUN_1001e8c09(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006c13cb(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((long *)*param_1 != (long *)0x0) {
      plVar4 = (long *)*param_1;
      do {
        plVar1 = (long *)*plVar4;
        if ((*(uint *)(plVar4 + 1) & 1) != 0) {
          uVar3 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar3,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "(cachedObject->state & kCachedObjectInUseMask) == 0";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if ((code *)param_1[2] != (code *)0x0) {
          (*(code *)param_1[2])(0x636c6561,plVar4,param_1[3]);
        }
        FUN_1001c64c1(plVar4);
        plVar4 = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    FUN_1001c62d9(param_1,0x20);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

