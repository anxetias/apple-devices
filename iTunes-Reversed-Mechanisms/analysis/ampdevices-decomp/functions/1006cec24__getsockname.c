// name: _getsockname
// address: 1006cec24

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getsockname(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__getsockname_10082ce10)();
  return iVar1;
}

