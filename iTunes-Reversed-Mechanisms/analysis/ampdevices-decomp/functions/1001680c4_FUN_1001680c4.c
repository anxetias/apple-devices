// name: FUN_1001680c4
// address: 1001680c4

undefined1 FUN_1001680c4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined1 local_58 [64];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017393c(param_1,local_58,0x40,0x600);
  if (cVar1 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067557e(uVar3);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1001e2b4f(local_58,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

