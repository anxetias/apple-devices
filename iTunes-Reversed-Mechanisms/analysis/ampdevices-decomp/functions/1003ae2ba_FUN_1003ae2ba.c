// name: FUN_1003ae2ba
// address: 1003ae2ba

void FUN_1003ae2ba(uint *param_1,uint *param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16]
                  ,undefined4 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined1 local_78 [16];
  undefined4 *local_60;
  undefined1 local_58 [16];
  undefined1 (*local_40) [16];
  undefined8 *local_38;
  
  auVar7 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  uVar5 = 0;
  if (param_1 != (uint *)0x0 && param_5 != (undefined4 *)0x0) {
    uVar5 = *param_2 & *param_1;
  }
  if ((param_4 != (undefined1 (*) [16])0x0 && param_3 != (undefined1 (*) [16])0x0) &&
      param_6 != (undefined8 *)0x0) {
    auVar7 = *param_4 & *param_3;
  }
  local_60 = param_5;
  local_38 = param_6;
  if (uVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    local_58 = auVar7;
    if (((uVar5 & 1) != 0) && ((ushort)param_1[2] == (ushort)param_2[2])) {
      iVar1 = _memcmp((void *)((long)param_1 + 10),(void *)((long)param_2 + 10),
                      (ulong)((uint)(ushort)param_1[2] * 2));
      uVar2 = (ulong)(iVar1 == 0);
    }
    uVar3 = uVar2;
    local_40 = param_4;
    if (((uVar5 & 4) != 0) && ((ushort)param_1[0x102] == (ushort)param_2[0x102])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x40a),(void *)((long)param_2 + 0x40a),
                      (ulong)((uint)(ushort)param_1[0x102] * 2));
      uVar3 = (ulong)((int)uVar2 + 4);
      if (iVar1 != 0) {
        uVar3 = uVar2;
      }
    }
    uVar2 = uVar3;
    if (((uVar5 >> 0x1e & 1) != 0) && ((ushort)param_1[0x516] == (ushort)param_2[0x516])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x145a),(void *)((long)param_2 + 0x145a),
                      (ulong)((uint)(ushort)param_1[0x516] * 2));
      uVar2 = (ulong)((int)uVar3 + 0x40000000);
      if (iVar1 != 0) {
        uVar2 = uVar3;
      }
    }
    uVar3 = uVar2;
    if (((uVar5 >> 0x15 & 1) != 0) && ((ushort)param_1[0x410] == (ushort)param_2[0x410])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x1042),(void *)((long)param_2 + 0x1042),
                      (ulong)((uint)(ushort)param_1[0x410] * 2));
      uVar3 = (ulong)((uint)uVar2 | 0x200000);
      if (iVar1 != 0) {
        uVar3 = uVar2;
      }
    }
    uVar2 = uVar3;
    if (((uVar5 & 8) != 0) && ((ushort)param_1[0x182] == (ushort)param_2[0x182])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x60a),(void *)((long)param_2 + 0x60a),
                      (ulong)((uint)(ushort)param_1[0x182] * 2));
      uVar2 = (ulong)((uint)uVar3 | 8);
      if (iVar1 != 0) {
        uVar2 = uVar3;
      }
    }
    uVar3 = uVar2;
    if (((uVar5 >> 0x1c & 1) != 0) && ((ushort)param_1[0x495] == (ushort)param_2[0x495])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x1256),(void *)((long)param_2 + 0x1256),
                      (ulong)((uint)(ushort)param_1[0x495] * 2));
      uVar3 = (ulong)((uint)uVar2 | 0x10000000);
      if (iVar1 != 0) {
        uVar3 = uVar2;
      }
    }
    uVar4 = uVar3;
    if (((uVar5 & 0x10) != 0) && ((ushort)param_1[0x202] == (ushort)param_2[0x202])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0x80a),(void *)((long)param_2 + 0x80a),
                      (ulong)((uint)(ushort)param_1[0x202] * 2));
      uVar4 = (ulong)((uint)uVar3 | 0x10);
      if (iVar1 != 0) {
        uVar4 = uVar3;
      }
    }
    param_4 = local_40;
    uVar2 = uVar4;
    auVar7 = local_58;
    if (((uVar5 >> 10 & 1) != 0) && ((ushort)param_1[0x382] == (ushort)param_2[0x382])) {
      iVar1 = _memcmp((void *)((long)param_1 + 0xe0a),(void *)((long)param_2 + 0xe0a),
                      (ulong)((uint)(ushort)param_1[0x382] * 2));
      uVar2 = (ulong)((uint)uVar4 | 0x400);
      auVar7 = local_58;
      if (iVar1 != 0) {
        uVar2 = uVar4;
      }
    }
  }
  if (auVar7 != (undefined1  [16])0x0) {
    uVar8 = auVar7._8_8_;
    uVar6 = auVar7._0_8_;
    local_58._0_8_ = uVar2;
    FUN_1003b7ca6(uVar6,uVar8,0x8000000,0,param_3[0x17c] + 4,param_4[0x17c] + 4,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x4000000,0,param_3[0x15c] + 4,param_4[0x15c] + 4,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x200000000000,0,param_3[0x21e] + 8,param_4[0x21e] + 8,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x400000000000,0,param_3[0x23e] + 8,param_4[0x23e] + 8,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x800000000000,0,param_3[0x25e] + 8,param_4[0x25e] + 8,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x1000000000000,0,param_3[0x27e] + 8,param_4[0x27e] + 8,local_78);
    FUN_1003b7ca6(uVar6,uVar8,0x2000000000000,0,param_3[0x29e] + 8,param_4[0x29e] + 8,local_78);
    uVar2 = local_58._0_8_;
  }
  if (local_60 != (undefined4 *)0x0) {
    *local_60 = (int)uVar2;
  }
  if (local_38 != (undefined8 *)0x0) {
    *local_38 = local_78._0_8_;
    local_38[1] = local_78._8_8_;
  }
  return;
}

