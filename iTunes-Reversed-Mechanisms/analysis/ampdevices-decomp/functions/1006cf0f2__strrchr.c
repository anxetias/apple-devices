// name: _strrchr
// address: 1006cf0f2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strrchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strrchr_10082d238)();
  return pcVar1;
}

