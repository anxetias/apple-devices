// name: _write
// address: 1006cf1e2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ssize_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cf1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = (*(code *)PTR__write_10082d2d8)();
  return sVar1;
}

