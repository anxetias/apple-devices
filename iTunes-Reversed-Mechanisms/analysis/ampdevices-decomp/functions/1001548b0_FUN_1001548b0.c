// name: FUN_1001548b0
// address: 1001548b0

void FUN_1001548b0(long param_1)

{
  long local_18;
  
  local_18 = param_1;
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    FUN_1001548f8(&local_18,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

