// name: _mach_absolute_time
// address: 1006cec9c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint64_t _mach_absolute_time(void)

{
  uint64_t uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)PTR__mach_absolute_time_10082ce98)();
  return uVar1;
}

