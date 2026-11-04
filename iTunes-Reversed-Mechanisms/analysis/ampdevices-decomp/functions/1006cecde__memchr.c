// name: _memchr
// address: 1006cecde

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memchr(void *param_1,int param_2,size_t param_3)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__memchr_10082cef8)();
  return pvVar1;
}

