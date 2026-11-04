// name: FUN_100122e60
// address: 100122e60

void FUN_100122e60(undefined8 param_1,char param_2,char *param_3,uint param_4,char *param_5)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  
  *param_5 = param_2;
  uVar3 = 1;
  if ((param_4 & 1) == 0) {
    param_5[1] = param_2 + *param_3;
    uVar3 = 2;
  }
  if (uVar3 <= param_4) {
    uVar4 = (ulong)uVar3;
    do {
      cVar1 = param_3[uVar4 - 1];
      cVar2 = param_5[uVar4 - 1];
      param_5[uVar4] = cVar1 + cVar2;
      param_5[uVar4 + 1] = cVar1 + cVar2 + param_3[uVar4];
      uVar4 = uVar4 + 2;
    } while ((uint)uVar4 <= param_4);
  }
  return;
}

