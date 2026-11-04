// name: _inet_addr
// address: 1006cec42

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

in_addr_t _inet_addr(char *param_1)

{
  in_addr_t iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__inet_addr_10082ce40)();
  return iVar1;
}

