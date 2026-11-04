// name: _ftello
// address: 1006cebdc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

off_t _ftello(FILE *param_1)

{
  off_t oVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  oVar1 = (*(code *)PTR__ftello_10082cdb8)();
  return oVar1;
}

