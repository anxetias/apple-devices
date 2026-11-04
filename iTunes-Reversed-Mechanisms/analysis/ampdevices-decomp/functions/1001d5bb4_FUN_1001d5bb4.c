// name: FUN_1001d5bb4
// address: 1001d5bb4

void FUN_1001d5bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(&local_458,0x420);
  local_458 = param_2;
  local_450 = param_3;
  local_448 = param_4;
  FUN_1001d5942(param_1,3,&local_458,3,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

