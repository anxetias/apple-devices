// name: _fcntl
// address: 1006ceb94

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fcntl(int param_1,int param_2,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fcntl_10082cd58)();
  return iVar1;
}

