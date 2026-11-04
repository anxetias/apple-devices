// name: FUN_1005c0074
// address: 1005c0074

undefined8 FUN_1005c0074(undefined8 param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (void *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "storeSettings != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    cVar1 = FUN_1001ee068();
    if (cVar1 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar2 = FUN_1005c0198(param_1,param_2);
        return uVar2;
      }
      goto LAB_1005c0193;
    }
    _memcpy(&local_438,param_2,0x410);
    uVar2 = FUN_1005ba4e2(param_1,0x19,&local_438,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_1005c0193:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

