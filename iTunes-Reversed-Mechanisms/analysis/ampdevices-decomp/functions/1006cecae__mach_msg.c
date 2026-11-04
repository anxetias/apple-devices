// name: _mach_msg
// address: 1006cecae

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_msg_return_t
_mach_msg(mach_msg_header_t *msg,mach_msg_option_t option,mach_msg_size_t send_size,
         mach_msg_size_t rcv_size,mach_port_name_t rcv_name,mach_msg_timeout_t timeout,
         mach_port_name_t notify)

{
  mach_msg_return_t mVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  mVar1 = (*(code *)PTR__mach_msg_10082ceb0)();
  return mVar1;
}

