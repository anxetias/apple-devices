// name: _strchr
// address: 1006cf0b6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strchr(char *param_1,int param_2)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(*(code *)PTR__strchr_10082d1e8)();
  return pcVar1;
}

