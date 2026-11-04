// name: FUN_1001f7dcb
// address: 1001f7dcb

undefined4
FUN_1001f7dcb(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
             undefined8 param_6,long param_7,long param_8)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  uint local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined2 local_70;
  undefined4 local_68;
  short local_48;
  ushort local_46;
  ushort local_44;
  undefined2 local_42;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c;
  undefined8 local_38;
  
  if (param_4 != (undefined8 *)0x0) {
    param_4[2] = 0;
    param_4[3] = 0;
    *param_4 = 0;
    param_4[1] = 0;
    param_4[4] = 0;
  }
  local_38 = param_5;
  cVar1 = FUN_1001f77de(param_1);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c987b(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else if (*(long *)(param_1 + 0x428) == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006c9805(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffca;
  }
  else {
    param_3 = param_3 - (ulong)(param_3 != 0 && param_2 != 0);
    param_8 = param_8 - (ulong)(param_8 != 0 && param_7 != 0);
    iVar2 = FUN_1001f02f4(*(long *)(param_1 + 0x428),local_d0,param_2,param_3,local_38,param_6,
                          param_7,param_8);
    if (iVar2 == 0) {
      if (param_2 != 0) {
        *(undefined1 *)(param_2 + param_3) = 0;
      }
      if (param_7 != 0) {
        *(undefined1 *)(param_7 + param_8) = 0;
      }
      uVar3 = 0;
      if (param_4 != (undefined8 *)0x0) {
        auVar6 = pblendw(local_c0,(undefined1  [16])0x0,0xee);
        auVar5 = pblendw(local_d0,(undefined1  [16])0x0,0xee);
        auVar5 = packusdw(auVar5,auVar6);
        auVar5 = packusdw(auVar5,auVar5);
        *param_4 = auVar5._0_8_;
        param_4[2] = local_a0;
        param_4[3] = uStack_98;
        *(undefined2 *)(param_4 + 4) = local_70;
        *(undefined4 *)((long)param_4 + 0x24) = local_68;
        local_44 = (ushort)(local_b0 >> 0x10);
        local_48 = (local_44 >> 9) + 0x7bc;
        local_46 = local_44 >> 5 & 0xf;
        local_44 = local_44 & 0x1f;
        local_42 = (undefined2)((local_b0 & 0xffff) >> 0xb);
        local_40 = (ushort)(local_b0 >> 5) & 0x3f;
        local_3e = (short)local_b0 * 2 & 0x3e;
        FUN_1001781a2(&local_48,&local_3c);
        FUN_100177e94(local_3c,param_4 + 1);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006c978f(uVar4);
      }
      FUN_1001782e9(0,0);
      uVar3 = FUN_1001f7970(iVar2);
    }
  }
  return uVar3;
}

