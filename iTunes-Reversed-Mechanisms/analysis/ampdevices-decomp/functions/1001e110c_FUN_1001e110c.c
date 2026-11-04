// name: FUN_1001e110c
// address: 1001e110c

void FUN_1001e110c(undefined8 param_1)

{
  undefined2 local_218;
  undefined1 local_216 [518];
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001e115f(param_1,&local_218);
  FUN_1001e10a2(local_216,local_218);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

