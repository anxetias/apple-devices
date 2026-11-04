// name: FUN_1001d0338
// address: 1001d0338

undefined8 FUN_1001d0338(long param_1,uint param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 == *(uint *)(param_1 + 0x14)) {
    lVar6 = FUN_1001c6429((ulong)(uVar7 + 3) << 5);
    if (lVar6 == 0) {
      return 0xffffff94;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_1001c631b(*(long *)(param_1 + 0x68),lVar6,(ulong)*(uint *)(param_1 + 0x10) << 5);
      FUN_1001c64c1(*(undefined8 *)(param_1 + 0x68));
    }
    *(long *)(param_1 + 0x68) = lVar6;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 3;
    uVar7 = *(uint *)(param_1 + 0x10);
  }
  uVar5 = param_2;
  if (uVar7 < param_2) {
    uVar5 = uVar7;
  }
  if (param_2 < uVar7) {
    FUN_1001c631b((ulong)uVar5 * 0x20 + *(long *)(param_1 + 0x68),
                  (ulong)(uVar5 + 1) * 0x20 + *(long *)(param_1 + 0x68),(ulong)(uVar7 - uVar5) << 5)
    ;
  }
  lVar6 = *(long *)(param_1 + 0x68);
  lVar8 = (ulong)uVar5 * 0x20;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[3];
  puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar8);
  *puVar1 = param_3[2];
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)(lVar6 + lVar8);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return 0;
}

