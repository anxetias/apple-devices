// name: FUN_100247f70
// address: 100247f70

undefined8 FUN_100247f70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_218 [512];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1001b83ae(param_2);
  cVar1 = FUN_100247e2a(uVar2,local_218,0);
  if (cVar1 == '\0') {
    FUN_1001b7a44(param_1);
  }
  else {
    FUN_1001b8dfc(param_1,local_218);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

