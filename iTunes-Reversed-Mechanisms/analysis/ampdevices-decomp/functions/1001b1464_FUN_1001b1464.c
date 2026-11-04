// name: FUN_1001b1464
// address: 1001b1464

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b1464(void)

{
  double dVar1;
  long lVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar6 [16];
  
  lVar2 = DAT_1008c5258;
  dVar4 = (double)FUN_1001ebd46();
  dVar5 = dVar4 - *(double *)(lVar2 + 0x40);
  if ((DAT_1008c52c8 == 0) && (dVar1 = *(double *)(lVar2 + 0x28), dVar5 < dVar1)) {
    if (DAT_1008c5368 != (code *)0x0) {
      cVar3 = (*DAT_1008c5368)();
      if (cVar3 != '\0') goto LAB_1001b14b9;
      dVar1 = *(double *)(lVar2 + 0x28);
    }
    *(double *)(lVar2 + 0x28) = dVar1 - dVar5;
    return;
  }
LAB_1001b14b9:
  FUN_1001e9de0(&DAT_1008c5200);
  auVar6._8_8_ = extraout_XMM1_Qb;
  auVar6._0_8_ = extraout_XMM1_Qa;
  *(undefined4 *)(lVar2 + 0x58) = 0;
  auVar6 = pmovsxbd(auVar6,_DAT_1007115d0);
  DAT_1008c5278 =
       CONCAT44(*(int *)(lVar2 + 0x20) + (int)((ulong)DAT_1008c5278 >> 0x20),
                auVar6._0_4_ + (int)DAT_1008c5278);
  FUN_1001b0678(&DAT_1008c5260,lVar2);
  *(undefined4 *)(lVar2 + 0x1c) = 1;
  FUN_1001b0eaf(dVar4);
  FUN_1001e9eb9(&DAT_1008c5200);
  return;
}

