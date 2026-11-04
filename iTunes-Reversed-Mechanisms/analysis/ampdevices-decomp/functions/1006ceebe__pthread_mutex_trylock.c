// name: _pthread_mutex_trylock
// address: 1006ceebe

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_trylock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceebe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_trylock_10082d0a8)();
  return iVar1;
}

