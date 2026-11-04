// name: FUN_100108626
// address: 100108626

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100108626(undefined8 param_1,double param_2,double param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  *param_4 = param_1;
  param_4[2] = param_3;
  *(undefined4 *)((long)param_4 + 0x24) = param_5;
  dVar1 = DAT_100700ae8;
  if (DAT_100700ae8 <= param_2) {
    dVar1 = param_2;
  }
  if (DAT_100700af0 <= dVar1) {
    dVar1 = DAT_100700af0;
  }
  param_4[1] = dVar1;
  if (dVar1 <= _DAT_100700a90) {
    dVar2 = 0.0;
    if (_DAT_100700a98 <= dVar1) {
      dVar3 = DAT_100700aa0 + dVar1;
      dVar2 = (double)_pow(DAT_100700aa8 * dVar3,DAT_100700ab0);
      dVar2 = dVar3 * _DAT_100700ab8 + dVar2;
    }
  }
  else {
    dVar2 = (DAT_100700ac0 + dVar1) * _DAT_100700ac8;
  }
  dVar1 = (dVar1 + _DAT_100700ad0) / (param_3 * _DAT_100700ad8) + DAT_100700458;
  param_4[3] = dVar2;
  *(int *)(param_4 + 4) = (int)(long)dVar1;
  return;
}

