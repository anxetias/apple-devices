// name: _pthread_cond_signal
// address: 1006cee70

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_signal(pthread_cond_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_signal_10082d040)();
  return iVar1;
}

