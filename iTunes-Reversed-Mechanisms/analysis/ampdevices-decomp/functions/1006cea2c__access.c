// name: _access
// address: 1006cea2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _access(char *param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__access_10082cba8)();
  return iVar1;
}

