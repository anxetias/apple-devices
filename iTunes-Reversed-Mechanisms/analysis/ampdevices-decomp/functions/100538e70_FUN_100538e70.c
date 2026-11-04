// name: FUN_100538e70
// address: 100538e70

void FUN_100538e70(long param_1,long param_2)

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
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "bitFields != __null";
LAB_100538f42:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        *(byte *)(param_1 + lVar2) = *(byte *)(param_1 + lVar2) & ~*(byte *)(param_2 + lVar2);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x20);
      goto LAB_100538f07;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "bitsToClear != __null";
      goto LAB_100538f42;
    }
  }
  FUN_1001782e9(0,0);
LAB_100538f07:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

