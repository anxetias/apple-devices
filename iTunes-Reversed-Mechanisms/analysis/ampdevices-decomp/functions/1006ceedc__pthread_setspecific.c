// name: _pthread_setspecific
// address: 1006ceedc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setspecific(pthread_key_t param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_setspecific_10082d0d0)();
  return iVar1;
}

