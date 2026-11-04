// name: FUN_1001911e1
// address: 1001911e1

undefined4 FUN_1001911e1(long param_1,uint param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  iVar1 = _fstat_INODE64(*(undefined4 *)(param_1 + 0x4d8),&local_e8);
  if (iVar1 == 0) {
    uVar5 = lStack_80 << 9;
    if ((ulong)(lStack_80 << 9) < local_88) {
      uVar5 = local_88;
    }
    local_48 = param_3 - uVar5;
    if (param_3 < uVar5 || local_48 == 0) {
      if (param_4 == (ulong *)0x0) {
        return 0;
      }
    }
    else {
      if ((param_2 & 3) != 0) {
        uVar4 = 4;
        if ((param_2 & 2) != 0) {
          uVar4 = (param_2 & 1) * 4 + 2;
        }
        local_58 = (ulong)uVar4;
      }
      local_58 = CONCAT44(3,(undefined4)local_58);
      iVar1 = _fcntl(*(int *)(param_1 + 0x4d8),0x2a);
      if (iVar1 != 0 || param_4 == (ulong *)0x0) {
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_100191265;
      }
      uVar5 = uVar5 + lStack_40;
    }
    uVar2 = 0;
    *param_4 = uVar5;
  }
  else {
LAB_100191265:
    piVar3 = ___error();
    uVar2 = FUN_1001eb020(*piVar3);
  }
  return uVar2;
}

