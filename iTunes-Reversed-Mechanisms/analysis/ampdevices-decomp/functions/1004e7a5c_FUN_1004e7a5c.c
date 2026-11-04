// name: FUN_1004e7a5c
// address: 1004e7a5c

void FUN_1004e7a5c(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x15938) != 0) {
    iVar1 = FUN_1001b19b0();
    iVar2 = FUN_1001b1a0f();
    if ((iVar1 == iVar2) ||
       (iVar1 != *(int *)(param_1 + 0x15934) && *(int *)(param_1 + 0x15934) != 0)) {
      while (*(short *)(param_1 + 0x15938) != 0) {
        FUN_1001b153d();
      }
    }
  }
  return;
}

