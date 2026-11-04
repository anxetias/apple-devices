// name: FUN_100194bff
// address: 100194bff

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100194bff(undefined1 (*param_1) [16],undefined1 (*param_2) [16],uint param_3,
                  double *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  char cVar4;
  undefined4 in_EAX;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  
  dVar1 = *(double *)(*param_1 + 8);
  if ((dVar1 == 0.0) && (!NAN(dVar1))) {
    return;
  }
  auVar2 = *param_1;
  dVar3 = auVar2._0_8_;
  if ((dVar3 == 0.0) && (!NAN(dVar3))) {
    return;
  }
  dVar7 = DAT_100700458;
  if ((param_3 >> 0xb & 1) == 0) {
    auVar10 = *param_2;
    auVar8 = divpd(auVar10,auVar2);
    dVar6 = auVar8._0_8_;
    dVar9 = auVar8._8_8_;
    if ((param_3 >> 0xc & 1) == 0) {
      if ((((param_3 >> 8 & 1) == 0) &&
          (auVar8._8_8_ = -(ulong)(dVar9 < _UNK_10070e4f8),
          auVar8._0_8_ = -(ulong)(dVar6 < _DAT_10070e4f0), uVar5 = movmskpd(in_EAX,auVar8),
          (byte)((byte)uVar5 >> 1) == 0)) && ((uVar5 & 1) == 0)) goto LAB_100194d7b;
      cVar4 = '\0';
      if ((((param_3 & 0x200) != 0) && (auVar10._8_8_ == auVar10._0_8_)) &&
         (cVar4 = (char)((param_3 & 0x200) >> 9),
         (double)(~-(ulong)(dVar1 < dVar3) & (ulong)(dVar3 / dVar1) |
                 (ulong)(dVar1 / dVar3) & -(ulong)(dVar1 < dVar3)) < DAT_10070e5f8)) {
        cVar4 = '\0';
      }
      dVar7 = dVar6;
      if (((param_3 >> 0xd & 1) == 0) && (dVar7 = dVar9, (param_3 >> 0xe & 1) == 0)) {
        if (cVar4 == '\0') {
          if (dVar6 <= dVar9) {
            dVar7 = dVar6;
          }
        }
        else {
          dVar7 = dVar6;
          if (dVar6 <= dVar9) {
            dVar7 = dVar9;
          }
        }
      }
    }
    else {
      dVar7 = dVar9;
      if (dVar9 <= dVar6) {
        dVar7 = dVar6;
      }
    }
    auVar10._0_8_ = dVar7 * dVar3 + _DAT_10070e610;
    auVar10._8_8_ = dVar7 * auVar2._8_8_ + _UNK_10070e618;
    roundpd(auVar10,auVar10,9);
  }
LAB_100194d7b:
  if (param_4 != (double *)0x0) {
    *param_4 = dVar7;
  }
  return;
}

