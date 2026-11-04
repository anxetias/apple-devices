// name: _strncpy
// address: 1006cf0ec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncpy(char *param_1,char *param_2,size_t param_3)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strncpy_10082d230)();
  return pcVar1;
}

