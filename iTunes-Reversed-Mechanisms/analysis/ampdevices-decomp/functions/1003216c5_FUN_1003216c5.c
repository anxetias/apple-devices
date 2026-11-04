// name: FUN_1003216c5
// address: 1003216c5

void FUN_1003216c5(long *param_1)

{
  undefined1 local_9;
  
  local_9 = 4;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&local_9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

