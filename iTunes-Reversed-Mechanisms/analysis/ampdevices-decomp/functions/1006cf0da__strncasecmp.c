// name: _strncasecmp
// address: 1006cf0da

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strncasecmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__strncasecmp_10082d218)();
  return iVar1;
}

