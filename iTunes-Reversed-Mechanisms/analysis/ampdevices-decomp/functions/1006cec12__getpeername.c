// name: _getpeername
// address: 1006cec12

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getpeername(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__getpeername_10082cdf8)();
  return iVar1;
}

