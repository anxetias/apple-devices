// name: FUN_1004c69e6
// address: 1004c69e6

undefined1 FUN_1004c69e6(void)

{
  undefined1 uVar1;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined1 local_838 [16];
  undefined1 local_828 [1024];
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = FUN_1004c6ac1();
  FUN_1001b8dfc(local_838,local_428);
  FUN_1001b80b2(in_R8,local_838);
  FUN_1001b7a50(local_838);
  FUN_1001b8dfc(local_838,local_828);
  FUN_1001b80b2(in_R9,local_838);
  FUN_1001b7a50(local_838);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

