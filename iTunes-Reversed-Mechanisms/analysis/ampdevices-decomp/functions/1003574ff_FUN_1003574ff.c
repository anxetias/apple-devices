// name: FUN_1003574ff
// address: 1003574ff

undefined4 FUN_1003574ff(undefined4 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined4 *puVar13;
  ulong uVar14;
  
  *param_2 = 0;
  puVar10 = (undefined4 *)FUN_1001c63e1((ulong)(uint)param_1[4] * 0x68);
  if (puVar10 == (undefined4 *)0x0) {
    uVar9 = 0xffffff94;
  }
  else {
    if (param_1[4] == 0) {
      uVar14 = 0;
    }
    else {
      puVar11 = param_1 + 6;
      uVar12 = 0;
      puVar13 = puVar10;
      do {
        uVar4 = *(undefined8 *)(puVar11 + 0x1a);
        *(undefined8 *)(puVar13 + 0x14) = *(undefined8 *)(puVar11 + 0x18);
        *(undefined8 *)(puVar13 + 0x16) = uVar4;
        *(undefined8 *)(puVar13 + 0x18) = *(undefined8 *)(puVar11 + 0x1c);
        uVar4 = *(undefined8 *)(puVar11 + 0x16);
        *(undefined8 *)(puVar13 + 0x10) = *(undefined8 *)(puVar11 + 0x14);
        *(undefined8 *)(puVar13 + 0x12) = uVar4;
        uVar9 = puVar11[4];
        uVar1 = puVar11[5];
        uVar2 = puVar11[6];
        uVar3 = puVar11[7];
        uVar4 = *(undefined8 *)(puVar11 + 8);
        uVar5 = *(undefined8 *)(puVar11 + 10);
        uVar6 = *(undefined8 *)(puVar11 + 0xc);
        uVar7 = *(undefined8 *)(puVar11 + 0xe);
        uVar8 = *(undefined8 *)(puVar11 + 0x12);
        *(undefined8 *)(puVar13 + 0xc) = *(undefined8 *)(puVar11 + 0x10);
        *(undefined8 *)(puVar13 + 0xe) = uVar8;
        *(undefined8 *)(puVar13 + 8) = uVar6;
        *(undefined8 *)(puVar13 + 10) = uVar7;
        *(undefined8 *)(puVar13 + 4) = uVar4;
        *(undefined8 *)(puVar13 + 6) = uVar5;
        *puVar13 = uVar9;
        puVar13[1] = uVar1;
        puVar13[2] = uVar2;
        puVar13[3] = uVar3;
        *(undefined4 **)(puVar13 + 0x16) = puVar11;
        uVar12 = uVar12 + 1;
        uVar14 = (ulong)(uint)param_1[4];
        puVar13 = puVar13 + 0x1a;
        puVar11 = puVar11 + 0x1e;
      } while (uVar12 < uVar14);
    }
    uVar9 = FUN_100239ad2(puVar10,uVar14,*param_1,param_2);
    FUN_1001c64c1(puVar10);
  }
  return uVar9;
}

