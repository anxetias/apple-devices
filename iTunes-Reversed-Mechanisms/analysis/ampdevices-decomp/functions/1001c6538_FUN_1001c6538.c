// name: FUN_1001c6538
// address: 1001c6538

void * FUN_1001c6538(void)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  sVar2 = FUN_1001c5603();
  pvVar3 = _valloc(sVar2);
  if (pvVar3 != (void *)0x0) {
    _bzero(pvVar3,sVar2);
    iVar1 = _mprotect(pvVar3,sVar2,1);
    if (iVar1 == 0) {
      return pvVar3;
    }
    _free(pvVar3);
  }
  return (void *)0x0;
}

