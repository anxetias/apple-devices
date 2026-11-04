// name: FUN_10049b02f
// address: 10049b02f

undefined4 * FUN_10049b02f(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar2 = (undefined4 *)FUN_10049a729();
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "priorityLookupTable != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001d26f2(puVar2 + 2,*puVar2,FUN_10049b0fc,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

