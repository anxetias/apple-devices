// name: _sysctlbyname
// address: 1006cf116

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sysctlbyname(char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sysctlbyname_10082d268)();
  return iVar1;
}

