// name: FUN_1001b0d8d
// address: 1001b0d8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001b0d8d(double param_1)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qb;
  undefined1 auVar5 [16];
  
  dVar4 = (double)FUN_1001ebd46();
  if ((param_1 == 0.0) && (!NAN(param_1))) {
    FUN_1001e9de0(&DAT_1008c5200);
    lVar1 = DAT_1008c5258;
    auVar5._8_8_ = extraout_XMM1_Qb;
    auVar5._0_8_ = extraout_XMM1_Qa;
    *(undefined4 *)(DAT_1008c5258 + 0x58) = 0;
    auVar5 = pmovsxbd(auVar5,_DAT_1007115d0);
    DAT_1008c5278 =
         CONCAT44(*(int *)(lVar1 + 0x20) + (int)((ulong)DAT_1008c5278 >> 0x20),
                  auVar5._0_4_ + (int)DAT_1008c5278);
    FUN_1001b0678(&DAT_1008c5260,lVar1);
    *(undefined4 *)(lVar1 + 0x1c) = 1;
    FUN_1001b0eaf(dVar4);
    FUN_1001e9eb9(&DAT_1008c5200);
    return;
  }
  if (DAT_1008c5258 == DAT_1008c5250) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069fdc2(uVar3);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  *(double *)(DAT_1008c5258 + 0x48) = dVar4 + param_1;
  FUN_1001b0cb9();
  return;
}

