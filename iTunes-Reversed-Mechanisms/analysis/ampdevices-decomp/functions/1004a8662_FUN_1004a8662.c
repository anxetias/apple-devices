// name: FUN_1004a8662
// address: 1004a8662

void FUN_1004a8662(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inItem != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001e9de0(param_1 + 0x38);
    lVar5 = param_1 + 8;
    uVar2 = FUN_10015a861(lVar5);
    if (uVar2 != 0) {
      uVar6 = 1;
      do {
        plVar3 = (long *)FUN_10015b12c(lVar5,uVar6);
        if ((plVar3 != (long *)0x0) && (*plVar3 == param_2)) {
          *plVar3 = 0;
          if (uVar6 != 0) {
            FUN_10015a8b0(lVar5,1,uVar6);
            goto LAB_1004a86fc;
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 <= uVar2);
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "indexToDelete != kInvalidArrayIndex";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1004a86fc:
    FUN_10015a861(lVar5);
    FUN_1001e9eb9(param_1 + 0x38);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

