// name: FUN_100283e44
// address: 100283e44

void FUN_100283e44(long param_1,void *param_2,long param_3,long param_4)

{
  void *pvVar1;
  size_t sVar2;
  
  if (param_4 != 0) {
    FUN_100283ea8(param_1,param_4);
    pvVar1 = *(void **)(param_1 + 8);
    sVar2 = param_3 - (long)param_2;
    if (sVar2 != 0) {
      _memmove(pvVar1,param_2,sVar2);
    }
    *(size_t *)(param_1 + 8) = (long)pvVar1 + sVar2;
  }
  return;
}

