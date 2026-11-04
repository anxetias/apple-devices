// name: _strncat
// address: 1006cf0e0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncat(char *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strncat_10082d220)();
  return pcVar1;
}

