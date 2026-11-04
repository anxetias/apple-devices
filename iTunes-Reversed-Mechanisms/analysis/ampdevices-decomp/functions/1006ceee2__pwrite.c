// name: _pwrite
// address: 1006ceee2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _pwrite(int param_1,void *param_2,size_t param_3,off_t param_4)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__pwrite_10082d0d8)();
  return sVar1;
}

