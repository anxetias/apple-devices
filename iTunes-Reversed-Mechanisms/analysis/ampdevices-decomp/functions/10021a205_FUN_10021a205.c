// name: FUN_10021a205
// address: 10021a205

undefined8
FUN_10021a205(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  code *local_100;
  code *local_f8;
  char *local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [8];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_38;
  
  local_110 = &local_118;
  local_118 = 0;
  local_108 = 0xc812000000;
  local_100 = FUN_10021a6fc;
  local_f8 = FUN_10021a897;
  local_f0 = "";
  local_4c = param_6;
  FUN_1001b7a44(local_e8);
  FUN_1001b7a44(local_d8);
  FUN_1001b7a44(local_c8);
  FUN_1001b7a44(local_b8);
  local_a8 = 0;
  FUN_10032f0f2();
  FUN_1001aa318(local_90);
  FUN_10032f0f2(local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0x3f800000;
  FUN_1001b8172(local_110 + 6,param_1);
  FUN_1001b8172(local_110 + 8,param_2);
  FUN_1001b8172(local_110 + 10,param_3);
  FUN_1001b8172(local_110 + 0xc,param_4);
  puVar3 = local_110;
  *(undefined4 *)(local_110 + 0xe) = param_5;
  *(undefined4 *)((long)puVar3 + 0x74) = local_4c;
  FUN_1001a790a(&local_48,param_7);
  FUN_1001a7b1c(local_110 + 0xf,&local_48);
  FUN_1001a85d4(&local_48);
  FUN_1001a8bb0(&local_48,param_8);
  FUN_1001aaadc(local_110 + 0x11,&local_48);
  FUN_1001ab3c4(&local_48);
  FUN_1001a8d64(&local_48,param_9);
  FUN_1001a7b1c(local_110 + 0x12,&local_48);
  FUN_1001a8fac(&local_48);
  puVar3 = local_110;
  plVar1 = local_110 + 0x14;
  if (plVar1 != &DAT_1008c7630) {
    *(undefined4 *)(local_110 + 0x18) = DAT_1008c7650;
    plVar9 = DAT_1008c7640;
    lVar2 = puVar3[0x15];
    if (lVar2 != 0) {
      lVar6 = 0;
      do {
        *(undefined8 *)(*plVar1 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      plVar8 = (long *)puVar3[0x16];
      puVar3[0x16] = 0;
      puVar3[0x17] = 0;
      plVar7 = plVar8;
      if (plVar9 != (long *)0x0 && plVar8 != (long *)0x0) {
        do {
          *(int *)(plVar7 + 2) = (int)plVar9[2];
          *(int *)(plVar7 + 3) = (int)plVar9[3];
          FUN_1001b8172(plVar7 + 4,plVar9 + 4);
          plVar8 = (long *)*plVar7;
          plVar7[1] = (ulong)*(uint *)(plVar7 + 2);
          uVar4 = FUN_10021bac2(plVar1,(ulong)*(uint *)(plVar7 + 2),plVar7 + 2);
          FUN_10021bfdc(plVar1,plVar7,uVar4);
          plVar9 = (long *)*plVar9;
          if (plVar8 == (long *)0x0) break;
          plVar7 = plVar8;
        } while (plVar9 != (long *)0x0);
      }
      FUN_10021ba92(plVar1,plVar8);
    }
    if (plVar9 != (long *)0x0) {
      do {
        puVar5 = operator_new(0x30);
        local_38 = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(int *)(puVar5 + 2) = (int)plVar9[2];
        *(int *)(puVar5 + 3) = (int)plVar9[3];
        local_48 = puVar5;
        local_40 = puVar3 + 0x16;
        FUN_1001b7a5c(puVar5 + 4,plVar9 + 4);
        local_38 = 1;
        puVar5[1] = (ulong)*(uint *)(puVar5 + 2);
        uVar4 = FUN_10021bac2(plVar1,(ulong)*(uint *)(puVar5 + 2),puVar5 + 2);
        FUN_10021bfdc(plVar1,puVar5,uVar4);
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  (*(code *)PTR__objc_msgSend_10082c770)
            (DAT_1008a2da0,PTR_s_getNotificationSettingsWithCompl_10088c3a8);
  __Block_object_dispose(&local_118,8);
  FUN_10021ba62(&local_78);
  FUN_1001a8fac(local_88);
  FUN_1001ab3c4(local_90);
  FUN_1001a85d4(local_a0);
  FUN_1001b7a50(local_b8);
  FUN_1001b7a50(local_c8);
  FUN_1001b7a50(local_d8);
  FUN_1001b7a50(local_e8);
  return 1;
}

