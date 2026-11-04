// name: _posix_memalign
// address: 1006cee16

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _posix_memalign(void **param_1,size_t param_2,size_t param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cee16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__posix_memalign_10082cfc8)();
  return iVar1;
}

