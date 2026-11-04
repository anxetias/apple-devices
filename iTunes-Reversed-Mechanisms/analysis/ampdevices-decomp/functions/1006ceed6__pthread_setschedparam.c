// name: _pthread_setschedparam
// address: 1006ceed6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setschedparam(pthread_t param_1,int param_2,sched_param *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceed6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_setschedparam_10082d0c8)();
  return iVar1;
}

