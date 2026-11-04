// name: _mach_host_self
// address: 1006ceca8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _mach_host_self(void)

{
  mach_port_t mVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mVar1 = (*(code *)PTR__mach_host_self_10082cea8)();
  return mVar1;
}

