// name: _pthread_mutex_lock
// address: 1006ceeb8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_lock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_lock_10082d0a0)();
  return iVar1;
}

