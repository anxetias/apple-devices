// name: FUN_1002ae6f7
// address: 1002ae6f7

undefined8 FUN_1002ae6f7(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "trackInstance != nullptr";
LAB_1002ae7f1:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x80);
    lVar2 = FUN_1001c6588();
    uVar4 = 1;
    if (lVar3 != lVar2) goto LAB_1002ae76b;
    lVar3 = FUN_1001c6429(0x448);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x80) = lVar3;
      goto LAB_1002ae76b;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "location != nullptr";
      goto LAB_1002ae7f1;
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_1002ae76b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

