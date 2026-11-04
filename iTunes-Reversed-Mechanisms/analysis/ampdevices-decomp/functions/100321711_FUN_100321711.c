// name: FUN_100321711
// address: 100321711

void FUN_100321711(long *param_1)

{
  undefined1 local_9;
  
  local_9 = 0x80;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&local_9);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

