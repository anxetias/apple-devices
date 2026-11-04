// name: FUN_1001b2ad0
// address: 1001b2ad0

void FUN_1001b2ad0(long param_1,long param_2)

{
  mach_msg_return_t mVar1;
  mach_msg_header_t local_28;
  
  local_28.msgh_bits = 0x13;
  local_28.msgh_size = 0x18;
  local_28.msgh_local_port = 0;
  local_28.msgh_remote_port = *(mach_port_t *)(param_2 + 0xb8);
  local_28.msgh_reserved = 0;
  local_28.msgh_id = 0;
  mVar1 = _mach_msg(&local_28,3,0x18,0x20,*(mach_port_name_t *)(param_1 + 0xb8),0,0);
  if (mVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _pthread_exit((void *)0x0);
}

