// name: FUN_1001b29c4
// address: 1001b29c4

void FUN_1001b29c4(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  mach_port_name_t rcv_name;
  mach_msg_header_t local_38;
  
  rcv_name = *(mach_port_name_t *)(param_1 + 0xb8);
  if (rcv_name + 1 < 2) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a0a0e(uVar2);
    }
    FUN_1001782e9(0,0);
    rcv_name = *(mach_port_name_t *)(param_1 + 0xb8);
  }
  _mach_msg(&local_38,2,0,0x20,rcv_name,0,0);
  return;
}

