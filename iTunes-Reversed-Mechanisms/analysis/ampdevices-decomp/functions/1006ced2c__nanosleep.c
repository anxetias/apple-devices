// name: _nanosleep
// address: 1006ced2c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _nanosleep(timespec *param_1,timespec *param_2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ced2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__nanosleep_10082cf60)();
  return iVar1;
}

