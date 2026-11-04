// name: FUN_1001ad066
// address: 1001ad066

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ad066(undefined1 (*param_1) [16],uint *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = pmovzxwd(ZEXT416(*param_2),ZEXT416(*param_2));
  auVar2._0_8_ = (double)auVar1._0_4_;
  auVar2._8_8_ = (double)auVar1._4_4_;
  auVar1 = divpd(auVar2,_DAT_100710860);
  *param_1 = auVar1;
  *(double *)param_1[1] = (double)(ushort)param_2[1] / _DAT_1007114c0;
  *(undefined8 *)(param_1[1] + 8) = 0x3ff0000000000000;
  *(undefined4 *)param_1[2] = 0;
  return;
}

