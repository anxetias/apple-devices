// name: FUN_1001b0609
// address: 1001b0609

void FUN_1001b0609(long param_1)

{
  double dVar1;
  double dVar2;
  
  if (*(double *)(param_1 + 0x28) <= 0.0) {
    dVar1 = ((double)*(int *)(param_1 + 0x20) *
            *(double *)(&DAT_1008c5280 + (ulong)*(uint *)(param_1 + 0x58) * 0x28)) /
            (double)*(int *)((long)&DAT_1008c5278 + (ulong)*(uint *)(param_1 + 0x58) * 0x28 + 4);
    dVar2 = *(double *)(param_1 + 0x30);
    if (dVar1 <= *(double *)(param_1 + 0x30)) {
      dVar2 = dVar1;
    }
    *(double *)(param_1 + 0x28) = dVar2;
    *(double *)(param_1 + 0x38) = dVar2;
  }
  FUN_1001b08b2(param_1);
  *(undefined4 *)(param_1 + 0x1c) = 2;
  DAT_1008c5258 = param_1;
  return;
}

