// name: _atol
// address: 1006cea44

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long _atol(char *param_1)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cea44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (*(code *)PTR__atol_10082cbc8)();
  return lVar1;
}

