// name: _chmod
// address: 1006cea6e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _chmod(char *param_1,mode_t param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__chmod_10082cc00)();
  return iVar1;
}

