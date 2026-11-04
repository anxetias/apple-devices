// name: _valloc
// address: 1006cf1d0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _valloc(size_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__valloc_10082d2b8)();
  return pvVar1;
}

