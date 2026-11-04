// name: FUN_1002f4030
// address: 1002f4030

undefined8 FUN_1002f4030(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_628 [512];
  undefined1 local_428 [1032];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e115f(param_2,local_628);
  iVar1 = FUN_1001e21dd(local_628);
  uVar2 = 0;
  if (iVar1 < 0x504e4720) {
    if ((iVar1 != 0x4a504547) && (iVar1 != 0x4a504720)) goto LAB_1002f40c5;
  }
  else if ((iVar1 != 0x504e4720) && ((iVar1 != 0x54494646 && (iVar1 != 0x54494620))))
  goto LAB_1002f40c5;
  FUN_1001e5b77(local_628,local_428,0x400);
  uVar2 = FUN_1002f418d(param_1,local_428);
LAB_1002f40c5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

