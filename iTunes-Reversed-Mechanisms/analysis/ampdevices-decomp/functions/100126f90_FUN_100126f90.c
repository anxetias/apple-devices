// name: FUN_100126f90
// address: 100126f90

void FUN_100126f90(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = param_2;
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = ~(-1 << ((byte)param_4 & 0x1f));
  param_1[5] = 0x200 - param_3;
  param_1[6] = param_5;
  param_1[7] = param_6;
  param_1[8] = param_7;
  return;
}

