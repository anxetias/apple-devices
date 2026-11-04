// name: FUN_1001f975b
// address: 1001f975b

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1001f975b(long param_1,long param_2,int param_3,uint param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ushort local_48;
  undefined8 local_46;
  ushort local_3e;
  undefined4 local_3c;
  int local_38;
  uint local_34;
  
  local_38 = param_3;
  cVar1 = FUN_1001f77de();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006caf61(uVar4);
    }
  }
  else {
    if (*(long *)(param_1 + 0x430) == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006caeeb(uVar4);
      }
      FUN_1001782e9(0,0);
      return 0xffffffca;
    }
    if (param_2 != 0) {
      local_68 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      local_58 = 0;
      local_34 = param_4;
      if (param_3 == 0) {
        FUN_100177d5c(&local_38);
        param_3 = local_38;
      }
      FUN_100177f1b(param_3,&local_3c);
      auVar6._0_8_ = FUN_100178093(local_3c,&local_48);
      auVar6._8_8_ = extraout_XMM0_Qb;
      uVar5 = 0x210000;
      if (0x7bb < local_48) {
        auVar6 = pmovzxwd(auVar6,local_46);
        auVar6 = pmulld(auVar6,_DAT_100712570);
        auVar7._0_8_ = auVar6._8_8_;
        auVar7._8_4_ = auVar6._8_4_;
        auVar7._12_4_ = auVar6._12_4_;
        uVar5 = (ulong)(SUB164(auVar7 | auVar6,4) | SUB164(auVar7 | auVar6,0) |
                       (uint)(local_3e >> 1) | (uint)local_48 * 0x2000000 + 0x88000000);
      }
      local_68._8_8_ = uVar5;
      local_50 = (ulong)local_34;
      iVar2 = FUN_1001f5c8f(*(undefined8 *)(param_1 + 0x430),param_2,local_78,0,0,0,0,0,
                            (param_5 & 1) * 8 ^ 8,(param_5 & 1) - 1,0);
      if (iVar2 == 0) {
        return 0;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006cadff(uVar4);
      }
      FUN_1001782e9(0,0);
      uVar3 = FUN_1001f7970(iVar2);
      return uVar3;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006cae75(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

