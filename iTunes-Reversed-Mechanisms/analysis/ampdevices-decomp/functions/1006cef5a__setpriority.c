// name: _setpriority
// address: 1006cef5a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setpriority(int param_1,id_t param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__setpriority_10082d170)();
  return iVar1;
}

