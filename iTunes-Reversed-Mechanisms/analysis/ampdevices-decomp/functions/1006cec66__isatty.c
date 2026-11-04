// name: _isatty
// address: 1006cec66

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _isatty(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__isatty_10082ce50)();
  return iVar1;
}

