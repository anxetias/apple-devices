// name: _mach_port_insert_right
// address: 1006cecc6

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t
_mach_port_insert_right
          (ipc_space_t task,mach_port_name_t name,mach_port_t poly,mach_msg_type_name_t polyPoly)

{
  kern_return_t kVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001006cecc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  kVar1 = (*(code *)PTR__mach_port_insert_right_10082ced0)();
  return kVar1;
}

