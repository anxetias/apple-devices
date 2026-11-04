// name: _pthread_mutex_destroy
// address: 1006ceeac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_mutex_destroy(pthread_mutex_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_mutex_destroy_10082d090)();
  return iVar1;
}

