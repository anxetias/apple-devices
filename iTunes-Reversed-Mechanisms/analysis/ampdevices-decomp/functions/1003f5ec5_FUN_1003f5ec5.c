// name: FUN_1003f5ec5
// address: 1003f5ec5

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003f5ec5(long param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  uint local_60;
  long local_40;
  undefined8 local_38;
  undefined4 uVar4;
  
  local_40 = param_2;
  local_38 = param_4;
  FUN_1001c62d9(local_98,0x54);
  local_98._8_8_ = *(undefined8 *)((long)param_3 + 0xc);
  local_98._0_8_ = *param_3;
  local_88._0_4_ = (undefined4)(long)(*(float *)((long)param_3 + 0x1c) * DAT_100717f3c);
  local_88._4_8_ = param_3[4];
  local_88._12_4_ = *(uint *)(param_3 + 5);
  local_78 = (uint)*(byte *)((long)param_3 + 0x2d);
  local_74 = (uint)*(byte *)((long)param_3 + 0x2e);
  local_70 = *(uint *)(param_3 + 6);
  local_6c = (uint)(long)(*(float *)((long)param_3 + 0x14) * DAT_100717f3c);
  local_68 = *(uint *)(param_3 + 1);
  local_64 = *(undefined1 *)((long)param_3 + 0x34);
  local_63 = *(undefined1 *)((long)param_3 + 0x35);
  local_62 = *(undefined1 *)((long)param_3 + 0x2c);
  local_60 = (uint)(long)(DAT_100717f3c * *(float *)(param_3 + 3));
  if (*(char *)(param_1 + 0x100127) != '\0') {
    auVar2._8_8_ = *(undefined8 *)((long)param_3 + 0xc);
    auVar2._0_8_ = *param_3;
    local_98 = pshufb(auVar2,_DAT_100718a70);
    auVar1._0_4_ = (undefined4)local_88._4_8_;
    uVar4 = (undefined4)((ulong)local_88._4_8_ >> 0x20);
    auVar1._4_4_ = auVar1._0_4_;
    auVar1._8_4_ = uVar4;
    auVar1._12_4_ = uVar4;
    auVar2 = pblendw(auVar1,ZEXT416((uint)local_88._0_4_),3);
    auVar3._0_8_ = auVar2._0_8_;
    auVar3._8_8_ = auVar2._8_8_ & 0xffffffff | (ulong)*(uint *)(param_3 + 5) << 0x20;
    local_88 = pshufb(auVar3,_DAT_100718a70);
    local_78 = (uint)*(byte *)((long)param_3 + 0x2d) << 0x18;
    local_74 = (uint)*(byte *)((long)param_3 + 0x2e) << 0x18;
    local_70 = local_70 >> 0x18 | (local_70 & 0xff0000) >> 8 | (local_70 & 0xff00) << 8 |
               local_70 << 0x18;
    local_6c = local_6c >> 0x18 | (local_6c & 0xff0000) >> 8 | (local_6c & 0xff00) << 8 |
               local_6c << 0x18;
    local_68 = local_68 >> 0x18 | (local_68 & 0xff0000) >> 8 | (local_68 & 0xff00) << 8 |
               local_68 << 0x18;
    local_60 = local_60 >> 0x18 | (local_60 & 0xff0000) >> 8 | (local_60 & 0xff00) << 8 |
               local_60 << 0x18;
  }
  FUN_1003f625f(param_1,local_98,0x54,0x20,local_38);
  *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
  return;
}

