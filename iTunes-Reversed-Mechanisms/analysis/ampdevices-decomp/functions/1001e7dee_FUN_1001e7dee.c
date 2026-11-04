// name: FUN_1001e7dee
// address: 1001e7dee

void FUN_1001e7dee(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (param_2 != 0) {
    uVar1 = 2;
    if (2 < param_2 + 1U) {
      uVar1 = param_2 + 1U;
    }
    lVar2 = 0;
    do {
      *(undefined *)(param_1 + lVar2) = (&DAT_100712140)[*(byte *)(param_1 + lVar2)];
      lVar2 = lVar2 + 1;
    } while (uVar1 - 1 != lVar2);
  }
  return;
}

