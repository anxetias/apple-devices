// name: _setsockopt
// address: 1006cef60

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setsockopt(int param_1,int param_2,int param_3,void *param_4,socklen_t param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cef60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__setsockopt_10082d178)();
  return iVar1;
}

