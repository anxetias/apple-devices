// name: FUN_1001b17f6
// address: 1001b17f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1001b17f6(int param_1)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qb;
  undefined8 extraout_XMM1_Qb_00;
  undefined1 auVar6 [16];
  
  bVar1 = DAT_10089fb0a;
  LOCK();
  DAT_10089fb0a = 0;
  uVar5 = (ulong)bVar1;
  UNLOCK();
  if (param_1 != 0) {
    FUN_1001e9de0(&DAT_1008c5200);
    auVar6._8_8_ = extraout_XMM1_Qb;
    auVar6._0_8_ = extraout_XMM1_Qa;
    if (DAT_1008c5258 != DAT_1008c5250) {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_10069ff24(uVar4);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
      auVar6._8_8_ = extraout_XMM1_Qb_00;
      auVar6._0_8_ = extraout_XMM1_Qa_00;
    }
    lVar2 = DAT_1008c5258;
    uVar5 = (ulong)*(uint *)(DAT_1008c5258 + 0x58);
    auVar6 = pmovsxbd(auVar6,_DAT_1007115d0);
    (&DAT_1008c5278)[uVar5 * 5] =
         CONCAT44(*(int *)(DAT_1008c5258 + 0x20) + (int)((ulong)(&DAT_1008c5278)[uVar5 * 5] >> 0x20)
                  ,auVar6._0_4_ + (int)(&DAT_1008c5278)[uVar5 * 5]);
    FUN_1001b0678(&DAT_1008c5260 + uVar5 * 0x28,lVar2);
    *(undefined4 *)(lVar2 + 0x1c) = 1;
    FUN_1001b0eaf(0);
    uVar5 = FUN_1001e9eb9(&DAT_1008c5200);
  }
  return uVar5;
}

