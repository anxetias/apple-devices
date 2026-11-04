// name: _pthread_getschedparam
// address: 1006cee94

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_getschedparam(pthread_t param_1,int *param_2,sched_param *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_getschedparam_10082d070)();
  return iVar1;
}

