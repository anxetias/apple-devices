// name: FUN_1001c7df4
// address: 1001c7df4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001c7df4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [12];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  auVar8 = in_XMM0._4_12_;
  uVar3 = 2;
  if ((param_2 != 1) && (uVar3 = param_2, (param_2 & param_2 - 1) != 0)) {
    uVar3 = std::__next_prime(param_2);
    auVar7._8_8_ = extraout_XMM0_Qb;
    auVar7._0_8_ = extraout_XMM0_Qa;
    auVar8 = auVar7._4_12_;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < uVar3) {
LAB_1001c7e2f:
    FUN_100278f1e(param_1,uVar3);
    return;
  }
  if (uVar3 < uVar1) {
    auVar6._0_4_ = (float)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20);
    auVar6._4_12_ = auVar8;
    auVar7 = roundss(auVar6,auVar6,10);
    uVar4 = (ulong)auVar7._0_4_;
    uVar4 = (long)(auVar7._0_4_ - _DAT_10070844c) & (long)uVar4 >> 0x3f | uVar4;
    if ((uVar1 < 3) ||
       (uVar5 = uVar1 - (uVar1 >> 1 & 0x5555555555555555),
       uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333),
       1 < (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
      uVar5 = std::__next_prime(uVar4);
    }
    else {
      lVar2 = 0x3f;
      if (uVar4 - 1 != 0) {
        for (; uVar4 - 1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar5 = 1L << (-((byte)lVar2 ^ 0x3f) & 0x3f);
      if (uVar4 < 2) {
        uVar5 = uVar4;
      }
    }
    if (uVar3 <= uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 < uVar1) goto LAB_1001c7e2f;
  }
  return;
}

