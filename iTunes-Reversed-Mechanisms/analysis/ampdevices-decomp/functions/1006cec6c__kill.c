// name: _kill
// address: 1006cec6c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _kill(pid_t param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__kill_10082ce58)();
  return iVar1;
}

