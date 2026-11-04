// name: FUN_100114c50
// address: 100114c50

void FUN_100114c50(undefined8 *param_1,undefined1 param_2)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_10011d9e8();
  *param_1 = &PTR_FUN_100835b08;
  param_1[0x184b] = 0;
  param_1[0x1859] = 0x400;
  lVar6 = 0x184c;
  do {
    puVar2 = operator_new(0x10);
    param_1[lVar6] = puVar2;
    *puVar2 = 0;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x1858);
  fVar7 = 0.0;
  lVar6 = -0x40;
  do {
    fVar8 = (float)_exp2f(fVar7);
    fVar1 = DAT_100700b50;
    *(float *)((long)param_1 + lVar6 * 4 + 0xd650) = fVar8;
    *(float *)((long)param_1 + lVar6 * 4 + 0xd7d0) = SQRT(fVar8);
    fVar9 = fVar1 / (fVar8 + fVar1);
    *(float *)((long)param_1 + lVar6 * 4 + 0xd950) = fVar9;
    *(float *)((long)param_1 + lVar6 * 4 + 0xdad0) = SQRT(fVar9);
    *(float *)((long)param_1 + lVar6 * 4 + 0xdbd0) =
         fVar1 / (fVar8 * DAT_100700b28 * DAT_100701cfc + fVar1);
    fVar7 = fVar7 + fVar1;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0);
  lVar6 = 0;
  fVar7 = DAT_100700b24;
  do {
    fVar8 = (float)_exp2f(fVar7);
    fVar1 = DAT_100700b50;
    *(float *)((long)param_1 + lVar6 * 4 + 0xd54c) = fVar8;
    *(float *)((long)param_1 + lVar6 * 4 + 0xd6cc) = SQRT(fVar8);
    fVar8 = fVar1 / (fVar8 + fVar1);
    *(float *)((long)param_1 + lVar6 * 4 + 0xd84c) = fVar8;
    *(float *)((long)param_1 + lVar6 * 4 + 0xd9cc) = SQRT(fVar8);
    fVar7 = fVar7 + DAT_100700b24;
    lVar6 = lVar6 + -1;
  } while (lVar6 != -0x20);
  puVar2 = param_1 + 0x368a;
  lVar6 = (long)param_1 + 0x1b44c;
  lVar4 = 0;
  do {
    lVar5 = 0;
    do {
      fVar7 = *(float *)((long)param_1 + lVar4 * 4 + 0xd550);
      fVar7 = (fVar7 + fVar7) * *(float *)((long)param_1 + lVar5 * 4 + 0xd850);
      fVar8 = *(float *)((long)param_1 + lVar5 * 4 + 0xd550) * fVar7;
      *(float *)((long)puVar2 + lVar5 * 4 + -0xc000) = fVar7;
      fVar9 = fVar1 / (fVar8 + fVar1);
      fVar10 = fVar1 / (fVar7 + fVar1);
      *(float *)((long)puVar2 + lVar5 * 4 + -0x6000) = fVar10;
      *(float *)((long)puVar2 + lVar5 * 4 + -0x9000) = fVar9;
      *(float *)((long)puVar2 + lVar5 * 4) = SQRT(fVar10 * fVar7);
      *(float *)((long)puVar2 + lVar5 * 4 + -0x3000) = SQRT(fVar9 * fVar8);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    lVar5 = 0;
    do {
      fVar7 = *(float *)((long)param_1 + lVar4 * 4 + 0xd550);
      fVar7 = (fVar7 + fVar7) * *(float *)((long)param_1 + lVar5 * 4 + 0xd84c);
      fVar8 = *(float *)((long)param_1 + lVar5 * 4 + 0xd54c) * fVar7;
      *(float *)(lVar6 + -0xc000 + lVar5 * 4) = fVar7;
      fVar9 = fVar1 / (fVar7 + fVar1);
      fVar10 = fVar1 / (fVar8 + fVar1);
      *(float *)(lVar6 + -0x6000 + lVar5 * 4) = fVar9;
      *(float *)(lVar6 + -0x9000 + lVar5 * 4) = fVar10;
      *(float *)(lVar6 + lVar5 * 4) = SQRT(fVar9 * fVar7);
      *(float *)(lVar6 + -0x3000 + lVar5 * 4) = SQRT(fVar10 * fVar8);
      lVar5 = lVar5 + -1;
    } while (lVar5 != -0x20);
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + 0x18;
    lVar6 = lVar6 + 0xc0;
  } while (lVar4 != 0x20);
  puVar2 = param_1 + 0x3672;
  lVar6 = (long)param_1 + 0x1b38c;
  lVar4 = 1;
  do {
    lVar5 = 0;
    do {
      fVar7 = *(float *)((long)param_1 + lVar4 * -4 + 0xd550);
      fVar7 = (fVar7 + fVar7) * *(float *)((long)param_1 + lVar5 * 4 + 0xd850);
      fVar8 = *(float *)((long)param_1 + lVar5 * 4 + 0xd550) * fVar7;
      *(float *)((long)puVar2 + lVar5 * 4 + -0xc000) = fVar7;
      fVar9 = fVar1 / (fVar8 + fVar1);
      fVar10 = fVar1 / (fVar7 + fVar1);
      *(float *)((long)puVar2 + lVar5 * 4 + -0x6000) = fVar10;
      *(float *)((long)puVar2 + lVar5 * 4 + -0x9000) = fVar9;
      *(float *)((long)puVar2 + lVar5 * 4) = SQRT(fVar10 * fVar7);
      *(float *)((long)puVar2 + lVar5 * 4 + -0x3000) = SQRT(fVar9 * fVar8);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x10);
    lVar5 = 0;
    do {
      fVar7 = *(float *)((long)param_1 + lVar4 * -4 + 0xd550);
      fVar7 = (fVar7 + fVar7) * *(float *)((long)param_1 + lVar5 * 4 + 0xd84c);
      fVar8 = *(float *)((long)param_1 + lVar5 * 4 + 0xd54c) * fVar7;
      *(float *)(lVar6 + -0xc000 + lVar5 * 4) = fVar7;
      fVar9 = fVar1 / (fVar7 + fVar1);
      fVar10 = fVar1 / (fVar8 + fVar1);
      *(float *)(lVar6 + -0x6000 + lVar5 * 4) = fVar9;
      *(float *)(lVar6 + -0x9000 + lVar5 * 4) = fVar10;
      *(float *)(lVar6 + lVar5 * 4) = SQRT(fVar9 * fVar7);
      *(float *)(lVar6 + -0x3000 + lVar5 * 4) = SQRT(fVar10 * fVar8);
      lVar5 = lVar5 + -1;
    } while (lVar5 != -0x20);
    lVar4 = lVar4 + 1;
    puVar2 = puVar2 + -0x18;
    lVar6 = lVar6 + -0xc0;
  } while (lVar4 != 0x21);
  uVar3 = FUN_100105f68(0x1e28);
  FUN_100119558(uVar3,param_2,param_1[0x1828]);
  param_1[0x1858] = uVar3;
  return;
}

