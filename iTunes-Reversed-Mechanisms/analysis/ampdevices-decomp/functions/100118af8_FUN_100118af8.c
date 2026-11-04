// name: FUN_100118af8
// address: 100118af8

ulong FUN_100118af8(long param_1,undefined8 *param_2,uint param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = (uint *)*param_2;
  uVar7 = ((puVar8[1] >> 2) + 1) - (uint)((puVar8[1] & 3) == 0);
  *(uint *)(param_1 + 0x34) = uVar7;
  uVar5 = *puVar8;
  uVar3 = uVar5 >> 5;
  *(uint *)(param_1 + 0x18) = uVar3;
  if (uVar3 < uVar7) {
    *(uint **)(param_1 + 0x40) = puVar8;
    lVar2 = *(long *)(puVar8 + 2);
    *(long *)(param_1 + 0x20) = lVar2;
    uVar5 = uVar5 & 0x1f;
    *(uint *)(param_1 + 0x28) = uVar5;
    puVar1 = (uint *)(lVar2 + (ulong)uVar3 * 4);
    uVar3 = *puVar1;
    *(uint *)(param_1 + 0x2c) =
         (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) <<
         (sbyte)uVar5;
    *(uint **)(param_1 + 0x10) = puVar1;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x40);
  }
  *puVar8 = *puVar8 + 4;
  iVar6 = *(int *)(param_1 + 0x28);
  uVar5 = iVar6 + 4;
  *(uint *)(param_1 + 0x28) = uVar5;
  if (uVar5 < 0x20) {
    uVar5 = *(uint *)(param_1 + 0x2c);
    uVar3 = uVar5 << 4;
  }
  else {
    if (uVar5 != 0x20) {
      *(int *)(param_1 + 0x28) = iVar6 + -0x1c;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar5 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar5 = uVar3 >> (-(char)iVar6 & 0x1fU) | *(uint *)(param_1 + 0x2c);
      *(uint *)(param_1 + 0x2c) = uVar3 << ((byte)(iVar6 + -0x1c) & 0x1f);
      goto LAB_100118bc6;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar3 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar3;
    uVar5 = 0;
    if (uVar3 < *(uint *)(param_1 + 0x34)) {
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
      uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
    }
    uVar3 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    uVar5 = *(uint *)(param_1 + 0x2c);
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
LAB_100118bc6:
  if (1 < (uVar5 >> 0x1c) - 0xd) {
    *puVar8 = *puVar8 + 4;
    iVar6 = *(int *)(param_1 + 0x28);
    uVar5 = iVar6 + 4;
    *(uint *)(param_1 + 0x28) = uVar5;
    if (uVar5 < 0x20) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) << 4;
    }
    else if (uVar5 == 0x20) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      uVar3 = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x18) = uVar3;
      uVar5 = 0;
      if (uVar3 < *(uint *)(param_1 + 0x34)) {
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
        uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 4);
      }
      *(uint *)(param_1 + 0x2c) =
           uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
    }
    else {
      iVar6 = iVar6 + -0x1c;
      *(int *)(param_1 + 0x28) = iVar6;
      lVar2 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar2 + 4;
      uVar5 = *(uint *)(lVar2 + 4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      *(uint *)(param_1 + 0x2c) =
           (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) <<
           ((byte)iVar6 & 0x1f);
    }
    if (param_3 == 1) {
      param_3 = 1;
    }
    else {
      uVar5 = 1;
      do {
        *puVar8 = *puVar8 + 8;
        iVar6 = *(int *)(param_1 + 0x28);
        uVar3 = iVar6 + 8;
        *(uint *)(param_1 + 0x28) = uVar3;
        if (uVar3 < 0x20) {
          uVar3 = *(int *)(param_1 + 0x2c) << 8;
        }
        else if (uVar3 == 0x20) {
          *(undefined4 *)(param_1 + 0x28) = 0;
          uVar7 = *(int *)(param_1 + 0x18) + 1;
          *(uint *)(param_1 + 0x18) = uVar7;
          uVar3 = 0;
          if (uVar7 < *(uint *)(param_1 + 0x34)) {
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 4;
            uVar3 = *(uint *)(*(long *)(param_1 + 0x20) + (ulong)uVar7 * 4);
          }
          uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        }
        else {
          iVar6 = iVar6 + -0x18;
          *(int *)(param_1 + 0x28) = iVar6;
          lVar2 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar2 + 4;
          uVar3 = *(uint *)(lVar2 + 4);
          *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
          uVar3 = (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18)
                  << ((byte)iVar6 & 0x1f);
        }
        *(uint *)(param_1 + 0x2c) = uVar3;
        uVar5 = uVar5 + 1;
      } while (param_3 != uVar5);
    }
    return (ulong)param_3;
  }
  uVar4 = FUN_100118cc6(param_1,param_3,uVar5 >> 0x1c);
  return uVar4;
}

