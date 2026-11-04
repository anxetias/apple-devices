// name: FUN_10016e63e
// address: 10016e63e

undefined1  [16] FUN_10016e63e(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar1 = *param_1 & 0xffffffff;
  uVar2 = *param_1 >> 0x20;
  uVar6 = *param_2 & 0xffffffff;
  uVar4 = *param_2 >> 0x20;
  uVar5 = uVar4 * uVar1;
  uVar3 = uVar2 * uVar6;
  auVar7._0_8_ = ((uVar5 & 0xffffffff) + (uVar3 & 0xffffffff) + (uVar6 * uVar1 >> 0x20) + 0x80000000
                 >> 0x20) + (uVar5 >> 0x20) + (uVar3 >> 0x20) + uVar4 * uVar2;
  auVar7._8_4_ = (int)param_2[1] + (int)param_1[1] + 0x40;
  auVar7._12_4_ = 0;
  return auVar7;
}

