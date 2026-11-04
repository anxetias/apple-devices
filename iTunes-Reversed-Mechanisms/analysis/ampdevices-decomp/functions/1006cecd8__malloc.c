// name: _malloc
// address: 1006cecd8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__malloc_10082cef0)();
  return pvVar1;
}

