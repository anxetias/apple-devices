// name: _fopen
// address: 1006cebb2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

FILE * _fopen(char *param_1,char *param_2)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FILE *)(*(code *)PTR__fopen_10082cd80)();
  return pFVar1;
}

