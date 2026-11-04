// name: _calloc
// address: 1006cea62

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__calloc_10082cbf0)();
  return pvVar1;
}

