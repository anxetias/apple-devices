// name: FUN_1001b2884
// address: 1001b2884

void FUN_1001b2884(long param_1)

{
  ipc_space_t task;
  mach_port_name_t name;
  kern_return_t kVar1;
  
  task = *(ipc_space_t *)PTR__mach_task_self__10082cee0;
  kVar1 = _mach_port_allocate(task,1,(mach_port_name_t *)(param_1 + 0xb8));
  if (kVar1 != 0) {
    return;
  }
  name = *(mach_port_name_t *)(param_1 + 0xb8);
  _mach_port_insert_right(task,name,name,0x14);
  return;
}

