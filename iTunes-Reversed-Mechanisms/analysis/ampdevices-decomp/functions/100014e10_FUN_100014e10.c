// name: FUN_100014e10
// address: 100014e10

/* WARNING: Switch with 1 destination removed at 0x000100014f4e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

mach_msg_return_t FUN_100014e10(void)

{
  byte bVar1;
  mach_port_t mVar2;
  undefined *puVar3;
  mach_msg_return_t mVar4;
  uint uVar5;
  undefined8 in_RAX;
  ulong uVar6;
  uint uVar7;
  int extraout_EDX;
  undefined8 unaff_RBX;
  int *in_R8;
  mach_msg_header_t mStack_60;
  int iStack_48;
  undefined4 uStack_44;
  int iStack_40;
  uint uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  uStack_30 = (undefined4)unaff_RBX;
  iStack_2c = (int)((ulong)unaff_RBX >> 0x20);
  local_38 = (int)in_RAX;
  uStack_34 = (undefined4)((ulong)in_RAX >> 0x20);
  uVar6 = (_DAT_10088e780 - (long)&local_38) + DAT_10088e7f8;
  _DAT_10088e780 = uVar6 * 0x79f54c43 + 0x585ffb1538078cd1;
  DAT_10088e7f8 = (uVar6 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
  uVar7 = ((uint)DAT_10088e7f8 - (uint)_DAT_10088e780 ^ 0xc7f8732f) * 0x79f54c43;
  uVar6 = (ulong)((byte)(&DAT_1006d1c30)[uVar7 & 0xff] ^ 0x3c);
  uVar5 = ((uint)_DAT_10088e780 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  puVar3 = (&PTR__bootstrap_look_up_10082e9f0)
           [(byte)((byte)uVar5 ^ (&DAT_1006d1a30)[(byte)(&DAT_1006d0b70)[uVar5 & 0xff] ^ 0x38]) + 1]
  ;
  iStack_40 = 0x14ed6;
  uStack_3c = 1;
  (*(code *)(puVar3 + -3))
            (*(undefined4 *)
              ((&PTR__bootstrap_look_up_10082e9f0)
               [(int)((byte)((byte)uVar7 ^ (&DAT_1006d2c00)[uVar6]) - 0x5f)] + -3));
  uVar5 = (DAT_10088e780 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  iStack_40 = 0x14f0d;
  uStack_3c = 1;
  (*(code *)(puVar3 + -3))
            (*(undefined4 *)
              ((&PTR__bootstrap_look_up_10082e9f0)
               [(int)((byte)((byte)uVar5 ^
                            (&DAT_1006d2c00)[(byte)(&DAT_1006d1c30)[uVar5 & 0xff] ^ 0x46]) - 0xa1)]
              + -1));
  uVar5 = (DAT_10088e780 ^ 0xc7f8732f ^ (uint)DAT_10088e7f8) * 0x79f54c43;
  bVar1 = (&DAT_1006d1c30)[uVar5 & 0xff];
  mVar2 = *(mach_port_t *)
           ((&PTR__bootstrap_look_up_10082e9f0)
            [(int)((byte)((byte)uVar5 ^ *(byte *)((undefined8 *)(ulong)(bVar1 ^ 0x10) + 0x200da580))
                  - 2)] + -3);
  iStack_48 = 1;
  uStack_44 = (undefined4)uVar6;
  iStack_40 = (int)(uVar6 >> 0x20);
  uStack_3c = 0x1000100;
  uStack_34 = (undefined4)*(undefined8 *)PTR__NDR_record_10082cad0;
  uStack_30 = (undefined4)((ulong)*(undefined8 *)PTR__NDR_record_10082cad0 >> 0x20);
  local_38 = extraout_EDX;
  iStack_2c = extraout_EDX;
  mStack_60.msgh_local_port = _mig_get_reply_port();
  mStack_60.msgh_bits = 0x80001513;
  mStack_60.msgh_reserved = 0;
  mStack_60.msgh_id = 0x4b0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  mStack_60.msgh_remote_port = mVar2;
  if (PTR__voucher_mach_msg_set_10082d2c8 != (undefined *)0x0) {
    _voucher_mach_msg_set(&mStack_60);
  }
  mVar4 = _mach_msg(&mStack_60,3,0x38,0x40,mStack_60.msgh_local_port,0,0);
  if ((mVar4 + 0xeffffffeU < 0xf) && ((0x4003U >> (mVar4 + 0xeffffffeU & 0x1f) & 1) != 0)) {
    _mig_put_reply_port(mStack_60.msgh_local_port);
  }
  else if (mVar4 == 0) {
    if (mStack_60.msgh_id == 0x47) {
      mVar4 = -0x134;
    }
    else if (mStack_60.msgh_id == 0x514) {
      if ((int)mStack_60.msgh_bits < 0) {
        mVar4 = -300;
        if ((((iStack_48 == 1) && (mStack_60.msgh_size == 0x38)) &&
            (mStack_60.msgh_remote_port == 0)) &&
           ((uStack_3c >> 0x18 == 1 && (local_38 == iStack_2c)))) {
          *(undefined8 *)(ulong)(bVar1 ^ 0x10) = CONCAT44(iStack_40,uStack_44);
          *in_R8 = local_38;
          return 0;
        }
      }
      else {
        mVar4 = -300;
        if (((mStack_60.msgh_size == 0x24) && (iStack_40 != 0)) &&
           (mVar4 = -300, mStack_60.msgh_remote_port == 0)) {
          mVar4 = iStack_40;
        }
      }
    }
    else {
      mVar4 = -0x12d;
    }
    _mach_msg_destroy(&mStack_60);
  }
  else {
    _mig_dealloc_reply_port(mStack_60.msgh_local_port);
  }
  return mVar4;
}

