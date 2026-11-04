// name: _memcmp
// address: 1006cece4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cece4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__memcmp_10082cf00)();
  return iVar1;
}

