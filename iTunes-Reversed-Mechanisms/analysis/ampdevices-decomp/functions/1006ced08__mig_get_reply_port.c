// name: _mig_get_reply_port
// address: 1006ced08

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _mig_get_reply_port(void)

{
  mach_port_t mVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ced08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mVar1 = (*(code *)PTR__mig_get_reply_port_10082cf30)();
  return mVar1;
}

