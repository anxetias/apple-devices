// name: _mach_port_deallocate
// address: 1006cecc0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_deallocate(ipc_space_t task,mach_port_name_t name)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_deallocate_10082cec8)();
  return kVar1;
}

