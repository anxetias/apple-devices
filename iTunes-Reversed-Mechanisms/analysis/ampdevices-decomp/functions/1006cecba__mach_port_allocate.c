// name: _mach_port_allocate
// address: 1006cecba

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_port_allocate(ipc_space_t task,mach_port_right_t right,mach_port_name_t *name)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_allocate_10082cec0)();
  return kVar1;
}

