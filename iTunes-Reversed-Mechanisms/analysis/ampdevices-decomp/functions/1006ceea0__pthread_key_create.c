// name: _pthread_key_create
// address: 1006ceea0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_key_create(pthread_key_t *param_1,void *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_key_create_10082d080)();
  return iVar1;
}

