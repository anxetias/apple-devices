// name: FUN_100148882
// address: 100148882

void FUN_100148882(long param_1)

{
  long *plVar1;
  undefined1 local_18 [8];
  
  FUN_1001ab042(local_18);
  plVar1 = *(long **)(param_1 + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,local_18);
    FUN_1001ab006(local_18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

