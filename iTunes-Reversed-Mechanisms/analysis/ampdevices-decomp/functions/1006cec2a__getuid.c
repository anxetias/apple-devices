// name: _getuid
// address: 1006cec2a

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uid_t _getuid(void)

{
  uid_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__getuid_10082ce18)();
  return uVar1;
}

