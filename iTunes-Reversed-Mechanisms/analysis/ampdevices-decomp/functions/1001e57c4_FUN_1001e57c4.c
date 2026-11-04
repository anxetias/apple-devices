// name: FUN_1001e57c4
// address: 1001e57c4

void * FUN_1001e57c4(char *param_1)

{
  size_t sVar1;
  void *pvVar2;
  
  if (param_1 != (char *)0x0) {
    sVar1 = _strlen(param_1);
    pvVar2 = _malloc(sVar1 + 1);
    if (pvVar2 != (void *)0x0) {
      FUN_1001c631b(param_1,pvVar2,sVar1 + 1);
      return pvVar2;
    }
  }
  return (void *)0x0;
}

