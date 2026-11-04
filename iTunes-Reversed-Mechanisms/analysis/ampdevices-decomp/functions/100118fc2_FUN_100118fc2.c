// name: FUN_100118fc2
// address: 100118fc2

void FUN_100118fc2(uint *param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = (float)param_2 * DAT_100700b28;
  *param_1 = param_2;
  param_1[1] = (uint)(DAT_100704240 / fVar1);
  return;
}

