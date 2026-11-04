// name: _host_info
// address: 1006cec36

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_host_info(host_t host,host_flavor_t flavor,host_info_t host_info_out,
          mach_msg_type_number_t *host_info_outCnt)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cec36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__host_info_10082ce28)();
  return kVar1;
}

