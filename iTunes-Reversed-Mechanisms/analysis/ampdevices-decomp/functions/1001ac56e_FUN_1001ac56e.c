// name: FUN_1001ac56e
// address: 1001ac56e

uint FUN_1001ac56e(long *param_1)

{
  char cVar1;
  uint uVar2;
  undefined1 local_28 [16];
  
  if ((*param_1 != 0) && (cVar1 = _CFURLCanBeDecomposed(), cVar1 != '\0')) {
    FUN_1001ab67c(local_28,param_1);
    uVar2 = FUN_1001b8428(local_28);
    FUN_1001b7a50(local_28);
    return uVar2 ^ 1;
  }
  return 0;
}

