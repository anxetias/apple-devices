// name: FUN_100166fc8
// address: 100166fc8

undefined1 FUN_100166fc8(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_100674292(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    cVar1 = FUN_100166ce2(param_1,param_2,local_218);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      FUN_1001e4c6b(local_218,param_3);
      uVar3 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

