// name: FUN_10032169f
// address: 10032169f

void FUN_10032169f(long *param_1)

{
  undefined1 local_9;
  
  local_9 = 2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&local_9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

