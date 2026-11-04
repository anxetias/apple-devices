// name: FUN_10016be74
// address: 10016be74

void FUN_10016be74(long param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x18);
  if (*(undefined1 **)(param_1 + 0x20) <= puVar1 + 1) {
    FUN_10016d504(param_1,1);
    puVar1 = *(undefined1 **)(param_1 + 0x18);
  }
  *(undefined1 **)(param_1 + 0x18) = puVar1 + 1;
  *puVar1 = 0;
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + -1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100678f90();
}

