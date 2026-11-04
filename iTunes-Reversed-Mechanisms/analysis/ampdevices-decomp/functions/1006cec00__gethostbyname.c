// name: _gethostbyname
// address: 1006cec00

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

hostent * _gethostbyname(char *param_1)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = (hostent *)(*(code *)PTR__gethostbyname_10082cde0)();
  return phVar1;
}

