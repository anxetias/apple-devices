// name: _pthread_kill
// address: 1006ceea6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_kill(pthread_t param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_kill_10082d088)();
  return iVar1;
}

