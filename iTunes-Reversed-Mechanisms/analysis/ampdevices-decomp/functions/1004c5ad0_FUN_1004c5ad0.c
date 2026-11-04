// name: FUN_1004c5ad0
// address: 1004c5ad0

void FUN_1004c5ad0(uint param_1,undefined8 param_2)

{
  uint uVar1;
  char local_48 [40];
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  if (uVar1 < 1000000) {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      FUN_1001e1b6d((long)(int)param_1,param_2);
      return;
    }
  }
  else {
    _snprintf(local_48,0x20,"0x%08X",(ulong)param_1);
    FUN_1001e04f5(local_48,param_2);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

