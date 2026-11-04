// name: _pthread_cond_wait
// address: 1006cee7c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_wait(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_wait_10082d050)();
  return iVar1;
}

