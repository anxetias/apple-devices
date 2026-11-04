// name: FUN_1000020a0
// address: 1000020a0

mach_msg_return_t
FUN_1000020a0(mach_port_t param_1,undefined8 param_2,int param_3,undefined8 *param_4,int *param_5)

{
  mach_msg_return_t mVar1;
  mach_msg_header_t local_60;
  int local_48;
  undefined8 local_44;
  uint local_3c;
  int local_38;
  undefined8 local_34;
  int local_2c;
  
  local_48 = 1;
  local_3c = 0x1000100;
  local_34 = *(undefined8 *)PTR__NDR_record_10082cad0;
  local_44 = param_2;
  local_38 = param_3;
  local_2c = param_3;
  local_60.msgh_local_port = _mig_get_reply_port();
  local_60.msgh_bits = 0x80001513;
  local_60.msgh_reserved = 0;
  local_60.msgh_id = 0x4b0;
  local_60.msgh_remote_port = param_1;
  if (PTR__voucher_mach_msg_set_10082d2c8 != (undefined *)0x0) {
    _voucher_mach_msg_set(&local_60);
  }
  mVar1 = _mach_msg(&local_60,3,0x38,0x40,local_60.msgh_local_port,0,0);
  if ((mVar1 + 0xeffffffeU < 0xf) && ((0x4003U >> (mVar1 + 0xeffffffeU & 0x1f) & 1) != 0)) {
    _mig_put_reply_port(local_60.msgh_local_port);
  }
  else if (mVar1 == 0) {
    if (local_60.msgh_id == 0x47) {
      mVar1 = -0x134;
    }
    else if (local_60.msgh_id == 0x514) {
      if ((int)local_60.msgh_bits < 0) {
        mVar1 = -300;
        if ((((local_48 == 1) && (local_60.msgh_size == 0x38)) && (local_60.msgh_remote_port == 0))
           && ((local_3c >> 0x18 == 1 && (local_38 == local_2c)))) {
          *param_4 = local_44;
          *param_5 = local_38;
          return 0;
        }
      }
      else {
        mVar1 = -300;
        if (((local_60.msgh_size == 0x24) && (local_44._4_4_ != 0)) &&
           (mVar1 = -300, local_60.msgh_remote_port == 0)) {
          mVar1 = local_44._4_4_;
        }
      }
    }
    else {
      mVar1 = -0x12d;
    }
    _mach_msg_destroy(&local_60);
  }
  else {
    _mig_dealloc_reply_port(local_60.msgh_local_port);
  }
  return mVar1;
}

