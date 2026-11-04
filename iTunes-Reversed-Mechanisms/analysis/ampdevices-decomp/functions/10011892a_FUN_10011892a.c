// name: FUN_10011892a
// address: 10011892a

undefined4 FUN_10011892a(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  
  puVar5 = (uint *)*param_2;
  uVar7 = *puVar5;
  uVar3 = puVar5[1];
  uVar8 = 0xfffffffe;
  if (uVar7 < uVar3 * 8) {
    uVar6 = ((uVar3 >> 2) + 1) - (uint)((uVar3 & 3) == 0);
    *(uint *)((long)param_1 + 0x34) = uVar6;
    uVar3 = uVar7 >> 5;
    *(uint *)(param_1 + 3) = uVar3;
    if (uVar3 < uVar6) {
      param_1[8] = (long)puVar5;
      lVar2 = *(long *)(puVar5 + 2);
      param_1[4] = lVar2;
      *(uint *)(param_1 + 5) = uVar7 & 0x1f;
      puVar1 = (uint *)(lVar2 + (ulong)uVar3 * 4);
      uVar3 = *puVar1;
      *(uint *)((long)param_1 + 0x2c) =
           (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <<
           (sbyte)(uVar7 & 0x1f);
      param_1[2] = (long)puVar1;
    }
    else {
      puVar5 = (uint *)param_1[8];
    }
    *puVar5 = *puVar5 + 4;
    iVar4 = (int)param_1[5];
    uVar7 = iVar4 + 4;
    *(uint *)(param_1 + 5) = uVar7;
    if (uVar7 < 0x20) {
      uVar7 = *(uint *)((long)param_1 + 0x2c);
      *(uint *)((long)param_1 + 0x2c) = uVar7 << 4;
    }
    else if (uVar7 == 0x20) {
      *(undefined4 *)(param_1 + 5) = 0;
      uVar7 = (int)param_1[3] + 1;
      *(uint *)(param_1 + 3) = uVar7;
      uVar3 = 0;
      if (uVar7 < *(uint *)((long)param_1 + 0x34)) {
        param_1[2] = param_1[2] + 4;
        uVar3 = *(uint *)(param_1[4] + (ulong)uVar7 * 4);
      }
      uVar7 = *(uint *)((long)param_1 + 0x2c);
      *(uint *)((long)param_1 + 0x2c) =
           uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
    else {
      *(int *)(param_1 + 5) = iVar4 + -0x1c;
      lVar2 = param_1[2];
      param_1[2] = lVar2 + 4;
      uVar7 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 3) = (int)param_1[3] + 1;
      uVar3 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar3 >> (-(char)iVar4 & 0x1fU) | *(uint *)((long)param_1 + 0x2c);
      *(uint *)((long)param_1 + 0x2c) = uVar3 << ((byte)(iVar4 + -0x1c) & 0x1f);
    }
    uVar7 = uVar7 >> 0x1c;
    uVar8 = 0;
    if (uVar7 != 0) {
      if (uVar7 == 0xf) {
        *puVar5 = *puVar5 + 8;
        iVar4 = (int)param_1[5];
        uVar7 = iVar4 + 8;
        *(uint *)(param_1 + 5) = uVar7;
        if (uVar7 < 0x20) {
          uVar7 = *(uint *)((long)param_1 + 0x2c);
          *(uint *)((long)param_1 + 0x2c) = uVar7 << 8;
        }
        else if (uVar7 == 0x20) {
          *(undefined4 *)(param_1 + 5) = 0;
          uVar7 = (int)param_1[3] + 1;
          *(uint *)(param_1 + 3) = uVar7;
          uVar3 = 0;
          if (uVar7 < *(uint *)((long)param_1 + 0x34)) {
            param_1[2] = param_1[2] + 4;
            uVar3 = *(uint *)(param_1[4] + (ulong)uVar7 * 4);
          }
          uVar7 = *(uint *)((long)param_1 + 0x2c);
          *(uint *)((long)param_1 + 0x2c) =
               uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        }
        else {
          *(int *)(param_1 + 5) = iVar4 + -0x18;
          lVar2 = param_1[2];
          param_1[2] = lVar2 + 4;
          uVar7 = *(uint *)(lVar2 + 4);
          *(int *)(param_1 + 3) = (int)param_1[3] + 1;
          uVar3 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
          uVar7 = uVar3 >> (-(char)iVar4 & 0x1fU) | *(uint *)((long)param_1 + 0x2c);
          *(uint *)((long)param_1 + 0x2c) = uVar3 << ((byte)(iVar4 + -0x18) & 0x1f);
        }
        uVar7 = (uVar7 >> 0x18) + 0xe;
      }
      do {
        iVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,uVar7);
        uVar7 = uVar7 - iVar4;
      } while (uVar7 != 0);
      uVar8 = 0;
    }
  }
  return uVar8;
}

