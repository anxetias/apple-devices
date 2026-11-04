// name: FUN_100430e89
// address: 100430e89

void FUN_100430e89(long param_1,long param_2)

{
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != 0) {
    FUN_1001c62d9(param_1,0x40);
    FUN_1001eb459(0,local_228);
    FUN_1001e5b77(local_228,param_1,0x40);
  }
  if (param_2 != 0) {
    FUN_1001c62d9(param_2,0x40);
    FUN_1001eb58c(local_228);
    FUN_1001e5b77(local_228,param_2,0x40);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

