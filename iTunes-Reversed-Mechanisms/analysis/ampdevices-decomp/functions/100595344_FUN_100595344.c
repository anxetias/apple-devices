// name: FUN_100595344
// address: 100595344

void FUN_100595344(int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == 0x4f4c5354)) && (param_1[1] != 0)) &&
     (iVar2 = param_1[1] + -1, param_1[1] = iVar2, iVar2 == 0)) {
    pvVar1 = *(void **)(param_1 + 2);
    if (pvVar1 != (void *)0x0) {
      *(void **)(param_1 + 4) = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

