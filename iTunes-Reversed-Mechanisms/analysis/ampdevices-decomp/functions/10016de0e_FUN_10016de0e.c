// name: FUN_10016de0e
// address: 10016de0e

void FUN_10016de0e(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  
  pvVar4 = (void *)param_1[2];
  if (pvVar4 == (void *)0x0) {
    if (*param_1 == 0) {
      pvVar3 = operator_new(1);
      *param_1 = (long)pvVar3;
      param_1[1] = (long)pvVar3;
    }
    uVar2 = param_1[5];
    pvVar3 = (void *)0x0;
  }
  else {
    uVar2 = ((param_1[4] - (long)pvVar4) + 1U >> 1) + (param_1[4] - (long)pvVar4);
    pvVar3 = pvVar4;
  }
  lVar1 = param_1[3];
  uVar5 = param_2 * 0x10 + (lVar1 - (long)pvVar3);
  if (uVar5 < uVar2) {
    uVar5 = uVar2;
  }
  pvVar4 = _realloc(pvVar4,uVar5);
  param_1[2] = (long)pvVar4;
  param_1[3] = (lVar1 - (long)pvVar3) + (long)pvVar4;
  param_1[4] = uVar5 + (long)pvVar4;
  return;
}

