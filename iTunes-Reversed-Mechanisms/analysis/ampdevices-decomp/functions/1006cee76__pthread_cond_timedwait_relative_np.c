// name: _pthread_cond_timedwait_relative_np
// address: 1006cee76

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_cond_timedwait_relative_np
              (pthread_cond_t *param_1,pthread_mutex_t *param_2,timespec *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_cond_timedwait_relative_np_10082d048)();
  return iVar1;
}

