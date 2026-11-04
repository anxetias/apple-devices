// name: _pthread_mutex_unlock
// address: 1006ceec4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_unlock_10082d0b0)();
  return iVar1;
}

