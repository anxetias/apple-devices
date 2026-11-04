// name: _pthread_mutex_init
// address: 1006ceeb2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_init(pthread_mutex_t *param_1,pthread_mutexattr_t *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceeb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_init_10082d098)();
  return iVar1;
}

