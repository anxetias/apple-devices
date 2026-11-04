// name: FUN_10049a3c8
// address: 10049a3c8

undefined1 FUN_10049a3c8(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "imageInstance != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar4 = 1;
    if ((((99 < uVar1 - 900 && uVar1 != 5) && (uVar1 != 3)) && (uVar1 != 6)) && (uVar1 < 0x3e9)) {
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

