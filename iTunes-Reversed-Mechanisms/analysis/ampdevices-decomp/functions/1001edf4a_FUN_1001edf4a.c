// name: FUN_1001edf4a
// address: 1001edf4a

undefined8 FUN_1001edf4a(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x20);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))();
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

