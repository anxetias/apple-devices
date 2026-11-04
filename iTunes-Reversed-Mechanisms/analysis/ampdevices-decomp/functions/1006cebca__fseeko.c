// name: _fseeko
// address: 1006cebca

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseeko(FILE *param_1,off_t param_2,int param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fseeko_10082cda0)();
  return iVar1;
}

