// name: _pthread_attr_init
// address: 1006cee40

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_attr_init(pthread_attr_t *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__pthread_attr_init_10082d000)();
  return iVar1;
}

