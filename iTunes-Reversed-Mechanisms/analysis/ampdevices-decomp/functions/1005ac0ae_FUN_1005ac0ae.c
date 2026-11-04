// name: FUN_1005ac0ae
// address: 1005ac0ae

undefined8 FUN_1005ac0ae(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x15a2) == '\0') {
    uVar1 = 0;
  }
  else {
    FUN_100476928(param_2,local_238);
    FUN_1004779ac(param_2,local_438);
    FUN_1004772c4(param_2,local_638);
    uVar1 = FUN_1005ab32a(*(undefined1 *)(param_1 + 0x15a2),local_238,local_438,local_638);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

