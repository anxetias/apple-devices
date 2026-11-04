// name: _pthread_create
// address: 1006cee82

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_create_10082d058)();
  return iVar1;
}

