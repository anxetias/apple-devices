// name: FUN_1001953aa
// address: 1001953aa

undefined1 (*) [16] FUN_1001953aa(double param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined8 *)*param_2 = *param_3;
  *(undefined8 *)(*param_2 + 8) = uVar1;
  *(undefined8 *)param_2[1] = uVar2;
  *(undefined8 *)(param_2[1] + 8) = uVar3;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = param_1;
  auVar5._0_8_ = *(double *)*param_2 * param_1;
  auVar5._8_8_ = *(double *)(*param_2 + 8) * param_1;
  auVar5 = roundpd(auVar5,auVar5,9);
  *param_2 = auVar5;
  auVar6._0_8_ = *(double *)param_2[1] * param_1;
  auVar6._8_8_ = *(double *)(param_2[1] + 8) * param_1;
  auVar4 = roundpd(auVar4,auVar6,9);
  param_2[1] = auVar4;
  return param_2;
}

