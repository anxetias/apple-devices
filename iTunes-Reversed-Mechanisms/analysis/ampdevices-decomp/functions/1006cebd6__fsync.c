// name: _fsync
// address: 1006cebd6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fsync(int param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cebd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fsync_10082cdb0)();
  return iVar1;
}

