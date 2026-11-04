// name: _mach_port_mod_refs
// address: 1006ceccc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_mod_refs(ipc_space_t task,mach_port_name_t name,mach_port_right_t right,
                   mach_port_delta_t delta)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006ceccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_mod_refs_10082ced8)();
  return kVar1;
}

