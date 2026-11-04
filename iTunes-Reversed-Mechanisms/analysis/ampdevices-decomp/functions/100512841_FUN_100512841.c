// name: FUN_100512841
// address: 100512841

void FUN_100512841(undefined8 param_1,short *param_2)

{
  char cVar1;
  undefined1 local_228 [512];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != 0) {
    FUN_1004870ae(param_1,local_228);
    cVar1 = FUN_1001e3edc(local_228,param_2,0);
    if (cVar1 == '\0') {
      FUN_1004872d8(param_1,param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

