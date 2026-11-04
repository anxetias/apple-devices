// name: FUN_10054d85c
// address: 10054d85c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054d85c(long param_1,uint *param_2,ulong *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (param_2 != (uint *)0x0) {
    if (((*(char *)(param_1 + 0x874) == '\x01') && (*(int *)(param_1 + 0x850) != 0x616c6163)) &&
       (1 < *(uint *)(param_1 + 0x878))) {
      *(byte *)(param_2 + 0x40e) = (byte)param_2[0x40e] | 2;
    }
    param_2[0x405] = *(uint *)(param_1 + 0x14b8);
    param_2[0x40a] = *(uint *)(param_1 + 0x86c) / 1000;
    fVar1 = *(float *)(param_1 + 0x858);
    param_2[0x515] = (uint)fVar1;
    uVar5 = 0xffff0000;
    if (fVar1 < DAT_1007439c0) {
      uVar5 = (uint)(long)(fVar1 * _DAT_1007439c4);
    }
    param_2[0x40b] = uVar5;
    *param_2 = *param_2 | 0x38800;
  }
  if (param_3 != (ulong *)0x0) {
    *(undefined2 *)((long)param_3 + 0x16) = *(undefined2 *)(param_1 + 0x85c);
    uVar4 = param_3[1];
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x6c8);
    auVar8._0_8_ = auVar2._8_8_;
    auVar8._8_4_ = auVar2._0_4_;
    auVar8._12_4_ = auVar2._4_4_;
    *(undefined1 (*) [16])(param_3 + 0xe) = auVar8;
    uVar6 = *(ulong *)(param_1 + 0x6e0);
    param_3[0x10] = *(ulong *)(param_1 + 0x6d8);
    param_3[0x11] = uVar6;
    *(undefined4 *)((long)param_3 + 0x94) = *(undefined4 *)(param_1 + 0x6e8);
    uVar6 = *(ulong *)(param_1 + 0x6f8);
    param_3[0x13] = *(ulong *)(param_1 + 0x6f0);
    param_3[0x14] = uVar6;
    if (*(ulong *)(param_1 + 0x700) == 0) {
      uVar6 = 0x1000000000;
    }
    else {
      param_3[0x1a0] = *(ulong *)(param_1 + 0x700);
      uVar6 = 0x1001000000;
    }
    uVar6 = *param_3 | uVar6;
    if (*(int *)(param_1 + 0x61e0) != 0) {
      *(int *)((long)param_3 + 0x1c) = *(int *)(param_1 + 0x61e0);
      uVar6 = uVar6 | 0x4000000000;
    }
    *(undefined4 *)(param_3 + 0x12) = *(undefined4 *)(param_1 + 0x6ec);
    *(undefined4 *)(param_3 + 0x15) = *(undefined4 *)(param_1 + 0x70c);
    uVar6 = uVar6 | 8;
    *param_3 = uVar6;
    param_3[1] = uVar4;
    if (*(short *)(param_1 + 0x4c8) != 0) {
      FUN_1001e1c39(param_1 + 0x4c8,param_3 + 0x59);
      uVar6 = *param_3;
      uVar4 = param_3[1] | 2;
      param_3[1] = uVar4;
    }
    if (*(int *)(param_1 + 0x850) == 0x616c6163) {
      *(undefined2 *)((long)param_3 + 0x1a) = 0x259;
    }
    else {
      switch(*(undefined1 *)(param_1 + 0x891)) {
      case 1:
        *(undefined2 *)((long)param_3 + 0x1a) = 0x1f5;
        break;
      case 2:
        if (*(char *)(param_1 + 0x649a) == '\x03') {
          *(undefined2 *)((long)param_3 + 0x1a) = 0x1fd;
        }
        else if (*(char *)(param_1 + 0x649a) == '\x02') {
          *(undefined2 *)((long)param_3 + 0x1a) = 0x1fc;
        }
        else {
          *(undefined2 *)((long)param_3 + 0x1a) = 0x1f6;
        }
        break;
      case 3:
        *(undefined2 *)((long)param_3 + 0x1a) = 0x1f7;
        break;
      case 4:
        *(undefined2 *)((long)param_3 + 0x1a) = 0x1f8;
        break;
      default:
        *(undefined2 *)((long)param_3 + 0x1a) = 1;
      }
    }
    *param_3 = uVar6 | 4;
    param_3[1] = uVar4;
    if ((*(char *)(param_1 + 0x64ab) == '\x01') && (*(char *)(param_1 + 0x64ac) == '\0')) {
      uVar5 = *(uint *)(param_1 + 0x14a0);
      *(uint *)(param_3 + 0xb) = uVar5;
      uVar3 = *(ulong *)(param_1 + 0x1498);
      *(int *)((long)param_3 + 0x5c) = (int)uVar3 - *(int *)(param_1 + 0x14a8);
      uVar7 = *(ulong *)(param_1 + 0x14b0);
      param_3[0xc] = uVar7;
      param_3[0xd] = 0;
      if (*(char *)(param_1 + 0x649b) != '\0') {
        uVar5 = uVar5 >> 1;
        *(uint *)(param_3 + 0xb) = uVar5;
        uVar7 = uVar7 >> 1;
        param_3[0xc] = uVar7;
        *(uint *)((long)param_3 + 0x5c) = (int)(uVar3 >> 1) - ((int)uVar7 + uVar5);
      }
      *param_3 = uVar6 | 0x40000004;
      param_3[1] = uVar4;
      *(byte *)((long)param_3 + 0x54) = *(byte *)((long)param_3 + 0x54) | 1;
    }
  }
  return;
}

