// name: _ffsctl
// address: 1006cebac

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ffsctl(int param_1,ulong param_2,void *param_3,uint param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__ffsctl_10082cd78)();
  return iVar1;
}

