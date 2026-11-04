// name: FUN_1001893a7
// address: 1001893a7

void FUN_1001893a7(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 local_430 [1056];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = FUN_1001888ba(param_1,param_2,local_430,0);
  if (iVar1 == 0) {
    FUN_1001892ae(local_430,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

