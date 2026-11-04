// name: _getpid
// address: 1006cec18

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pid_t _getpid(void)

{
  pid_t pVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pVar1 = (*(code *)PTR__getpid_10082ce00)();
  return pVar1;
}

