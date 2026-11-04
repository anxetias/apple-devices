// name: FUN_10015dd19
// address: 10015dd19

void FUN_10015dd19(undefined8 param_1,undefined8 *param_2,undefined1 (*param_3) [16],uint param_4)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  float fVar5;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar4 = -(uint)((float)param_1 != DAT_100700b50);
  auVar6._0_4_ = (float)((uint)((float)param_1 * DAT_10070c170) & uVar4);
  auVar6._4_4_ = (float)(int)((ulong)param_1 >> 0x20);
  auVar6._8_4_ = (float)in_XMM0_Dc;
  auVar6._12_4_ = (float)in_XMM0_Dd;
  fVar5 = (float)(~uVar4 & (uint)DAT_10070c170 | (uint)auVar6._0_4_);
  if (3 < param_4) {
    uVar4 = param_4 >> 2;
    pauVar1 = param_3;
    puVar3 = param_2;
    do {
      param_2 = puVar3 + 1;
      param_3 = pauVar1 + 1;
      auVar7 = pmovsxwd(auVar6,*puVar3);
      auVar6._0_4_ = (float)auVar7._0_4_ * fVar5;
      auVar6._4_4_ = (float)auVar7._4_4_ * fVar5;
      auVar6._8_4_ = (float)auVar7._8_4_ * fVar5;
      auVar6._12_4_ = (float)auVar7._12_4_ * fVar5;
      *pauVar1 = auVar6;
      uVar4 = uVar4 - 1;
      pauVar1 = param_3;
      puVar3 = param_2;
    } while (uVar4 != 0);
  }
  if ((param_4 & 3) != 0) {
    lVar2 = 0;
    do {
      *(float *)(*param_3 + lVar2 * 4) = (float)(int)*(short *)((long)param_2 + lVar2 * 2) * fVar5;
      lVar2 = lVar2 + 1;
    } while ((param_4 & 3) != (uint)lVar2);
  }
  return;
}

