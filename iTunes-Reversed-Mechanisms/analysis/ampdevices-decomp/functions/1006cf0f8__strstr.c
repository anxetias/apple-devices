// name: _strstr
// address: 1006cf0f8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strstr(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strstr_10082d240)();
  return pcVar1;
}

