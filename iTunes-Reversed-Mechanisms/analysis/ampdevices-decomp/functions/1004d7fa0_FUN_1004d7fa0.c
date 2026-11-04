// name: FUN_1004d7fa0
// address: 1004d7fa0

void FUN_1004d7fa0(long param_1)

{
  long *plVar1;
  undefined1 local_20 [16];
  
  FUN_1001a8fb6(local_20);
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_20);
    FUN_1001a8fac(local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

