// name: FUN_1001b153d
// address: 1001b153d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b153d(void)

{
  long lVar1;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar2 [16];
  
  FUN_1001e9de0(&DAT_1008c5200);
  lVar1 = DAT_1008c5258;
  auVar2._8_8_ = extraout_XMM1_Qb;
  auVar2._0_8_ = extraout_XMM1_Qa;
  *(undefined4 *)(DAT_1008c5258 + 0x58) = 0;
  auVar2 = pmovsxbd(auVar2,_DAT_1007115d0);
  DAT_1008c5278 =
       CONCAT44(*(int *)(lVar1 + 0x20) + (int)((ulong)DAT_1008c5278 >> 0x20),
                auVar2._0_4_ + (int)DAT_1008c5278);
  FUN_1001b0678(&DAT_1008c5260,lVar1);
  *(undefined4 *)(lVar1 + 0x1c) = 1;
  FUN_1001b0eaf(0);
  FUN_1001e9eb9(&DAT_1008c5200);
  return;
}

