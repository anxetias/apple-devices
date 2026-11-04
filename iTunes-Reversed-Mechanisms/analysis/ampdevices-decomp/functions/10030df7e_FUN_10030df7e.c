// name: FUN_10030df7e
// address: 10030df7e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10030df7e(long param_1,byte param_2)

{
  long lVar1;
  bool bVar2;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  code *local_80;
  long local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  long lStack_50;
  undefined4 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined1 local_10;
  
  if ((param_2 & 4) == 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    bVar2 = param_1 != 0;
  }
  else {
    bVar2 = true;
    if (param_1 == 0) {
      bVar2 = false;
      lVar1 = 0;
      goto LAB_10030dfd4;
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
LAB_10030dfd4:
  lStack_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_10 = 0;
  local_98 = 4;
  local_80 = FUN_1002fa778;
  if (bVar2) {
    lStack_68 = param_1 + 0xbe;
    uStack_48 = *(undefined4 *)(param_1 + 0x1b8);
  }
  local_94 = _DAT_100743920;
  uStack_90 = _UNK_100743924;
  uStack_8c = _UNK_100743928;
  uStack_88 = _UNK_10074392c;
  local_40 = 0x2000000000000;
  uStack_38 = 0;
  local_30 = 0x80000000000000;
  uStack_28 = 0;
  local_20 = 0x200000;
  uStack_18 = 0;
  if (lVar1 != 0) {
    lStack_50 = lVar1 + 0x24d0;
    local_60 = lVar1 + 0x1cb0;
    lStack_58 = param_1 + 0xec;
  }
  local_78 = param_1;
  FUN_1002fa9ac(&local_98);
  return;
}

