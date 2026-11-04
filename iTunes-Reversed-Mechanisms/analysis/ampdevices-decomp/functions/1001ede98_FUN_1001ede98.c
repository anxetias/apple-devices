// name: FUN_1001ede98
// address: 1001ede98

void FUN_1001ede98(long param_1)

{
  undefined4 uVar1;
  
  if (*(long **)(param_1 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
  **(undefined4 **)(param_1 + 0x30) = uVar1;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_1001e9809(param_1 + 0x3c);
    return;
  }
  FUN_1001e8f15(param_1 + 0x50);
  return;
}

