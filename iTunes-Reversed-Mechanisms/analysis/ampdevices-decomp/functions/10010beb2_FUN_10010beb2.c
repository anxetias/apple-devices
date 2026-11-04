// name: FUN_10010beb2
// address: 10010beb2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010beb2(undefined8 *param_1,ulong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  
  param_2 = param_2 & 0xffffffff;
  *param_1 = &PTR_FUN_100830080;
  *(undefined8 *)((long)param_1 + 0x1ab6c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab74) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab7c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab84) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab8c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab94) = 0;
  *(undefined8 *)((long)param_1 + 0x1ab9c) = 0;
  *(undefined8 *)((long)param_1 + 0x1aba4) = 0;
  *(undefined8 *)((long)param_1 + 0x1abac) = 0;
  *(undefined8 *)((long)param_1 + 0x1abb4) = 0;
  *(undefined8 *)((long)param_1 + 0x1abbc) = 0;
  *(undefined8 *)((long)param_1 + 0x1abc4) = 0;
  *(undefined8 *)((long)param_1 + 0x1abcc) = 0;
  *(undefined8 *)((long)param_1 + 0x1abd4) = 0;
  *(undefined8 *)((long)param_1 + 0x1abdc) = 0;
  param_1[0x3581] = &PTR_DAT_100830090;
  param_1[0x3582] = &PTR_DAT_100830190;
  param_1[0x3b78] = &PTR_s____113_______100830290;
  param_1[0x3b79] = &PTR_DAT_1008302a0;
  param_1[0x357d] = param_5;
  uVar4 = FUN_10010c1a2();
  if (DAT_10088fc10 != -1) {
    FUN_100669e8c();
  }
  fVar9 = 0.0;
  lVar8 = 0x6f86;
  do {
    dVar2 = (double)_exp2(SUB84(((double)fVar9 + _DAT_100700c20) * DAT_100700c28,0));
    *(float *)((long)param_1 + lVar8 * 4) = (float)dVar2;
    *(float *)((long)param_1 + lVar8 * 4 + 0x400) = (float)dVar2;
    dVar2 = (double)_exp2(SUB84((double)fVar9 * DAT_100700c28,0));
    *(float *)((long)param_1 + lVar8 * 4 + 0x828) = (float)dVar2;
    fVar9 = fVar9 + DAT_100700b50;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x7086);
  fVar9 = 0.0;
  lVar8 = 0x6b86;
  do {
    dVar2 = (double)_pow(SUB84((double)fVar9,0),DAT_100700c30);
    *(float *)((long)param_1 + lVar8 * 4) = (float)dVar2;
    uVar3 = _DAT_100700430;
    fVar9 = fVar9 + DAT_100700b50;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x6f86);
  puVar5 = (uint *)((long)param_1 + 0x1ae14);
  lVar8 = 0x6b87;
  do {
    *puVar5 = *(uint *)((long)param_1 + lVar8 * 4) ^ uVar3;
    lVar8 = lVar8 + 1;
    puVar5 = puVar5 + -1;
  } while (lVar8 != 0x6c07);
  param_1[0x357e] = &PTR_DAT_1008302b0;
  param_1[0x357f] = &PTR_DAT_10088e990;
  param_1[0x3580] = &PTR_DAT_1008302c8;
  param_1[0x38c5] = &DAT_1008c4cbc;
  param_1[0x38c6] = &DAT_100700ccd;
  param_1[0x38c3] = param_1 + 0x37c3;
  param_1[0x38c4] = param_1 + 0x3843;
  param_1[0x38c7] = param_1 + 0x35c3;
  param_1[0x3b4c] = DAT_100700c50;
  FUN_10010c8a8(param_1);
  param_1[0x3b75] = param_1 + 0x3b6b;
  param_1[0x3b76] = param_1 + 0x3b71;
  uVar6 = (ulong)uVar4;
  uVar7 = (ulong)param_4;
  puVar1 = (&PTR_DAT_100830350)[uVar6 * 8 + uVar7];
  *(undefined *)(param_1 + 0x3b77) = (&PTR_DAT_100830330)[uVar6 * 8 + uVar7][param_2];
  *(undefined *)((long)param_1 + 0x1dbb9) = puVar1[param_2];
  *(undefined1 *)((long)param_1 + 0x1dbba) =
       *(undefined1 *)(*(long *)(param_1[0x3b79] + uVar6 * 8) + param_2);
  *(undefined1 *)((long)param_1 + 0x1dbbb) =
       *(undefined1 *)(*(long *)(param_1[0x3b78] + uVar6 * 8) + param_2);
  *(char *)((long)param_1 + 0x4c) = "\x14\f\f"[uVar7];
  return;
}

