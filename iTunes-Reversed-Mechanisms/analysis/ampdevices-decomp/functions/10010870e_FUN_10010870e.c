// name: FUN_10010870e
// address: 10010870e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10010870e(undefined8 param_1,double param_2,undefined8 *param_3,uint param_4,
                  undefined4 param_5)

{
  double dVar1;
  double dVar2;
  
  *param_3 = param_1;
  param_3[2] = param_2;
  param_2 = param_2 * _DAT_100700ad8;
  *(uint *)(param_3 + 4) = param_4;
  *(undefined4 *)((long)param_3 + 0x24) = param_5;
  dVar1 = (double)param_4 * param_2 + _DAT_100700ae0;
  dVar2 = DAT_100700ae8;
  if (DAT_100700ae8 <= dVar1) {
    dVar2 = dVar1;
  }
  if (DAT_100700af0 <= dVar2) {
    dVar2 = DAT_100700af0;
  }
  param_3[1] = dVar2;
  if (dVar2 <= _DAT_100700a90) {
    dVar1 = 0.0;
    if (_DAT_100700a98 <= dVar2) {
      dVar2 = dVar2 + DAT_100700aa0;
      dVar1 = (double)_pow(DAT_100700aa8 * dVar2,DAT_100700ab0);
      dVar1 = dVar2 * _DAT_100700ab8 + dVar1;
    }
  }
  else {
    dVar1 = (dVar2 + DAT_100700ac0) * _DAT_100700ac8;
  }
  param_3[3] = dVar1;
  return;
}

