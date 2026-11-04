// name: FUN_10030d877
// address: 10030d877

void FUN_10030d877(long param_1,byte param_2)

{
  long lVar1;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  code *local_80;
  long local_78;
  long local_70;
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
  
  *(undefined1 *)(param_1 + 0xc9) = 0;
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_50 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_10 = 0;
  local_98 = 0x200000000;
  local_80 = FUN_1002fa778;
  lStack_68 = param_1 + 0xba;
  local_48 = *(undefined4 *)(param_1 + 0x1a8);
  local_90 = 0x1e0000004e;
  local_88 = 0x1e;
  local_40 = 0x200000000000;
  local_38 = 0;
  local_30 = 0x8000000000000;
  local_28 = 0;
  local_20 = 1;
  local_18 = 0;
  if (lVar1 != 0) {
    local_70 = param_1 + 0xc9;
    local_50 = lVar1 + 0x2430;
    local_60 = lVar1 + 0x1c10;
    lStack_58 = param_1 + 0xd8;
  }
  local_78 = param_1;
  FUN_1002fa9ac(&local_98);
  return;
}

