// name: FUN_1003ba94e
// address: 1003ba94e

void FUN_1003ba94e(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75a8 != 0) {
    lVar2 = DAT_1008c75a8;
    do {
      if (lVar2 == *(long *)(param_1 + 8)) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
          FUN_1003b8359();
          return;
        }
        goto LAB_1003baa25;
      }
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_38 = 0x8220202;
    local_34 = "Assertion failure";
    local_2c = 0x822;
    local_2a = "false";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
  }
  FUN_1001782e9(0,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
LAB_1003baa25:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

