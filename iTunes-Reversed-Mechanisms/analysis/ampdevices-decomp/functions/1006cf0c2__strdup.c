// name: _strdup
// address: 1006cf0c2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strdup(char *param_1)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strdup_10082d1f8)();
  return pcVar1;
}

