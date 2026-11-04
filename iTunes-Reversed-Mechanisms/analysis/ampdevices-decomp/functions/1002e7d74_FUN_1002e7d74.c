// name: FUN_1002e7d74
// address: 1002e7d74

undefined8 * FUN_1002e7d74(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  
  puVar14 = operator_new(0x68);
  *puVar14 = &PTR_FUN_100853048;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = *(undefined4 *)(param_1 + 0x24);
  uVar5 = *(undefined4 *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 0x38);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x44);
  puVar14[1] = *(undefined8 *)(param_1 + 8);
  puVar14[2] = uVar13;
  *(undefined4 *)(puVar14 + 3) = uVar1;
  *(undefined4 *)((long)puVar14 + 0x1c) = uVar2;
  *(undefined4 *)(puVar14 + 4) = uVar3;
  *(undefined4 *)((long)puVar14 + 0x24) = uVar4;
  *(undefined4 *)(puVar14 + 5) = uVar5;
  *(undefined4 *)((long)puVar14 + 0x2c) = uVar6;
  *(undefined4 *)(puVar14 + 6) = uVar7;
  *(undefined4 *)((long)puVar14 + 0x34) = uVar8;
  *(undefined4 *)(puVar14 + 7) = uVar9;
  *(undefined4 *)((long)puVar14 + 0x3c) = uVar10;
  *(undefined4 *)(puVar14 + 8) = uVar11;
  *(undefined4 *)((long)puVar14 + 0x44) = uVar12;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(puVar14 + 9) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((long)puVar14 + 0x4c) = uVar1;
  *(undefined4 *)(puVar14 + 10) = uVar2;
  *(undefined4 *)((long)puVar14 + 0x54) = uVar3;
  FUN_1001a7a9e(puVar14 + 0xb,param_1 + 0x58);
  return puVar14;
}

