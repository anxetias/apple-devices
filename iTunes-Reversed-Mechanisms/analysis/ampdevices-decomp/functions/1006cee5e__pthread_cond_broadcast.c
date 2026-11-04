// name: _pthread_cond_broadcast
// address: 1006cee5e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_broadcast(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_broadcast_10082d028)();
  return iVar1;
}

