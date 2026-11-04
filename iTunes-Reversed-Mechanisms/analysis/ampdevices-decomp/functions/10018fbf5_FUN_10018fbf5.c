// name: FUN_10018fbf5
// address: 10018fbf5

undefined8 FUN_10018fbf5(long param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  cVar1 = FUN_10017cbd0();
  if ((param_2 == (uint *)0x0) || (cVar1 == '\0')) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006939d2(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    iVar2 = _stat_INODE64(param_1 + 0x19,&local_a8);
    if (iVar2 == 0) {
      uVar5 = (uint)local_a8._4_2_;
      uVar5 = (uVar5 & 1) << 0x10 |
              (uVar5 & 2) << 0x11 |
              (uVar5 & 4) << 0xf |
              (uVar5 & 8) << 5 |
              (uVar5 & 0x10) << 6 |
              (uVar5 & 0x20) << 4 |
              local_a8._4_2_ >> 6 & 1 | local_a8._4_2_ >> 5 & 4 | local_a8._4_2_ >> 7 & 2;
      uVar4 = 0;
    }
    else {
      piVar3 = ___error();
      uVar4 = FUN_1001eb020(*piVar3);
      uVar5 = 0;
    }
    *param_2 = uVar5;
  }
  return uVar4;
}

