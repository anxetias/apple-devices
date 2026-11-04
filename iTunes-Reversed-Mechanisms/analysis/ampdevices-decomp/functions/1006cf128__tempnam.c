// name: _tempnam
// address: 1006cf128

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _tempnam(char *param_1,char *param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__tempnam_10082d280)();
  return pcVar1;
}

