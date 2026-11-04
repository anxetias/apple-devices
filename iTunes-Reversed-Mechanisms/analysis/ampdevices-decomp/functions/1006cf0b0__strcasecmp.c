// name: _strcasecmp
// address: 1006cf0b0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strcasecmp(char *param_1,char *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__strcasecmp_10082d1e0)();
  return iVar1;
}

