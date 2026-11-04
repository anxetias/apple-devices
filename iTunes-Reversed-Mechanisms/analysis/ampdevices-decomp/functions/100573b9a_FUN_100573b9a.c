// name: FUN_100573b9a
// address: 100573b9a

undefined8 FUN_100573b9a(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 local_150 [40];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  long local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  FUN_1001c62d9(&local_78,0x28);
  FUN_1001c62d9(&local_a8,0x28);
  local_108 = param_1[8];
  local_128 = (undefined4)param_1[4];
  uStack_124 = *(undefined4 *)((long)param_1 + 0x24);
  uStack_120 = (undefined4)param_1[5];
  uStack_11c = *(undefined4 *)((long)param_1 + 0x2c);
  local_118 = (undefined4)param_1[6];
  uStack_114 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_110 = (undefined4)param_1[7];
  uStack_10c = *(undefined4 *)((long)param_1 + 0x3c);
  cVar4 = (**(code **)(*param_1 + 0xc0))(param_1,&local_128,0,local_150,&local_38);
  if (cVar4 != '\0') {
    bVar1 = false;
    local_50 = param_3;
    local_48 = param_2;
    local_40 = param_4;
    do {
      iVar5 = (**(code **)(*param_1 + 200))(param_1,local_150);
      if (iVar5 == 0x76696465) {
        FUN_1001c62d9(&local_f8,0x28);
        FUN_1001c62d9(&local_d0,0x28);
        cVar4 = (**(code **)(*param_1 + 0xa8))(param_1,local_150,&local_f8,&local_d0,0);
        if (cVar4 != '\0') {
          local_58 = local_d8;
          local_68 = local_e8;
          uStack_60 = uStack_e0;
          local_78 = local_f8;
          uStack_70 = uStack_f0;
          local_a8._0_4_ = local_d0;
          local_a8._4_4_ = uStack_cc;
          uStack_a0 = uStack_c8;
          uStack_9c = uStack_c4;
          local_98 = local_c0;
          uStack_90 = uStack_b8;
          local_88 = local_b0;
          goto LAB_100573e05;
        }
      }
      else if ((iVar5 == 0x736f756e) && (!bVar1)) {
        FUN_1001c62d9(&local_f8,0x28);
        FUN_1001c62d9(&local_d0,0x28);
        cVar4 = (**(code **)(*param_1 + 0xa0))(param_1,local_150,&local_f8,&local_d0,0);
        if (cVar4 != '\0') {
          local_68 = local_e8;
          uVar6 = local_68;
          uStack_60 = uStack_e0;
          local_58 = local_d8;
          local_78 = local_f8;
          uStack_70 = uStack_f0;
          local_a8._0_4_ = local_d0;
          local_a8._4_4_ = uStack_cc;
          uStack_a0 = uStack_c8;
          uStack_9c = uStack_c4;
          local_98 = local_c0;
          uStack_90 = uStack_b8;
          local_88 = local_b0;
          bVar1 = true;
          local_68._0_4_ = (int)local_e8;
          bVar9 = (int)local_68 == 0x70696e66;
          local_68 = uVar6;
          if (bVar9) {
            puVar7 = &local_78;
            puVar8 = local_40;
            goto LAB_100573e36;
          }
        }
      }
      cVar4 = (**(code **)(*param_1 + 0xc0))(param_1,&local_128,local_38,local_150);
    } while (cVar4 != '\0');
    if (bVar1) {
LAB_100573e05:
      puVar3 = local_48;
      puVar2 = local_50;
      puVar7 = &local_78;
      puVar8 = local_40;
      if ((int)local_68 != 0x70696e66) {
        if ((int)local_68 != 0x73696e66) {
          return 0;
        }
        uVar6 = (**(code **)(*param_1 + 0x98))(param_1,&local_78);
        *puVar3 = uVar6;
        puVar7 = &local_a8;
        puVar8 = puVar2;
      }
LAB_100573e36:
      uVar6 = (**(code **)(*param_1 + 0x98))(param_1,puVar7);
      *puVar8 = uVar6;
    }
  }
  return 0;
}

