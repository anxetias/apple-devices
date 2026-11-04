// name: FUN_1003860fc
// address: 1003860fc

void FUN_1003860fc(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_2[1];
  if (param_1[1] == 0) {
    *param_1 = lVar1;
  }
  uVar2 = lVar1 - *param_2;
  param_1[2] = param_1[2] + uVar2;
  param_1[1] = param_1[1] + 1;
  if (uVar2 <= (ulong)param_1[3]) {
    param_1[3] = uVar2;
  }
  if ((ulong)param_1[4] <= uVar2) {
    param_1[4] = uVar2;
  }
  return;
}

