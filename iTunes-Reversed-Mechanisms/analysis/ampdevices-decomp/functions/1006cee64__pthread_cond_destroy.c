// name: _pthread_cond_destroy
// address: 1006cee64

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_destroy(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_destroy_10082d030)();
  return iVar1;
}

