// name: _realloc
// address: 1006cef00

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _realloc(void *param_1,size_t param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__realloc_10082d100)();
  return pvVar1;
}

