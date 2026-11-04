// name: _pthread_getspecific
// address: 1006cee9a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _pthread_getspecific(pthread_key_t param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__pthread_getspecific_10082d078)();
  return pvVar1;
}

