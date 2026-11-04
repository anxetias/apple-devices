// name: _vsnprintf
// address: 1006cf1dc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _vsnprintf(char *param_1,size_t param_2,char *param_3,va_list param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__vsnprintf_10082d2d0)();
  return iVar1;
}

