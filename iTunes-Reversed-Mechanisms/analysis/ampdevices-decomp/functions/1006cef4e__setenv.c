// name: _setenv
// address: 1006cef4e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setenv(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__setenv_10082d160)();
  return iVar1;
}

