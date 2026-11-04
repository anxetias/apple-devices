// name: FUN_1001b2a3e
// address: 1001b2a3e

void FUN_1001b2a3e(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  mach_msg_header_t local_30;
  
  local_30.msgh_remote_port = *(mach_port_t *)(param_1 + 0xb8);
  if (local_30.msgh_remote_port + 1 < 2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0a84(uVar2);
    }
    FUN_1001782e9(0,0);
    local_30.msgh_remote_port = *(mach_port_t *)(param_1 + 0xb8);
  }
  local_30.msgh_bits = 0x13;
  local_30.msgh_size = 0x18;
  local_30.msgh_local_port = 0;
  local_30.msgh_reserved = 0;
  local_30.msgh_id = 0;
  _mach_msg(&local_30,1,0x18,0,0,0,0);
  return;
}

