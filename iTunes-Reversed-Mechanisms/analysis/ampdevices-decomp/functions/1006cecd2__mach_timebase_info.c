// name: _mach_timebase_info
// address: 1006cecd2

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_timebase_info(mach_timebase_info_t info)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_timebase_info_10082cee8)();
  return kVar1;
}

