// name: _fclose
// address: 1006ceb8e

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceb8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fclose_10082cd50)();
  return iVar1;
}

