// name: FUN_1001ee16d
// address: 1001ee16d

int FUN_1001ee16d(void)

{
  mach_port_t host;
  kern_return_t kVar1;
  integer_t local_3c [3];
  int local_30;
  mach_msg_type_number_t local_1c;
  
  if (DAT_10088f6a0 != -1) {
    return DAT_10088f6a0;
  }
  local_1c = 8;
  host = _mach_host_self();
  kVar1 = _host_info(host,5,local_3c,&local_1c);
  DAT_10088f6a0 = 0x1f;
  if (kVar1 == 0) {
    DAT_10088f6a0 = local_30;
  }
  _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__10082cee0,host);
  return DAT_10088f6a0;
}

