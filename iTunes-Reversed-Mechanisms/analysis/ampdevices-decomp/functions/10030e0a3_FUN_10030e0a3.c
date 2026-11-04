// name: FUN_10030e0a3
// address: 10030e0a3

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030e0a3(long param_1)

{
  long lVar1;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  code *local_80;
  long local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  if (param_1 == 0) {
    local_48 = 0;
    lStack_68 = 0;
    local_78 = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    lStack_68 = param_1 + 0xbf;
    local_48 = *(undefined4 *)(param_1 + 0x1bc);
    local_78 = param_1;
  }
  local_50 = 0;
  lStack_58 = 0;
  local_60 = 0;
  local_70 = 0;
  local_98 = _DAT_1007439a0;
  uStack_94 = _UNK_1007439a4;
  uStack_90 = _UNK_1007439a8;
  uStack_8c = _UNK_1007439ac;
  local_80 = FUN_1002fa778;
  local_88 = 0x23;
  local_40 = 0x4000000000000;
  local_38 = 0;
  local_30 = 0x100000000000000;
  local_28 = 0;
  local_10 = 1;
  local_20 = 0x100000000;
  local_18 = 0;
  if (lVar1 != 0) {
    local_50 = lVar1 + 0x2520;
    local_60 = lVar1 + 0x2070;
    lStack_58 = *(long *)(param_1 + 0x78) + 0x28;
  }
  FUN_1002fa9ac(&local_98);
  return;
}

