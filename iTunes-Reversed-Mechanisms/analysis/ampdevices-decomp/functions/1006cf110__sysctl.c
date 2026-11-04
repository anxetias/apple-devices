// name: _sysctl
// address: 1006cf110

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sysctl(int *param_1,u_int param_2,void *param_3,size_t *param_4,void *param_5,size_t param_6)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__sysctl_10082d260)();
  return iVar1;
}

