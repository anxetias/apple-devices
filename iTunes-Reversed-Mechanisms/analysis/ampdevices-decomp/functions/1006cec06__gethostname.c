// name: _gethostname
// address: 1006cec06

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _gethostname(char *param_1,size_t param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__gethostname_10082cde8)();
  return iVar1;
}

