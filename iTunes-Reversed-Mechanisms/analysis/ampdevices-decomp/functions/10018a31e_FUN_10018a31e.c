// name: FUN_10018a31e
// address: 10018a31e

undefined8 FUN_10018a31e(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10068fccd(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001e04f5(param_3,local_238);
    uVar2 = FUN_10018a1da(param_1,param_2,local_238,param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

