// name: _lseek
// address: 1006cec90

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

off_t _lseek(int param_1,off_t param_2,int param_3)

{
  off_t oVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  oVar1 = (*(code *)PTR__lseek_10082ce88)();
  return oVar1;
}

