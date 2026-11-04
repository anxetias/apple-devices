// name: FUN_10052b4e8
// address: 10052b4e8

undefined4 FUN_10052b4e8(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inHandlerPtr != __null";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) goto LAB_10052b651;
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x20))();
    plVar1 = param_1 + 1;
    uVar3 = FUN_10015a861(plVar1);
    if (uVar3 != 0) {
      uVar7 = 1;
      do {
        plVar5 = (long *)FUN_10015b12c(plVar1,uVar7);
        if ((plVar5 != (long *)0x0) && (*plVar5 == param_2)) {
          if (*(char *)((long)param_1 + 0x84) == '\x01') {
            FUN_10052b0a8(*plVar5 + 8);
          }
          *plVar5 = 0;
          if (uVar7 != 0) {
            FUN_10015a8b0(plVar1,1,uVar7);
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 <= uVar3);
    }
    uVar4 = FUN_10015a861(plVar1);
    (**(code **)(*param_1 + 0x28))();
    if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
LAB_10052b651:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  }
  return uVar4;
}

