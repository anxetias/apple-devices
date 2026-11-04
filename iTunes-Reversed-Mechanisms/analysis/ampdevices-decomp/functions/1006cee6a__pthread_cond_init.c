// name: _pthread_cond_init
// address: 1006cee6a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_init(pthread_cond_t *param_1,pthread_condattr_t *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_init_10082d038)();
  return iVar1;
}

