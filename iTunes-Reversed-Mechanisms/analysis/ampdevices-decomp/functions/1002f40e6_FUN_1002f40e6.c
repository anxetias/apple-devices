// name: FUN_1002f40e6
// address: 1002f40e6

undefined8 FUN_1002f40e6(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1001e21dd(param_2);
  uVar2 = 0;
  if (iVar1 < 0x504e4720) {
    if ((iVar1 != 0x4a504547) && (iVar1 != 0x4a504720)) goto LAB_1002f416a;
  }
  else if ((iVar1 != 0x504e4720) && ((iVar1 != 0x54494646 && (iVar1 != 0x54494620))))
  goto LAB_1002f416a;
  FUN_1001e5b77(param_2,local_428,0x400);
  uVar2 = FUN_1002f418d(param_1,local_428);
LAB_1002f416a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

