// name: FUN_10021c5cc
// address: 10021c5cc

void FUN_10021c5cc(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c4;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_10021c23e(param_1,*param_2,&local_e4);
  *(int *)(param_2 + 5) = local_d8;
  puVar1 = &local_e0;
  if (local_d8 != 1) {
    puVar1 = &local_dc;
  }
  *(uint *)((long)param_2 + 0x24) = *puVar1;
  *(uint *)((long)param_2 + 0x2c) = local_d4 << 0x10;
  *(uint *)((long)param_2 + 0xc) = ~local_e4 & 1;
  FUN_1001dfb1f("m4a",param_2[3],0xff);
  *(undefined4 *)(param_2 + 4) = 0x4d344120;
  FUN_1001b8e86(local_80,(ulong)local_e0 / 1000,1);
  FUN_1001b8e86(local_70,(ulong)local_dc / 1000,1);
  FUN_1001c334a(local_60,0x138b0006);
  FUN_1001b7a44(local_50);
  if (local_d8 == 0) {
    FUN_1001c334a(local_40,0x138b0008);
    FUN_1001bbf68(local_30,local_40,local_80,local_70);
    FUN_1001b80b2(local_50,local_30);
  }
  else if (local_d8 == 1) {
    FUN_1001c334a(local_40,0x138b000a);
    FUN_1001bbec4(local_30,local_40,local_80);
    FUN_1001b80b2(local_50,local_30);
  }
  else if (local_d8 == 2) {
    FUN_1001c334a(local_40,0x138b0009);
    FUN_1001bbec4(local_30,local_40,local_70);
    FUN_1001b80b2(local_50,local_30);
  }
  else {
    FUN_1001c334a(local_40,0x138b0008);
    FUN_1001bbf68(local_30,local_40,local_80,local_70);
    FUN_1001b80b2(local_50,local_30);
  }
  FUN_1001b7a50(local_30);
  FUN_1001b7a50(local_40);
  if (local_d4 != 0) {
    FUN_100537278((float)local_d4,local_40);
    FUN_1001b7a5c(local_30,local_60);
    FUN_1001bbcfe(local_30,local_40);
    FUN_1001bbcfe(local_50,local_30);
    FUN_1001b7a50(local_30);
    FUN_1001b7a50(local_40);
  }
  if (local_cc != 0) {
    FUN_1001c334a(local_40,0x138b000b);
    FUN_1001b7a5c(local_30,local_60);
    FUN_1001bbcfe(local_30,local_40);
    FUN_1001bbcfe(local_50,local_30);
    FUN_1001b7a50(local_30);
    FUN_1001b7a50(local_40);
  }
  if ((local_c4 != 0) && (*(long *)(param_1 + 0x28) != 0)) {
    FUN_1001c334a(local_40,0x138b000f);
    FUN_1001b7a5c(local_30,local_60);
    FUN_1001bbcfe(local_30,local_40);
    FUN_1001bbcfe(local_50,local_30);
    FUN_1001b7a50(local_30);
    FUN_1001b7a50(local_40);
  }
  if (local_d0 != 0) {
    FUN_1001c334a(local_40,0x138b000c);
    FUN_1001b7a5c(local_30,local_60);
    FUN_1001bbcfe(local_30,local_40);
    FUN_1001bbcfe(local_50,local_30);
    FUN_1001b7a50(local_30);
    FUN_1001b7a50(local_40);
  }
  FUN_1001c334a(local_30,0x138b0007);
  FUN_1001bbcfe(local_50,local_30);
  FUN_1001b7a50(local_30);
  FUN_1001bb41a(local_50,param_2[2]);
  FUN_1001b7a50(local_50);
  FUN_1001b7a50(local_60);
  FUN_1001b7a50(local_70);
  FUN_1001b7a50(local_80);
  return;
}

