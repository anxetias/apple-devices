// name: _shutdown
// address: 1006cef6c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _shutdown(int param_1,int param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__shutdown_10082d188)();
  return iVar1;
}

