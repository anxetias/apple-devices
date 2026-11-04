// name: _getaddrinfo
// address: 1006cebf4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _getaddrinfo(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__getaddrinfo_10082cdd0)();
  return iVar1;
}

